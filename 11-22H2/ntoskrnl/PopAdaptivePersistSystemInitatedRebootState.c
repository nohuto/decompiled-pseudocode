/*
 * XREFs of PopAdaptivePersistSystemInitatedRebootState @ 0x14059DEF8
 * Callers:
 *     PopGracefulShutdown @ 0x140AA0B20 (PopGracefulShutdown.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     PopBcdOpen @ 0x1408043A0 (PopBcdOpen.c)
 *     PopBcdClose @ 0x1408043E0 (PopBcdClose.c)
 *     BcdCloseObject @ 0x140807480 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x1408074C4 (BcdOpenObject.c)
 *     PopDiagTraceAdaptiveBootOverridePrepared @ 0x14098C57C (PopDiagTraceAdaptiveBootOverridePrepared.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetBootEntry @ 0x14099B870 (PopAdaptiveGetSystemInitiatedRebootTargetBootEntry.c)
 *     BcdSetElementData @ 0x140A5C8A4 (BcdSetElementData.c)
 */

__int64 __fastcall PopAdaptivePersistSystemInitatedRebootState(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  NTSTATUS SystemInitiatedRebootTargetBootEntry; // ebx
  int v5; // eax
  NTSTATUS v6; // eax
  HANDLE BcdObjectHandle; // [rsp+20h] [rbp-30h] BYREF
  HANDLE BcdStoreHandle; // [rsp+28h] [rbp-28h] BYREF
  __int64 Buffer; // [rsp+30h] [rbp-20h] BYREF
  GUID Identifier; // [rsp+38h] [rbp-18h] BYREF

  Buffer = 0LL;
  v2 = -1LL;
  v3 = -1LL;
  BcdStoreHandle = (HANDLE)-1LL;
  Identifier = 0LL;
  BcdObjectHandle = (HANDLE)-1LL;
  if ( byte_140D532A0 )
  {
    v5 = PopBcdOpen(&BcdStoreHandle);
    v2 = (__int64)BcdStoreHandle;
    SystemInitiatedRebootTargetBootEntry = v5;
    if ( v5 >= 0 )
    {
      SystemInitiatedRebootTargetBootEntry = PopAdaptiveGetSystemInitiatedRebootTargetBootEntry(
                                               BcdStoreHandle,
                                               &Identifier);
      if ( SystemInitiatedRebootTargetBootEntry >= 0 )
      {
        v6 = BcdOpenObject((HANDLE)v2, &Identifier, &BcdObjectHandle);
        v3 = (__int64)BcdObjectHandle;
        SystemInitiatedRebootTargetBootEntry = v6;
        if ( v6 >= 0 )
        {
          Buffer = qword_140D532A8;
          SystemInitiatedRebootTargetBootEntry = BcdSetElementData(BcdObjectHandle, 0x2500015Au, &Buffer, 8u);
        }
      }
    }
  }
  else
  {
    SystemInitiatedRebootTargetBootEntry = 279;
  }
  LOBYTE(a2) = (Buffer & 8) != 0;
  PopDiagTraceAdaptiveBootOverridePrepared(Buffer & 7, a2, (unsigned int)SystemInitiatedRebootTargetBootEntry);
  if ( v3 != -1 )
    BcdCloseObject((HANDLE)v3);
  if ( v2 != -1 )
    PopBcdClose(v2);
  return (unsigned int)SystemInitiatedRebootTargetBootEntry;
}

/*
 * XREFs of PopAdaptivePersistSystemInitatedRebootState @ 0x14059DE68
 * Callers:
 *     PopGracefulShutdown @ 0x140AA0A60 (PopGracefulShutdown.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     PopBcdOpen @ 0x140801E1C (PopBcdOpen.c)
 *     PopBcdClose @ 0x140801E5C (PopBcdClose.c)
 *     BcdCloseObject @ 0x140804F00 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x140804F44 (BcdOpenObject.c)
 *     PopDiagTraceAdaptiveBootOverridePrepared @ 0x14098C4CC (PopDiagTraceAdaptiveBootOverridePrepared.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetBootEntry @ 0x14099B7C0 (PopAdaptiveGetSystemInitiatedRebootTargetBootEntry.c)
 *     BcdSetElementData @ 0x140A5C834 (BcdSetElementData.c)
 */

__int64 __fastcall PopAdaptivePersistSystemInitatedRebootState(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  int SystemInitiatedRebootTargetBootEntry; // ebx
  int v5; // eax
  int v6; // eax
  __int64 v8; // [rsp+20h] [rbp-30h] BYREF
  __int64 v9; // [rsp+28h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-20h] BYREF
  __int128 v11; // [rsp+38h] [rbp-18h] BYREF

  v10 = 0LL;
  v2 = -1LL;
  v3 = -1LL;
  v9 = -1LL;
  v11 = 0LL;
  v8 = -1LL;
  if ( byte_140D532A0 )
  {
    v5 = PopBcdOpen(&v9);
    v2 = v9;
    SystemInitiatedRebootTargetBootEntry = v5;
    if ( v5 >= 0 )
    {
      SystemInitiatedRebootTargetBootEntry = PopAdaptiveGetSystemInitiatedRebootTargetBootEntry(v9, &v11);
      if ( SystemInitiatedRebootTargetBootEntry >= 0 )
      {
        v6 = BcdOpenObject(v2, &v11, &v8);
        v3 = v8;
        SystemInitiatedRebootTargetBootEntry = v6;
        if ( v6 >= 0 )
        {
          v10 = qword_140D532A8;
          SystemInitiatedRebootTargetBootEntry = BcdSetElementData(v8, 620757338LL, &v10, 8LL);
        }
      }
    }
  }
  else
  {
    SystemInitiatedRebootTargetBootEntry = 279;
  }
  LOBYTE(a2) = (v10 & 8) != 0;
  PopDiagTraceAdaptiveBootOverridePrepared(v10 & 7, a2, (unsigned int)SystemInitiatedRebootTargetBootEntry);
  if ( v3 != -1 )
    BcdCloseObject(v3);
  if ( v2 != -1 )
    PopBcdClose(v2);
  return (unsigned int)SystemInitiatedRebootTargetBootEntry;
}

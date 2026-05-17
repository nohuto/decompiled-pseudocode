/*
 * XREFs of RtlpQueryCriticalSectionOwner @ 0x1800E42EC
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180001320 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenProcess @ 0x1800A1370 (NtOpenProcess.c)
 *     RtlpQueryCriticalSectionOwner32 @ 0x1800E43EC (RtlpQueryCriticalSectionOwner32.c)
 *     RtlpQueryCriticalSectionOwner64 @ 0x1800E448C (RtlpQueryCriticalSectionOwner64.c)
 *     RtlpQueryProcessMachine @ 0x1800E484C (RtlpQueryProcessMachine.c)
 */

__int64 __fastcall RtlpQueryCriticalSectionOwner(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 CriticalSectionOwner32; // rax
  unsigned __int16 v6; // [rsp+78h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+20h]

  Handle = 0LL;
  if ( !*(_QWORD *)(a2 + 160) )
    return (unsigned int)-1073741811;
  v3 = NtOpenProcess();
  if ( v3 >= 0 )
  {
    v3 = RtlpQueryProcessMachine(Handle, &v6);
    if ( v3 >= 0 )
    {
      if ( v6 == 332 || v6 == 452 )
      {
        CriticalSectionOwner32 = RtlpQueryCriticalSectionOwner32(Handle, *(_QWORD *)(a2 + 160));
      }
      else
      {
        if ( v6 != 34404 && v6 != 43620 )
        {
          v3 = -1073741811;
          goto LABEL_13;
        }
        CriticalSectionOwner32 = RtlpQueryCriticalSectionOwner64(Handle, *(_QWORD *)(a2 + 160));
      }
      *(_QWORD *)(a2 + 168) = CriticalSectionOwner32;
      v3 = 0;
    }
  }
LABEL_13:
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v3;
}

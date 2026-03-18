/*
 * XREFs of MiCheckAndProcessCcAccessLog @ 0x1402F4CE8
 * Callers:
 *     MiEmptyAccessLogs @ 0x1402005B0 (MiEmptyAccessLogs.c)
 *     MiTrimOrAgeWorkingSet @ 0x14025B4A0 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     MiReturnCcAccessLog @ 0x1402F4D30 (MiReturnCcAccessLog.c)
 *     MiQueuePageAccessLog @ 0x1402F54F0 (MiQueuePageAccessLog.c)
 */

__int64 __fastcall MiCheckAndProcessCcAccessLog(__int64 a1, int a2)
{
  __int64 result; // rax
  _QWORD *v3; // rcx

  result = a1;
  if ( qword_140C67FC0 )
  {
    v3 = (_QWORD *)_InterlockedExchange64(&qword_140C67FC0, 0LL);
    if ( v3 )
    {
      if ( result - v3[2] > (unsigned __int64)PfKernelGlobals || a2 )
        return MiQueuePageAccessLog(v3);
      else
        return MiReturnCcAccessLog();
    }
  }
  return result;
}

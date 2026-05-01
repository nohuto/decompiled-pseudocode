/*
 * XREFs of CrmStateMonitorDelayedAcTimerCallback @ 0x18006E020
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x180009B80 (CrmStateMonitorStateSet.c)
 */

__int64 __fastcall CrmStateMonitorDelayedAcTimerCallback(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF
  __int64 v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = CrmStateMonitorDelayedAcNotificationSequenceSeconds[*(unsigned int *)(a2 + 60)];
  CrmStateMonitorStateSet((void **)a2, &v4, 4uLL, 0);
  result = (unsigned int)(*(_DWORD *)(a2 + 60) + 1);
  *(_DWORD *)(a2 + 60) = result;
  if ( (unsigned int)result < 5 )
  {
    v5 = -10000000LL * (CrmStateMonitorDelayedAcNotificationSequenceSeconds[result] - v4);
    return TpSetTimer(*(_QWORD *)(a2 + 88), &v5, 0LL, 60000LL);
  }
  return result;
}

/*
 * XREFs of CrmStateMonitorDelayedInternetLossStart @ 0x18006E030
 * Callers:
 *     CrmStateMonitorStart @ 0x1800095D8 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmRegisterToStateMonitor @ 0x180009414 (CrmRegisterToStateMonitor.c)
 *     CrmStateMonitorStateSizeGet @ 0x18000A5A4 (CrmStateMonitorStateSizeGet.c)
 *     memcpy_0 @ 0x1800534A2 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorDelayedInternetLossStart(__int64 a1)
{
  _DWORD *v1; // r9
  int v3; // ecx
  unsigned int v4; // eax
  const void *v5; // r9
  void *v6; // r10
  __int64 result; // rax

  v1 = (_DWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 40) = a1 + 56;
  v3 = *(_DWORD *)a1;
  *v1 = 0;
  v4 = CrmStateMonitorStateSizeGet(v3);
  memcpy_0(v6, v5, v4);
  result = TpAllocTimer(a1 + 88, CrmStateMonitorDelayedInternetLossTimerCallback, a1, 0LL);
  if ( (int)result >= 0 )
  {
    result = CrmRegisterToStateMonitor(a1 + 64, 13);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}

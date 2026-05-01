/*
 * XREFs of CrmStateMonitorDelayedInternetLossStart @ 0x18006E1E8
 * Callers:
 *     CrmStateMonitorStart @ 0x18002F304 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x18002F078 (CrmStateMonitorStateSizeGet.c)
 *     CrmRegisterToStateMonitor @ 0x18003C628 (CrmRegisterToStateMonitor.c)
 *     memcpy_0 @ 0x180050222 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorDelayedInternetLossStart(__int64 a1)
{
  _DWORD *v2; // rdx
  int v3; // ecx
  unsigned int v4; // eax
  const void *v5; // rdx
  void *v6; // r9
  __int64 result; // rax

  v2 = (_DWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 40) = a1 + 56;
  v3 = *(_DWORD *)a1;
  *v2 = 0;
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

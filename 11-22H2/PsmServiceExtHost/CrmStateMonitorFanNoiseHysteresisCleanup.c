/*
 * XREFs of CrmStateMonitorFanNoiseHysteresisCleanup @ 0x18006E34C
 * Callers:
 *     CrmStateMonitorCleanup @ 0x180008C9C (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x18000A7B8 (CrmStateMonitorListenerRemove.c)
 */

char __fastcall CrmStateMonitorFanNoiseHysteresisCleanup(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)(a1 + 96);
  if ( (_QWORD *)*v1 != v1 )
    LOBYTE(v1) = CrmStateMonitorListenerRemove((char *)qword_1800DC190, a1 + 88, 0);
  v3 = *(_QWORD *)(a1 + 112);
  if ( v3 )
  {
    TpSetTimer(v3, 0LL, 0LL, 0LL);
    TpWaitForTimer(*(_QWORD *)(a1 + 112), 1LL);
    LOBYTE(v1) = TpReleaseTimer(*(_QWORD *)(a1 + 112));
  }
  return (char)v1;
}

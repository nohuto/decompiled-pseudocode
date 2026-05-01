/*
 * XREFs of CrmStateMonitorDelayedAcCleanup @ 0x18006DFA8
 * Callers:
 *     CrmStateMonitorCleanup @ 0x180008C9C (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x18000A7B8 (CrmStateMonitorListenerRemove.c)
 */

char __fastcall CrmStateMonitorDelayedAcCleanup(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx

  v2 = (_QWORD *)(a1 + 72);
  if ( (_QWORD *)*v2 != v2 )
    LOBYTE(v2) = CrmStateMonitorListenerRemove((char *)qword_1800DC070, a1 + 64, 0);
  v3 = *(_QWORD *)(a1 + 88);
  if ( v3 )
  {
    TpSetTimer(v3, 0LL, 0LL, 0LL);
    TpWaitForTimer(*(_QWORD *)(a1 + 88), 1LL);
    LOBYTE(v2) = TpReleaseTimer(*(_QWORD *)(a1 + 88));
  }
  return (char)v2;
}

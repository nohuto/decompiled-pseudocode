/*
 * XREFs of CrmStateMonitorDisconnectedStandbyCleanup @ 0x18006E0DC
 * Callers:
 *     CrmStateMonitorCleanup @ 0x180008C9C (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x18000A7B8 (CrmStateMonitorListenerRemove.c)
 */

char __fastcall CrmStateMonitorDisconnectedStandbyCleanup(__int64 a1)
{
  _QWORD *v2; // rax

  if ( *(_QWORD *)(a1 + 72) != a1 + 72 )
    CrmStateMonitorListenerRemove((char *)qword_1800DC090, a1 + 64, 0);
  v2 = (_QWORD *)(a1 + 96);
  if ( (_QWORD *)*v2 != v2 )
    LOBYTE(v2) = CrmStateMonitorListenerRemove((char *)qword_1800DC140, a1 + 88, 0);
  return (char)v2;
}

/*
 * XREFs of CrmStateMonitorPowerConstrainedCleanup @ 0x18006E454
 * Callers:
 *     CrmStateMonitorCleanup @ 0x180035E7C (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x180036060 (CrmStateMonitorListenerRemove.c)
 */

char __fastcall CrmStateMonitorPowerConstrainedCleanup(__int64 a1)
{
  _QWORD *v2; // rax

  if ( *(_QWORD *)(a1 + 80) != a1 + 80 )
    CrmStateMonitorListenerRemove((char *)qword_1800DD050, a1 + 72, 0);
  v2 = (_QWORD *)(a1 + 104);
  if ( (_QWORD *)*v2 != v2 )
    LOBYTE(v2) = CrmStateMonitorListenerRemove((char *)qword_1800DD0E8, a1 + 96, 0);
  return (char)v2;
}

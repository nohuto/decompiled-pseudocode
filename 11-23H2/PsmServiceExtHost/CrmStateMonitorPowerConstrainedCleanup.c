/*
 * XREFs of CrmStateMonitorPowerConstrainedCleanup @ 0x18006E4C4
 * Callers:
 *     CrmStateMonitorCleanup @ 0x180008C9C (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x18000A7B8 (CrmStateMonitorListenerRemove.c)
 */

char __fastcall CrmStateMonitorPowerConstrainedCleanup(__int64 a1)
{
  _QWORD *v2; // rax

  if ( *(_QWORD *)(a1 + 104) != a1 + 104 )
    CrmStateMonitorListenerRemove((char *)qword_1800DC070, a1 + 96, 0);
  v2 = (_QWORD *)(a1 + 128);
  if ( (_QWORD *)*v2 != v2 )
    LOBYTE(v2) = CrmStateMonitorListenerRemove((char *)qword_1800DC108, a1 + 120, 0);
  return (char)v2;
}

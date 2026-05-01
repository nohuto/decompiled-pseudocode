/*
 * XREFs of CrmStateMonitorAcDcDisplayCleanup @ 0x1800408B0
 * Callers:
 *     CrmStateMonitorCleanup @ 0x180035E7C (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x180036060 (CrmStateMonitorListenerRemove.c)
 */

char __fastcall CrmStateMonitorAcDcDisplayCleanup(__int64 a1)
{
  _QWORD *v2; // rax

  if ( *(_QWORD *)(a1 + 72) != a1 + 72 )
    CrmStateMonitorListenerRemove((char *)qword_1800DD050, a1 + 64, 0);
  v2 = (_QWORD *)(a1 + 96);
  if ( (_QWORD *)*v2 != v2 )
    LOBYTE(v2) = CrmStateMonitorListenerRemove((char *)qword_1800DD060, a1 + 88, 0);
  return (char)v2;
}

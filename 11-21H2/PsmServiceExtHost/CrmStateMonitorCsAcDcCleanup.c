/*
 * XREFs of CrmStateMonitorCsAcDcCleanup @ 0x18006DF34
 * Callers:
 *     CrmStateMonitorCleanup @ 0x180035E7C (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x180036060 (CrmStateMonitorListenerRemove.c)
 */

char __fastcall CrmStateMonitorCsAcDcCleanup(__int64 a1)
{
  _QWORD *v2; // rax

  if ( *(_QWORD *)(a1 + 72) != a1 + 72 )
    CrmStateMonitorListenerRemove((char *)qword_1800DD050, a1 + 64, 0);
  v2 = (_QWORD *)(a1 + 96);
  if ( (_QWORD *)*v2 != v2 )
    LOBYTE(v2) = CrmStateMonitorListenerRemove((char *)qword_1800DD070, a1 + 88, 0);
  return (char)v2;
}

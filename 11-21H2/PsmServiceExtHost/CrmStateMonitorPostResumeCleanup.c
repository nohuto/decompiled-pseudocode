/*
 * XREFs of CrmStateMonitorPostResumeCleanup @ 0x18006E2AC
 * Callers:
 *     CrmStateMonitorCleanup @ 0x180035E7C (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x180036060 (CrmStateMonitorListenerRemove.c)
 */

char __fastcall CrmStateMonitorPostResumeCleanup(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax

  if ( (_QWORD *)a1[9] != a1 + 9 )
    CrmStateMonitorListenerRemove((char *)qword_1800DD080, (__int64)(a1 + 8), 0);
  v2 = a1[18];
  if ( v2 )
  {
    TpSetTimer(v2, 0LL, 0LL, 0LL);
    TpWaitForTimer(a1[18], 1LL);
    TpReleaseTimer(a1[18]);
  }
  if ( (_QWORD *)a1[13] != a1 + 13 )
    CrmStateMonitorListenerRemove((char *)qword_1800DD0F0, (__int64)(a1 + 12), 0);
  v3 = a1 + 16;
  if ( (_QWORD *)*v3 != v3 )
    LOBYTE(v3) = CrmStateMonitorListenerRemove((char *)qword_1800DD0F8, (__int64)(a1 + 15), 0);
  return (char)v3;
}

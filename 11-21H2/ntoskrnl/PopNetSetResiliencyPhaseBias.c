/*
 * XREFs of PopNetSetResiliencyPhaseBias @ 0x140998888
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x1403DA240 (PopNetEvaluationWorkerCallback.c)
 *     PopNetDisengageNetworkRefresh @ 0x14099862C (PopNetDisengageNetworkRefresh.c)
 *     PopNetEngageNetworkRefresh @ 0x140998678 (PopNetEngageNetworkRefresh.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopNetSetResiliencyPhaseBias(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = a1;
  PopReleasePolicyLock(a1, a2);
  if ( qword_140C5AD90 )
  {
    LOBYTE(v3) = v2;
    qword_140C5AD90(v3);
  }
  return PopAcquirePolicyLock(v3);
}

/*
 * XREFs of VerifierMmPrefetchPages @ 0x140ACFAD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierMmPrefetchPages()
{
  return ((__int64 (*)(void))pXdvMmPrefetchPages)();
}

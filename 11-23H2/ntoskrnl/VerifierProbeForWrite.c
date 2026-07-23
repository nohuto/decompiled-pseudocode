/*
 * XREFs of VerifierProbeForWrite @ 0x140ABFF20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierProbeForWrite()
{
  return ((__int64 (*)(void))pXdvProbeForWrite)();
}

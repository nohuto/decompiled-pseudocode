/*
 * XREFs of VerifierProbeForRead @ 0x140ABFF00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierProbeForRead()
{
  return ((__int64 (*)(void))pXdvProbeForRead)();
}

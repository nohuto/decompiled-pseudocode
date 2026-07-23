/*
 * XREFs of VfFreeCrashDumpRegistersEx @ 0x140AC6400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VfFreeCrashDumpRegistersEx()
{
  return ((__int64 (*)(void))pXdvHalDmaFreeCrashDumpRegistersEx)();
}

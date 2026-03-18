/*
 * XREFs of VfFreeCrashDumpRegistersEx @ 0x140AC6410
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 VfFreeCrashDumpRegistersEx()
{
  return ((__int64 (*)(void))pXdvHalDmaFreeCrashDumpRegistersEx)();
}

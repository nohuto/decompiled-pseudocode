/*
 * XREFs of HalpInterruptThermalService @ 0x14051C320
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 HalpInterruptThermalService()
{
  return ((__int64 (*)(void))HalpInterruptThermalServiceRoutine)();
}

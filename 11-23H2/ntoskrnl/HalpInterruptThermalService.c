/*
 * XREFs of HalpInterruptThermalService @ 0x14051C870
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 HalpInterruptThermalService()
{
  return ((__int64 (*)(void))HalpInterruptThermalServiceRoutine)();
}

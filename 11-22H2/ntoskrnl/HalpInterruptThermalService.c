/*
 * XREFs of HalpInterruptThermalService @ 0x14051C3E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 HalpInterruptThermalService()
{
  return ((__int64 (*)(void))HalpInterruptThermalServiceRoutine)();
}

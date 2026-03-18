/*
 * XREFs of ZwDelayExecution @ 0x14041B3E0
 * Callers:
 *     IovUnloadDrivers @ 0x140AC17F0 (IovUnloadDrivers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDelayExecution(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}

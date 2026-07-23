/*
 * XREFs of ZwDelayExecution @ 0x14041B770
 * Callers:
 *     IovUnloadDrivers @ 0x140AC17E0 (IovUnloadDrivers.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwDelayExecution(BOOLEAN Alertable, PLARGE_INTEGER DelayInterval)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Alertable);
}

/*
 * XREFs of RaAttemptHighWaterMarkIncreasePassive @ 0x1C00259F0
 * Callers:
 *     <none>
 * Callees:
 *     RaAttemptHighWaterMarkIncrease @ 0x1C00655F4 (RaAttemptHighWaterMarkIncrease.c)
 */

void __fastcall RaAttemptHighWaterMarkIncreasePassive(PDEVICE_OBJECT DeviceObject, volatile __int32 *Context)
{
  _InterlockedExchange(Context + 76, 0);
  RaAttemptHighWaterMarkIncrease((PVOID)Context);
}

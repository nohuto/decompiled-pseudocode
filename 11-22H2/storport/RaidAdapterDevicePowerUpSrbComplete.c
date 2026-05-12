/*
 * XREFs of RaidAdapterDevicePowerUpSrbComplete @ 0x1C004B9D0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0011250 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 */

void __fastcall RaidAdapterDevicePowerUpSrbComplete(__int64 a1)
{
  __int64 v1; // rdx
  IRP *v2; // rcx

  v1 = *(_QWORD *)(a1 + 216);
  v2 = *(IRP **)(a1 + 160);
  *(_BYTE *)(v1 + 4496) = 0;
  RaidAdapterPowerUpDeviceCompletionLastStep(v2, v1);
}

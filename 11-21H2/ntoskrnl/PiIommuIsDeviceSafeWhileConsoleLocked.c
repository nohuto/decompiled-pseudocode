/*
 * XREFs of PiIommuIsDeviceSafeWhileConsoleLocked @ 0x14095A508
 * Callers:
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140808CB4 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PiDmaGuardProcessUpdateConsoleLockStateAction @ 0x140956608 (PiDmaGuardProcessUpdateConsoleLockStateAction.c)
 *     PipDmgEnforceEnumerationPolicy @ 0x1409569F4 (PipDmgEnforceEnumerationPolicy.c)
 * Callees:
 *     <none>
 */

bool __fastcall PiIommuIsDeviceSafeWhileConsoleLocked(__int64 a1)
{
  char v1; // al

  v1 = *(_BYTE *)(a1 + 16);
  return (v1 & 1) != 0 || (v1 & 8) != 0 || (v1 & 0x24) == 0;
}

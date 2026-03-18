/*
 * XREFs of PiIommuIsDeviceSafeWhileConsoleLocked @ 0x14096EF24
 * Callers:
 *     PiDmaGuardProcessUpdateConsoleLockStateAction @ 0x14096AE8C (PiDmaGuardProcessUpdateConsoleLockStateAction.c)
 *     PipDmgEnforceEnumerationPolicy @ 0x14096B274 (PipDmgEnforceEnumerationPolicy.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x14096B9B0 (PnpSurpriseFailUnsafeDmaDevices.c)
 * Callees:
 *     <none>
 */

bool __fastcall PiIommuIsDeviceSafeWhileConsoleLocked(__int64 a1)
{
  char v1; // al

  v1 = *(_BYTE *)(a1 + 16);
  return (v1 & 1) != 0 || (v1 & 8) != 0 || (v1 & 0x24) == 0;
}

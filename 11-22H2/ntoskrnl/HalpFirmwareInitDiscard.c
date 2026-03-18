/*
 * XREFs of HalpFirmwareInitDiscard @ 0x140B6CB9C
 * Callers:
 *     HalpFirmwareInitSystem @ 0x140A91810 (HalpFirmwareInitSystem.c)
 * Callees:
 *     HalpEfiInitialization @ 0x140B6CBEC (HalpEfiInitialization.c)
 */

__int64 HalpFirmwareInitDiscard()
{
  off_140C01C50[0] = (__int64 (__fastcall *)())HalpQueryCapsuleCapabilities;
  off_140C01C58[0] = HalpUpdateCapsule;
  off_140C01D50[0] = (__int64 (__fastcall *)())HalpIsEFIRuntimeActive;
  off_140C01D90[0] = (__int64 (__fastcall *)())HalpEnumerateEnvironmentVariablesWithFilter;
  return HalpEfiInitialization();
}

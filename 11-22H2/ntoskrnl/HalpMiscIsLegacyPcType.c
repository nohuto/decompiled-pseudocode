/*
 * XREFs of HalpMiscIsLegacyPcType @ 0x14050AEF8
 * Callers:
 *     HalMakeBeep @ 0x140506710 (HalMakeBeep.c)
 *     HalpPowerWriteResetCommand @ 0x140506BCC (HalpPowerWriteResetCommand.c)
 *     HalpRestoreDmaControllerState @ 0x140A953BC (HalpRestoreDmaControllerState.c)
 * Callees:
 *     <none>
 */

bool HalpMiscIsLegacyPcType()
{
  return !HalFirmwareTypeEfi
      || (HalpPlatformFlags & 1) != 0
      && (HalpPlatformFlags & 4) != 0
      && HalpVideoBiosPresent
      && (HalpPlatformFlags & 8) == 0;
}

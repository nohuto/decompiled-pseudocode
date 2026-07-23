/*
 * XREFs of HalpLegacyShutdown @ 0x140506FF0
 * Callers:
 *     <none>
 * Callees:
 *     HalReturnToFirmware @ 0x140506EB0 (HalReturnToFirmware.c)
 */

void __noreturn HalpLegacyShutdown()
{
  HalReturnToFirmware(1);
}

/*
 * XREFs of HalpIsHvRemappingInterrupts @ 0x140863CC8
 * Callers:
 *     HalpUpdatePerDeviceMsiLimitInformation @ 0x140B6F9A4 (HalpUpdatePerDeviceMsiLimitInformation.c)
 * Callees:
 *     <none>
 */

bool HalpIsHvRemappingInterrupts()
{
  return qword_140C624C8 != 0;
}

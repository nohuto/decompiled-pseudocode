/*
 * XREFs of ACPIGpeValidIndex @ 0x1C001D604
 * Callers:
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000AC90 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIGpeInstallRemoveIndex @ 0x1C001D2F0 (ACPIGpeInstallRemoveIndex.c)
 *     ACPIGpeIndexToGpeRegister @ 0x1C001D5CC (ACPIGpeIndexToGpeRegister.c)
 *     ACPIGpeIndexToByteIndex @ 0x1C0030BE0 (ACPIGpeIndexToByteIndex.c)
 *     ACPIVectorConnect @ 0x1C00618E0 (ACPIVectorConnect.c)
 * Callees:
 *     ACPIValidateGPEEventIndex @ 0x1C005662C (ACPIValidateGPEEventIndex.c)
 */

char __fastcall ACPIGpeValidIndex(__int64 a1)
{
  char result; // al

  if ( (unsigned int)a1 < 8 * (unsigned int)*((unsigned __int16 *)AcpiInformation + 43) )
    return 1;
  result = ACPIValidateGPEEventIndex(
             a1,
             *((unsigned __int16 *)AcpiInformation + 50),
             *((unsigned __int16 *)AcpiInformation + 49));
  if ( result )
    return 1;
  return result;
}

/*
 * XREFs of RaidHexFromUshort @ 0x1C0053DAC
 * Callers:
 *     RaidUnitGetHardwareIds @ 0x1C001F8A0 (RaidUnitGetHardwareIds.c)
 *     StorBuildNVMeSerialNumber @ 0x1C0065824 (StorBuildNVMeSerialNumber.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidHexFromUshort(unsigned __int16 a1, char *a2, unsigned int a3)
{
  char result; // al

  if ( a3 >= 4 )
  {
    a2[3] = `RaidHexFromUshort'::`2'::hexDigits[a1 & 0xF];
    a2[2] = `RaidHexFromUshort'::`2'::hexDigits[((unsigned __int64)a1 >> 4) & 0xF];
    a2[1] = `RaidHexFromUshort'::`2'::hexDigits[((unsigned __int64)a1 >> 8) & 0xF];
    result = `RaidHexFromUshort'::`2'::hexDigits[(unsigned __int64)a1 >> 12];
    *a2 = result;
  }
  return result;
}

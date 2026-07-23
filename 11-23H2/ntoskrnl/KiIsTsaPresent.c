/*
 * XREFs of KiIsTsaPresent @ 0x140410E84
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x14038249C (KiDetectHardwareSpecControlFeatures.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1403829F0 (HviIsAnyHypervisorPresent.c)
 */

__int64 __fastcall KiIsTsaPresent(_BYTE *a1)
{
  bool IsAnyHypervisorPresent; // al
  unsigned int v3; // edx
  char v4; // al
  unsigned __int8 v5; // cl

  if ( a1[141] == 1 && (KeFeatureBits2 & 0xC0000000000LL) != 0xC0000000000LL )
  {
    IsAnyHypervisorPresent = HviIsAnyHypervisorPresent();
    v3 = 0;
    if ( IsAnyHypervisorPresent )
      return 1LL;
    v4 = a1[64];
    if ( v4 >= 25 )
    {
      if ( v4 == 26 )
      {
        v5 = a1[67];
        if ( v5 > 0x4Fu )
        {
          LOBYTE(v3) = (unsigned __int8)(v5 - 96) > 0x1Fu;
          return v3;
        }
        return 0LL;
      }
      return 1LL;
    }
  }
  return 0LL;
}

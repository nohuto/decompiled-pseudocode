/*
 * XREFs of HalpHvIsFrequencyAvailable @ 0x14037975C
 * Callers:
 *     HalSocRequestApi @ 0x1403783EC (HalSocRequestApi.c)
 *     HalpHvGetApicFrequency @ 0x14050B420 (HalpHvGetApicFrequency.c)
 *     HalpHvGetTscFrequency @ 0x14050B450 (HalpHvGetTscFrequency.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x140377F3C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsXboxNanovisorPresent @ 0x14037861C (HalpIsXboxNanovisorPresent.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 */

bool __fastcall HalpHvIsFrequencyAvailable(__int64 a1, __int64 a2)
{
  if ( !HalpIsMicrosoftCompatibleHvLoaded(a1, a2) )
    return HalpIsXboxNanovisorPresent() != 0;
  _RAX = 1073741827LL;
  __asm { cpuid }
  return (_RDX & 0x100) != 0;
}

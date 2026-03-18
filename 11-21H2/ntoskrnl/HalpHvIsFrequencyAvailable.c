/*
 * XREFs of HalpHvIsFrequencyAvailable @ 0x1403DE864
 * Callers:
 *     HalSocRequestApi @ 0x1403B38C8 (HalSocRequestApi.c)
 *     HalpHvGetApicFrequency @ 0x14050E430 (HalpHvGetApicFrequency.c)
 *     HalpHvGetTscFrequency @ 0x14050E460 (HalpHvGetTscFrequency.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403B37B0 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsXboxNanovisorPresent @ 0x1403B3A6C (HalpIsXboxNanovisorPresent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

bool HalpHvIsFrequencyAvailable()
{
  bool v0; // zf

  if ( HalpIsMicrosoftCompatibleHvLoaded() )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    v0 = (_RDX & 0x100) == 0;
  }
  else
  {
    v0 = HalpIsXboxNanovisorPresent() == 0;
  }
  return !v0;
}

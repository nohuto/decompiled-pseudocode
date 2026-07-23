/*
 * XREFs of HalpHvIsFrequencyAvailable @ 0x1403798FC
 * Callers:
 *     HalSocRequestApi @ 0x14037858C (HalSocRequestApi.c)
 *     HalpHvGetApicFrequency @ 0x14050B970 (HalpHvGetApicFrequency.c)
 *     HalpHvGetTscFrequency @ 0x14050B9A0 (HalpHvGetTscFrequency.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403780DC (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsXboxNanovisorPresent @ 0x1403787BC (HalpIsXboxNanovisorPresent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

bool __fastcall HalpHvIsFrequencyAvailable(__int64 a1, __int64 a2)
{
  if ( !HalpIsMicrosoftCompatibleHvLoaded(a1, a2) )
    return HalpIsXboxNanovisorPresent() != 0;
  _RAX = 1073741827LL;
  __asm { cpuid }
  return (_RDX & 0x100) != 0;
}

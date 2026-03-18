/*
 * XREFs of HalpHvIsFrequencyAvailable @ 0x140379DAC
 * Callers:
 *     HalSocRequestApi @ 0x140378A3C (HalSocRequestApi.c)
 *     HalpHvGetApicFrequency @ 0x14050B090 (HalpHvGetApicFrequency.c)
 *     HalpHvGetTscFrequency @ 0x14050B0C0 (HalpHvGetTscFrequency.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14037858C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsXboxNanovisorPresent @ 0x140378C6C (HalpIsXboxNanovisorPresent.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 */

bool __fastcall HalpHvIsFrequencyAvailable(__int64 a1, __int64 a2)
{
  if ( !HalpIsMicrosoftCompatibleHvLoaded(a1, a2) )
    return HalpIsXboxNanovisorPresent() != 0;
  _RAX = 1073741827LL;
  __asm { cpuid }
  return (_RDX & 0x100) != 0;
}

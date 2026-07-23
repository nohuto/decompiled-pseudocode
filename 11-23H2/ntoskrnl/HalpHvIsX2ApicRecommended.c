/*
 * XREFs of HalpHvIsX2ApicRecommended @ 0x14050BB28
 * Callers:
 *     HalpInterruptGetX2ApicPolicy @ 0x14037874C (HalpInterruptGetX2ApicPolicy.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403780DC (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

bool __fastcall HalpHvIsX2ApicRecommended(__int64 a1, __int64 a2)
{
  if ( !HalpIsMicrosoftCompatibleHvLoaded(a1, a2) )
    return 0;
  _RAX = 1073741828LL;
  __asm { cpuid }
  return (_RAX & 0x80000) != 0;
}

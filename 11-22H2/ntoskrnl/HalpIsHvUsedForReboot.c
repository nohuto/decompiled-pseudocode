/*
 * XREFs of HalpIsHvUsedForReboot @ 0x14050B4B8
 * Callers:
 *     HalpMiscGetParameters @ 0x140B6B158 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14037858C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsXboxNanovisorPresent @ 0x140378C6C (HalpIsXboxNanovisorPresent.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 */

bool __fastcall HalpIsHvUsedForReboot(__int64 a1, __int64 a2)
{
  if ( !HalpIsMicrosoftCompatibleHvLoaded(a1, a2) )
    return HalpIsXboxNanovisorPresent() != 0;
  _RAX = 1073741828LL;
  __asm { cpuid }
  return (_RAX & 0x10) != 0;
}

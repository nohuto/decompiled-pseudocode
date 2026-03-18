/*
 * XREFs of HalpIsHvIptSupported @ 0x14050E7EC
 * Callers:
 *     HalpProcGetFeatureBits @ 0x1403BAD80 (HalpProcGetFeatureBits.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403B37B0 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char HalpIsHvIptSupported()
{
  char v0; // r10

  if ( HalpIsMicrosoftCompatibleHvLoaded() )
  {
    _RAX = 0x40000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX >= 0x4000000B )
    {
      _RAX = 1073741827LL;
      __asm { cpuid }
      if ( (_RDX & 0x8000000) != 0 )
        return 1;
    }
  }
  return v0;
}

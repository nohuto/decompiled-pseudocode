/*
 * XREFs of sub_14050E7EC @ 0x14050E7EC
 * Callers:
 *     sub_1403BAD80 @ 0x1403BAD80 (sub_1403BAD80.c)
 * Callees:
 *     sub_1403B37B0 @ 0x1403B37B0 (sub_1403B37B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char sub_14050E7EC()
{
  char v0; // r10

  if ( sub_1403B37B0() )
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

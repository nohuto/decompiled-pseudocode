/*
 * XREFs of sub_140B312E8 @ 0x140B312E8
 * Callers:
 *     sub_140B07AB0 @ 0x140B07AB0 (sub_140B07AB0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char sub_140B312E8()
{
  _RAX = 0x80000000LL;
  __asm { cpuid }
  if ( (unsigned int)_RAX < 0x80000008 )
    return 36;
  _RAX = 2147483656LL;
  __asm { cpuid }
  return _RAX;
}

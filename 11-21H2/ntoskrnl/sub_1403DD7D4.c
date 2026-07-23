/*
 * XREFs of sub_1403DD7D4 @ 0x1403DD7D4
 * Callers:
 *     sub_1403DD730 @ 0x1403DD730 (sub_1403DD730.c)
 *     sub_140B02040 @ 0x140B02040 (sub_140B02040.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char sub_1403DD7D4()
{
  char v0; // r8

  v0 = byte_140C0B230;
  if ( byte_140C0B230 == -1 )
  {
    _RAX = 1LL;
    v0 = 0;
    __asm { cpuid }
    if ( (int)_RCX < 0 )
    {
      _RAX = 1073741825LL;
      __asm { cpuid }
      v0 = (_DWORD)_RAX == 1986945624;
    }
    byte_140C0B230 = v0;
  }
  return v0;
}

/*
 * XREFs of sub_1403DE2DC @ 0x1403DE2DC
 * Callers:
 *     sub_140A57680 @ 0x140A57680 (sub_140A57680.c)
 *     sub_140B03800 @ 0x140B03800 (sub_140B03800.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

_BOOL8 sub_1403DE2DC()
{
  _RAX = 0LL;
  __asm { cpuid }
  if ( (unsigned int)_RAX < 7 )
    return 0LL;
  _RAX = 7LL;
  __asm { cpuid }
  return (_RBX & 0x800) != 0 || (_RBX & 0x10) != 0;
}

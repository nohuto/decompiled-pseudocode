/*
 * XREFs of sub_140A59810 @ 0x140A59810
 * Callers:
 *     sub_140A59724 @ 0x140A59724 (sub_140A59724.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140A59870 @ 0x140A59870 (sub_140A59870.c)
 */

__int64 sub_140A59810()
{
  struct _KPRCB *CurrentPrcb; // r8
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  _RAX = 0LL;
  __asm { cpuid }
  result = (unsigned int)(_RAX - 3);
  *((_DWORD *)CurrentPrcb + 8613) = 0;
  if ( (unsigned int)result <= 0x7FFFFFFC )
    return sub_140A59870(CurrentPrcb, 4LL);
  return result;
}

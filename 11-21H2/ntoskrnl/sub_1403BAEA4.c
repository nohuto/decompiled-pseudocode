/*
 * XREFs of sub_1403BAEA4 @ 0x1403BAEA4
 * Callers:
 *     sub_1403B36F4 @ 0x1403B36F4 (sub_1403B36F4.c)
 *     sub_1403BACF8 @ 0x1403BACF8 (sub_1403BACF8.c)
 *     sub_1403BDD00 @ 0x1403BDD00 (sub_1403BDD00.c)
 *     sub_1403D2BFC @ 0x1403D2BFC (sub_1403D2BFC.c)
 *     sub_14082481C @ 0x14082481C (sub_14082481C.c)
 *     sub_140B27364 @ 0x140B27364 (sub_140B27364.c)
 * Callees:
 *     sub_1403B37B0 @ 0x1403B37B0 (sub_1403B37B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char sub_1403BAEA4()
{
  char v0; // r10

  if ( sub_1403B37B0() )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    if ( (__PAIR64__(_RBX, _RAX) & 0x100000000000LL) != 0 )
      return 1;
  }
  return v0;
}

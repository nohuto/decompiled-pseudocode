/*
 * XREFs of sub_1403B37B0 @ 0x1403B37B0
 * Callers:
 *     sub_1403B36F4 @ 0x1403B36F4 (sub_1403B36F4.c)
 *     sub_1403B38C8 @ 0x1403B38C8 (sub_1403B38C8.c)
 *     sub_1403BAEA4 @ 0x1403BAEA4 (sub_1403BAEA4.c)
 *     sub_1403BE570 @ 0x1403BE570 (sub_1403BE570.c)
 *     sub_1403BE8A0 @ 0x1403BE8A0 (sub_1403BE8A0.c)
 *     sub_1403BE95C @ 0x1403BE95C (sub_1403BE95C.c)
 *     sub_1403D2BFC @ 0x1403D2BFC (sub_1403D2BFC.c)
 *     sub_1403DE864 @ 0x1403DE864 (sub_1403DE864.c)
 *     sub_14050E5E8 @ 0x14050E5E8 (sub_14050E5E8.c)
 *     sub_14050E7EC @ 0x14050E7EC (sub_14050E7EC.c)
 *     sub_14050E854 @ 0x14050E854 (sub_14050E854.c)
 *     sub_14084476C @ 0x14084476C (sub_14084476C.c)
 *     sub_14090A1A0 @ 0x14090A1A0 (sub_14090A1A0.c)
 *     sub_140A54FB4 @ 0x140A54FB4 (sub_140A54FB4.c)
 *     sub_140B27364 @ 0x140B27364 (sub_140B27364.c)
 * Callees:
 *     sub_1403B37F0 @ 0x1403B37F0 (sub_1403B37F0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

bool sub_1403B37B0()
{
  char v0; // bl

  v0 = 0;
  if ( (unsigned __int8)sub_1403B37F0() )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    return (_DWORD)_RAX == 824407624;
  }
  return v0;
}

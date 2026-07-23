/*
 * XREFs of sub_1403BFE1C @ 0x1403BFE1C
 * Callers:
 *     sub_140A57460 @ 0x140A57460 (sub_140A57460.c)
 * Callees:
 *     sub_1403C02DC @ 0x1403C02DC (sub_1403C02DC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_1403BFE1C(int *a1)
{
  int v2; // eax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0LL;
  sub_1403C02DC(&v4);
  v2 = BYTE8(v4) & 0x7F;
  if ( (BYTE8(v4) & 0x7F) != 0 )
  {
    *a1 = v2;
    LOBYTE(v2) = 1;
  }
  return v2;
}

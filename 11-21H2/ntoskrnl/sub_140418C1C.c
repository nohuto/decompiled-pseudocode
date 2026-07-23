/*
 * XREFs of sub_140418C1C @ 0x140418C1C
 * Callers:
 *     sub_140A57460 @ 0x140A57460 (sub_140A57460.c)
 * Callees:
 *     sub_1403BFE70 @ 0x1403BFE70 (sub_1403BFE70.c)
 *     sub_140418B44 @ 0x140418B44 (sub_140418B44.c)
 *     sub_140418BA4 @ 0x140418BA4 (sub_140418BA4.c)
 */

_BOOL8 __fastcall sub_140418C1C(__int64 a1)
{
  __int64 v2; // rcx
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v4 = 0LL;
  sub_1403BFE70(a1, 0, (__int64)&v4, 0LL);
  return (v4 & 0x8000) != 0 && (unsigned int)sub_140418B44(a1, &v4) && sub_140418BA4(v2, &v4);
}

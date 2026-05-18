/*
 * XREFs of sub_18002A21C @ 0x18002A21C
 * Callers:
 *     sub_18002A244 @ 0x18002A244 (sub_18002A244.c)
 *     sub_180057C24 @ 0x180057C24 (sub_180057C24.c)
 * Callees:
 *     sub_18002A57C @ 0x18002A57C (sub_18002A57C.c)
 */

__int64 __fastcall sub_18002A21C(__int64 a1, __int64 a2)
{
  *(_QWORD *)a2 = a1;
  *(_BYTE *)(a2 + 8) = 1;
  sub_18002A57C(a1);
  return a2;
}

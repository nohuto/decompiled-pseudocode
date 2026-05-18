/*
 * XREFs of sub_1800A0D88 @ 0x1800A0D88
 * Callers:
 *     sub_1800A1930 @ 0x1800A1930 (sub_1800A1930.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18002AE4C @ 0x18002AE4C (sub_18002AE4C.c)
 *     sub_1800A0BF4 @ 0x1800A0BF4 (sub_1800A0BF4.c)
 *     sub_1800A1C58 @ 0x1800A1C58 (sub_1800A1C58.c)
 */

__int64 __fastcall sub_1800A0D88(__int64 a1)
{
  __int64 v2; // rcx

  sub_18002AE4C((void **)(a1 + 1064), a1 + 1064);
  v2 = *(_QWORD *)(a1 + 904);
  if ( v2 )
    sub_180010530(v2);
  sub_1800A0BF4((void **)(a1 + 880));
  sub_1800A1C58(a1 + 704);
  sub_1800A1C58(a1 + 528);
  sub_1800A1C58(a1 + 352);
  sub_1800A1C58(a1 + 176);
  return sub_1800A1C58(a1);
}

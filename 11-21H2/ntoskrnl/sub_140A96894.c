/*
 * XREFs of sub_140A96894 @ 0x140A96894
 * Callers:
 *     sub_140A7F1D0 @ 0x140A7F1D0 (sub_140A7F1D0.c)
 *     sub_140A7F280 @ 0x140A7F280 (sub_140A7F280.c)
 *     sub_140A8ECA0 @ 0x140A8ECA0 (sub_140A8ECA0.c)
 *     sub_140A95C00 @ 0x140A95C00 (sub_140A95C00.c)
 *     sub_140A95CB0 @ 0x140A95CB0 (sub_140A95CB0.c)
 *     sub_140A95F50 @ 0x140A95F50 (sub_140A95F50.c)
 *     sub_140A96220 @ 0x140A96220 (sub_140A96220.c)
 *     sub_140A962A0 @ 0x140A962A0 (sub_140A962A0.c)
 *     sub_140A96330 @ 0x140A96330 (sub_140A96330.c)
 *     sub_140A96540 @ 0x140A96540 (sub_140A96540.c)
 *     sub_140A965D0 @ 0x140A965D0 (sub_140A965D0.c)
 *     sub_140A96660 @ 0x140A96660 (sub_140A96660.c)
 * Callees:
 *     sub_1402ABBD0 @ 0x1402ABBD0 (sub_1402ABBD0.c)
 *     sub_140A7F710 @ 0x140A7F710 (sub_140A7F710.c)
 *     sub_140A7F7DA @ 0x140A7F7DA (sub_140A7F7DA.c)
 *     sub_140A81364 @ 0x140A81364 (sub_140A81364.c)
 */

char *__fastcall sub_140A96894(char a1)
{
  char CurrentIrql; // si
  char *v4; // rdi

  if ( (dword_140C29FC0 & 2) == 0 )
    return 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v4 = sub_140A7F710(CurrentIrql, a1);
  sub_140A7F7DA((__int64)v4, 2u);
  if ( sub_1402ABBD0() && (unsigned __int8)CurrentIrql < 2u && (unsigned __int8)a1 >= 2u )
    sub_140A81364();
  return v4;
}

/*
 * XREFs of sub_18003A984 @ 0x18003A984
 * Callers:
 *     sub_18003A100 @ 0x18003A100 (sub_18003A100.c)
 *     sub_18003A644 @ 0x18003A644 (sub_18003A644.c)
 *     sub_18003A7E4 @ 0x18003A7E4 (sub_18003A7E4.c)
 *     sub_18003AA8C @ 0x18003AA8C (sub_18003AA8C.c)
 * Callees:
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 */

_QWORD *__fastcall sub_18003A984(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  __int64 *i; // rdi

  for ( i = a2; i != a1; sub_180011020(a3, i) )
  {
    i -= 2;
    a3 -= 2;
  }
  return a3;
}

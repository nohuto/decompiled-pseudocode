/*
 * XREFs of sub_180030A8C @ 0x180030A8C
 * Callers:
 *     sub_180030DE4 @ 0x180030DE4 (sub_180030DE4.c)
 *     sub_18003678C @ 0x18003678C (sub_18003678C.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

__int64 *__fastcall sub_180030A8C(__int64 *a1)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = sub_18001C190();
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *a1 = v2;
  return a1;
}

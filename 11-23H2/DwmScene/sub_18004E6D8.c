/*
 * XREFs of sub_18004E6D8 @ 0x18004E6D8
 * Callers:
 *     sub_18004E738 @ 0x18004E738 (sub_18004E738.c)
 *     sub_18005F884 @ 0x18005F884 (sub_18005F884.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

__int64 *__fastcall sub_18004E6D8(__int64 *a1)
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

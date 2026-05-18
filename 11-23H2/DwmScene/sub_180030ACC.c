/*
 * XREFs of sub_180030ACC @ 0x180030ACC
 * Callers:
 *     sub_180030E58 @ 0x180030E58 (sub_180030E58.c)
 *     sub_180030ECC @ 0x180030ECC (sub_180030ECC.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

__int64 *__fastcall sub_180030ACC(__int64 *a1)
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

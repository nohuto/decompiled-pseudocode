/*
 * XREFs of sub_1800276C8 @ 0x1800276C8
 * Callers:
 *     sub_1801002F8 @ 0x1801002F8 (sub_1801002F8.c)
 *     sub_180100560 @ 0x180100560 (sub_180100560.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180026A88 @ 0x180026A88 (sub_180026A88.c)
 */

__int64 __fastcall sub_1800276C8(__int64 a1)
{
  char *v2; // rcx
  __int64 result; // rax

  v2 = *(char **)a1;
  if ( v2 )
  {
    sub_180026A88((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_180010884(*(char **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFC0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}

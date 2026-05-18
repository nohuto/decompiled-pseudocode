/*
 * XREFs of sub_18008F360 @ 0x18008F360
 * Callers:
 *     sub_180106700 @ 0x180106700 (sub_180106700.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18008E974 @ 0x18008E974 (sub_18008E974.c)
 */

__int64 __fastcall sub_18008F360(__int64 a1)
{
  char *v2; // rcx
  __int64 result; // rax

  v2 = *(char **)a1;
  if ( v2 )
  {
    sub_18008E974((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_180010884(*(char **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}

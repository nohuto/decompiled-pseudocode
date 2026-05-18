/*
 * XREFs of sub_1800512C8 @ 0x1800512C8
 * Callers:
 *     sub_180102EBF @ 0x180102EBF (sub_180102EBF.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180050B9C @ 0x180050B9C (sub_180050B9C.c)
 */

__int64 __fastcall sub_1800512C8(__int64 a1)
{
  char *v2; // rcx
  __int64 result; // rax

  v2 = *(char **)a1;
  if ( v2 )
  {
    sub_180050B9C((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_180010884(*(char **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}

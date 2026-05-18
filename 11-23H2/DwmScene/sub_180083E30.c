/*
 * XREFs of sub_180083E30 @ 0x180083E30
 * Callers:
 *     sub_180085490 @ 0x180085490 (sub_180085490.c)
 * Callees:
 *     sub_18008472C @ 0x18008472C (sub_18008472C.c)
 */

_QWORD *__fastcall sub_180083E30(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *result; // rax
  __int64 v6; // rdx

  result = (_QWORD *)sub_18008472C(a1, a2, 6LL);
  v6 = *result - *a3;
  if ( *result == *a3 )
    v6 = result[1] - a3[1];
  if ( v6 )
  {
    *(_OWORD *)result = *(_OWORD *)a3;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}

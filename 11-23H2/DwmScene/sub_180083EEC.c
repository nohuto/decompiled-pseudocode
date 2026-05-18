/*
 * XREFs of sub_180083EEC @ 0x180083EEC
 * Callers:
 *     sub_180085A9C @ 0x180085A9C (sub_180085A9C.c)
 * Callees:
 *     sub_18008472C @ 0x18008472C (sub_18008472C.c)
 */

_QWORD *__fastcall sub_180083EEC(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *result; // rax
  __int64 v6; // rdx

  result = (_QWORD *)sub_18008472C(a1, a2, 5LL);
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

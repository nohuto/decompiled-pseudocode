/*
 * XREFs of sub_180091224 @ 0x180091224
 * Callers:
 *     sub_18008F0EC @ 0x18008F0EC (sub_18008F0EC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180091224(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  result = 0x7FFFFFFFFFFFFFFFLL;
  v3 = a1[2] - *a1;
  v4 = v3 >> 1;
  if ( v3 <= 0x7FFFFFFFFFFFFFFFLL - (v3 >> 1) )
  {
    result = v4 + v3;
    if ( v4 + v3 < a2 )
      return a2;
  }
  return result;
}

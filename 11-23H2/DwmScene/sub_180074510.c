/*
 * XREFs of sub_180074510 @ 0x180074510
 * Callers:
 *     sub_18007454C @ 0x18007454C (sub_18007454C.c)
 *     sub_1800818E4 @ 0x1800818E4 (sub_1800818E4.c)
 *     sub_18008C958 @ 0x18008C958 (sub_18008C958.c)
 *     sub_18008CC54 @ 0x18008CC54 (sub_18008CC54.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180074510(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  result = 0x1FFFFFFFFFFFFFFFLL;
  v3 = (__int64)(a1[2] - *a1) >> 3;
  v4 = v3 >> 1;
  if ( v3 <= 0x1FFFFFFFFFFFFFFFLL - (v3 >> 1) )
  {
    result = v4 + v3;
    if ( v4 + v3 < a2 )
      return a2;
  }
  return result;
}

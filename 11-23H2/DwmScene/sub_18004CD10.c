/*
 * XREFs of sub_18004CD10 @ 0x18004CD10
 * Callers:
 *     sub_18004A848 @ 0x18004A848 (sub_18004A848.c)
 *     sub_18004CDE4 @ 0x18004CDE4 (sub_18004CDE4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004CD10(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 result; // rax
  unsigned __int64 v4; // r9

  v2 = 0x2E8BA2E8BA2E8BA3LL * ((__int64)(a1[2] - *a1) >> 3);
  result = 0x2E8BA2E8BA2E8BALL;
  v4 = v2 >> 1;
  if ( v2 <= 0x2E8BA2E8BA2E8BALL - (v2 >> 1) )
  {
    result = v4 + v2;
    if ( v4 + v2 < a2 )
      return a2;
  }
  return result;
}

/*
 * XREFs of sub_1800FACB8 @ 0x1800FACB8
 * Callers:
 *     sub_1800FB190 @ 0x1800FB190 (sub_1800FB190.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800FACB8(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // r8

  if ( a1 != a2 )
  {
    v2 = *a1;
    *a1 = *a2;
    result = a2[1];
    *a2 = v2;
    v4 = a1[1];
    a1[1] = result;
    a2[1] = v4;
  }
  return result;
}

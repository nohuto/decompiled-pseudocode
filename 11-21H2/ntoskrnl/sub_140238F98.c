/*
 * XREFs of sub_140238F98 @ 0x140238F98
 * Callers:
 *     sub_1406AC778 @ 0x1406AC778 (sub_1406AC778.c)
 *     sub_1406B00E8 @ 0x1406B00E8 (sub_1406B00E8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140238F98(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r8
  __int64 result; // rax

  v4 = ~(a3 - 1);
  result = v4 & (a1 + a2 - 1);
  if ( result == (a1 & v4) )
    return a1;
  if ( a4 )
    result -= a2;
  return result;
}

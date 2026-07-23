/*
 * XREFs of sub_1406BF480 @ 0x1406BF480
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406BF4AC @ 0x1406BF4AC (sub_1406BF4AC.c)
 */

__int64 __fastcall sub_1406BF480(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( a4 == 1 )
  {
    result = a2[84];
    if ( (result & 1) != 0 )
      return sub_1406BF4AC(a2);
  }
  return result;
}

/*
 * XREFs of sub_180044708 @ 0x180044708
 * Callers:
 *     sub_180047D08 @ 0x180047D08 (sub_180047D08.c)
 *     sub_1800B806C @ 0x1800B806C (sub_1800B806C.c)
 * Callees:
 *     sub_1800441FC @ 0x1800441FC (sub_1800441FC.c)
 */

__int64 __fastcall sub_180044708(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 *v5; // r9

  if ( a1 != a2 )
  {
    do
    {
      result = sub_1800441FC(a1, a3);
      a1 = (__int64 *)(v4 + 8);
    }
    while ( a1 != v5 );
  }
  return result;
}

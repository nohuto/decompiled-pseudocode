/*
 * XREFs of sub_18000FC20 @ 0x18000FC20
 * Callers:
 *     sub_18000D328 @ 0x18000D328 (sub_18000D328.c)
 *     sub_18000FCBC @ 0x18000FCBC (sub_18000FCBC.c)
 * Callees:
 *     sub_18000FDB4 @ 0x18000FDB4 (sub_18000FDB4.c)
 */

__int64 __fastcall sub_18000FC20(
        volatile signed __int32 **a1,
        volatile signed __int32 *a2,
        volatile signed __int32 *a3)
{
  __int64 result; // rax

  result = sub_18000FDB4(a1);
  if ( a2 )
  {
    *a1 = a2;
    a1[1] = a3;
    _InterlockedIncrement(a2);
  }
  return result;
}

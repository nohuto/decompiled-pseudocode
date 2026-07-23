/*
 * XREFs of sub_1406C9A28 @ 0x1406C9A28
 * Callers:
 *     sub_14072E9E0 @ 0x14072E9E0 (sub_14072E9E0.c)
 * Callees:
 *     sub_1402A7370 @ 0x1402A7370 (sub_1402A7370.c)
 *     sub_140933FE8 @ 0x140933FE8 (sub_140933FE8.c)
 */

__int64 __fastcall sub_1406C9A28(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_1402A7370(a1, a2, 0LL, 0LL, 1, 1);
  while ( a3 )
  {
    if ( *(_QWORD *)(a3 + 32) == a2 )
      result = sub_140933FE8(a3);
    a3 = *(_QWORD *)(a3 + 40);
  }
  return result;
}

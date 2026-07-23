/*
 * XREFs of sub_140528F50 @ 0x140528F50
 * Callers:
 *     <none>
 * Callees:
 *     sub_14045939A @ 0x14045939A (sub_14045939A.c)
 *     sub_14051AD44 @ 0x14051AD44 (sub_14051AD44.c)
 */

__int64 __fastcall sub_140528F50(ULONG_PTR a1, ULONG_PTR a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 8) )
    return 3221225711LL;
  if ( (a2 & 0xFFF) != 0 )
    return 3221225712LL;
  v6 = a3 << 12;
  result = sub_14051AD44(a1, a2, &v6, 0);
  if ( (int)result >= 0 )
    return sub_14045939A(a1, a2);
  return result;
}

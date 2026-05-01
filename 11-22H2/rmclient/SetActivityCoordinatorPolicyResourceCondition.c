/*
 * XREFs of SetActivityCoordinatorPolicyResourceCondition @ 0x180015F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SetActivityCoordinatorPolicyResourceCondition(__int64 a1, unsigned int a2, unsigned int a3)
{
  if ( a2 > 6 || a3 > 2 )
    return 2147942487LL;
  *(_DWORD *)(a1 + 4LL * (int)a2) = a3;
  return 0LL;
}

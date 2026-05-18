/*
 * XREFs of sub_18000EFC4 @ 0x18000EFC4
 * Callers:
 *     sub_18000D280 @ 0x18000D280 (sub_18000D280.c)
 *     sub_18000F12C @ 0x18000F12C (sub_18000F12C.c)
 *     sub_18000F284 @ 0x18000F284 (sub_18000F284.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000EFC4(__int64 a1)
{
  __int64 v2; // rax

  if ( !a1 )
    return 2LL;
  v2 = -1LL;
  do
    ++v2;
  while ( *(_WORD *)(a1 + 2 * v2) );
  return 2 * v2 + 2;
}

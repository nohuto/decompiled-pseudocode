/*
 * XREFs of sub_18000EF98 @ 0x18000EF98
 * Callers:
 *     sub_18000D20C @ 0x18000D20C (sub_18000D20C.c)
 *     sub_18000F12C @ 0x18000F12C (sub_18000F12C.c)
 *     sub_18000F284 @ 0x18000F284 (sub_18000F284.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000EF98(__int64 a1)
{
  __int64 v3; // rcx

  if ( !a1 )
    return 1LL;
  v3 = -1LL;
  do
    ++v3;
  while ( *(_BYTE *)(a1 + v3) );
  return v3 + 1;
}

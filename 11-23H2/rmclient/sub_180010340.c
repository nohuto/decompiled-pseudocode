/*
 * XREFs of sub_180010340 @ 0x180010340
 * Callers:
 *     sub_18000CAA0 @ 0x18000CAA0 (sub_18000CAA0.c)
 *     sub_18001056C @ 0x18001056C (sub_18001056C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180010340(__int64 a1)
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

/*
 * XREFs of sub_180010314 @ 0x180010314
 * Callers:
 *     sub_18000CA24 @ 0x18000CA24 (sub_18000CA24.c)
 *     sub_18001056C @ 0x18001056C (sub_18001056C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180010314(__int64 a1)
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

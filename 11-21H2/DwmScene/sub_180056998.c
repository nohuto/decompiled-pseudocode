/*
 * XREFs of sub_180056998 @ 0x180056998
 * Callers:
 *     sub_180038300 @ 0x180038300 (sub_180038300.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180056998(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  if ( !a1 )
    return 1LL;
  v1 = a1 - 1;
  if ( !v1 )
    return 1LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 2LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 1LL;
  if ( v3 == 1 )
    return 3LL;
  return 0LL;
}

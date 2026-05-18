/*
 * XREFs of sub_1800830E0 @ 0x1800830E0
 * Callers:
 *     sub_18008214C @ 0x18008214C (sub_18008214C.c)
 *     sub_180082598 @ 0x180082598 (sub_180082598.c)
 *     sub_18008323C @ 0x18008323C (sub_18008323C.c)
 *     sub_180084E14 @ 0x180084E14 (sub_180084E14.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800830E0(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  if ( !a1 )
    return 1LL;
  v1 = a1 - 1;
  if ( !v1 )
    return 1LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 1LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 2LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 3LL;
  v5 = v4 - 1;
  if ( !v5 )
    return 4LL;
  v6 = v5 - 1;
  if ( !v6 )
    return 4LL;
  if ( v6 == 1 )
    return 16LL;
  return 0LL;
}

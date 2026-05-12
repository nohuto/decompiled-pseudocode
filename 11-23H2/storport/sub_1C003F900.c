/*
 * XREFs of sub_1C003F900 @ 0x1C003F900
 * Callers:
 *     StorPortGetUncachedExtension @ 0x1C00465B0 (StorPortGetUncachedExtension.c)
 *     sub_1C004A90C @ 0x1C004A90C (sub_1C004A90C.c)
 * Callees:
 *     sub_1C00AA780 @ 0x1C00AA780 (sub_1C00AA780.c)
 */

__int64 __fastcall sub_1C003F900(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, int a6, int a7, __int64 a8)
{
  if ( !a1 )
    return 3221225485LL;
  if ( !a4 )
  {
    LODWORD(a4) = -1;
    if ( *(_DWORD *)(a1 + 24) == 3 )
      LODWORD(a4) = -1;
  }
  return sub_1C00AA780(a1, a2, a3, a4, a5, a6, a7, a8);
}

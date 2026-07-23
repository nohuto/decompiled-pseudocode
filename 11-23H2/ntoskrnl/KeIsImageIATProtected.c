/*
 * XREFs of KeIsImageIATProtected @ 0x14056CBAC
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x140A35318 (MiApplyHotPatchToLoadedDriver.c)
 *     MiMapAndApplyPatchInSession @ 0x140A3A264 (MiMapAndApplyPatchInSession.c)
 *     VfUtilIsProtectedDriver @ 0x140AC27EC (VfUtilIsProtectedDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsImageIATProtected(__int64 a1)
{
  return HIBYTE(*(unsigned __int16 *)(a1 + 110)) & 1;
}

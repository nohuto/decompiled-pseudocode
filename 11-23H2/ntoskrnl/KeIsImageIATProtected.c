/*
 * XREFs of KeIsImageIATProtected @ 0x14056C4EC
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x140A35068 (MiApplyHotPatchToLoadedDriver.c)
 *     MiMapAndApplyPatchInSession @ 0x140A39FB4 (MiMapAndApplyPatchInSession.c)
 *     VfUtilIsProtectedDriver @ 0x140AC27FC (VfUtilIsProtectedDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsImageIATProtected(__int64 a1)
{
  return HIBYTE(*(unsigned __int16 *)(a1 + 110)) & 1;
}

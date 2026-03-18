/*
 * XREFs of MiDereferenceSessionGlobal @ 0x14063750C
 * Callers:
 *     MiActOnPatchInAllSessions @ 0x140A34610 (MiActOnPatchInAllSessions.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140A35068 (MiApplyHotPatchToLoadedDriver.c)
 *     MiUnapplyDriverHotPatch @ 0x140A3BD68 (MiUnapplyDriverHotPatch.c)
 * Callees:
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x140706CDC (MiReleaseProcessReferenceToSessionDataPage.c)
 */

__int64 __fastcall MiDereferenceSessionGlobal(void *a1)
{
  return MiReleaseProcessReferenceToSessionDataPage(a1);
}

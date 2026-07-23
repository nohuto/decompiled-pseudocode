/*
 * XREFs of MiDereferenceSessionGlobal @ 0x140637A5C
 * Callers:
 *     MiActOnPatchInAllSessions @ 0x140A348C0 (MiActOnPatchInAllSessions.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140A35318 (MiApplyHotPatchToLoadedDriver.c)
 *     MiUnapplyDriverHotPatch @ 0x140A3C018 (MiUnapplyDriverHotPatch.c)
 * Callees:
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x140706EEC (MiReleaseProcessReferenceToSessionDataPage.c)
 */

__int64 __fastcall MiDereferenceSessionGlobal(void *a1)
{
  return MiReleaseProcessReferenceToSessionDataPage(a1);
}

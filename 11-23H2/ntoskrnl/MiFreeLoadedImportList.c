/*
 * XREFs of MiFreeLoadedImportList @ 0x140696D20
 * Callers:
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiActOnPatchInAllSessions @ 0x140A348C0 (MiActOnPatchInAllSessions.c)
 *     MiApplyDriverHotPatch @ 0x140A34B28 (MiApplyDriverHotPatch.c)
 *     MiMapAndApplyPatchInSession @ 0x140A3A264 (MiMapAndApplyPatchInSession.c)
 *     MiShutdownSystem @ 0x140AAB9E0 (MiShutdownSystem.c)
 *     MiInitializeLoadedModuleList @ 0x140B5CCDC (MiInitializeLoadedModuleList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeLoadedImportList(void *a1)
{
  if ( a1 != (void *)-2LL && a1 != (void *)1 && ((unsigned __int8)a1 & 1) == 0 )
    ExFreePoolWithTag(a1, 0);
}

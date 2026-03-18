/*
 * XREFs of MiPartitionIdToPointer @ 0x14020B9C4
 * Callers:
 *     MiDereferenceSessionFinal @ 0x140681B80 (MiDereferenceSessionFinal.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x140706CDC (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiFreeReadListPages @ 0x1407213E0 (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x14072147C (MiFreeReadListPageList.c)
 *     MiInitializeDynamicBitmap @ 0x14081C7A4 (MiInitializeDynamicBitmap.c)
 *     MiMarkBootGuardPage @ 0x14081D648 (MiMarkBootGuardPage.c)
 *     MiRemovePhysicalMemory @ 0x140A2CC4C (MiRemovePhysicalMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPartitionIdToPointer(unsigned __int16 a1)
{
  return *(_QWORD *)(qword_140C673C8 + 8LL * a1);
}

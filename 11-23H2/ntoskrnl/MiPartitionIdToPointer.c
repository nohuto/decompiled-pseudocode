/*
 * XREFs of MiPartitionIdToPointer @ 0x14020B9C4
 * Callers:
 *     MiDereferenceSessionFinal @ 0x140681B80 (MiDereferenceSessionFinal.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x140706EEC (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiFreeReadListPages @ 0x1407215E0 (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x14072167C (MiFreeReadListPageList.c)
 *     MiInitializeDynamicBitmap @ 0x14081CA74 (MiInitializeDynamicBitmap.c)
 *     MiMarkBootGuardPage @ 0x14081D918 (MiMarkBootGuardPage.c)
 *     MiRemovePhysicalMemory @ 0x140A2CEFC (MiRemovePhysicalMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPartitionIdToPointer(unsigned __int16 a1)
{
  return *(_QWORD *)(qword_140C673C8 + 8LL * a1);
}

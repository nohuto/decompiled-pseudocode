/*
 * XREFs of ObpUnlockDirectory @ 0x1406C32F8
 * Callers:
 *     NtSetInformationObject @ 0x140697640 (NtSetInformationObject.c)
 *     ObpDeleteDirectoryEntry @ 0x140697854 (ObpDeleteDirectoryEntry.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x14069794C (ObpMarkDirectoryObjectsTemporary.c)
 *     ObpInsertOrLocateNamedObject @ 0x1406C0B0C (ObpInsertOrLocateNamedObject.c)
 *     NtQueryDirectoryObject @ 0x1406C2680 (NtQueryDirectoryObject.c)
 *     ObReferenceObjectByName @ 0x1406C2D00 (ObReferenceObjectByName.c)
 *     ObpCloseHandle @ 0x1406E7730 (ObpCloseHandle.c)
 *     ObReferenceObjectByNameEx @ 0x1407153CC (ObReferenceObjectByNameEx.c)
 *     ObpDeleteNameCheck @ 0x140740650 (ObpDeleteNameCheck.c)
 *     ObpCreateSymbolicLinkName @ 0x1407B6FA0 (ObpCreateSymbolicLinkName.c)
 *     ObCreateObjectTypeEx @ 0x140821770 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140B4E9F8 (ObInitSystem.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140231190 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8BC0 (ObDereferenceObjectDeferDeleteWithTag.c)
 */

void __fastcall ObpUnlockDirectory(__int64 a1)
{
  ExReleasePushLockEx((__int64 *)(*(_QWORD *)a1 + 296LL), 0LL);
  if ( *(_BYTE *)(a1 + 22) )
  {
    ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)a1, 0x554C624Fu);
    *(_BYTE *)(a1 + 22) = 0;
  }
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 21) = 0;
  KeLeaveCriticalRegion();
}

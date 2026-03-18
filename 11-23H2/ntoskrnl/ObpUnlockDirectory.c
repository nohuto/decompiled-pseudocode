/*
 * XREFs of ObpUnlockDirectory @ 0x1406C3248
 * Callers:
 *     NtSetInformationObject @ 0x140697640 (NtSetInformationObject.c)
 *     ObpDeleteDirectoryEntry @ 0x140697854 (ObpDeleteDirectoryEntry.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x14069794C (ObpMarkDirectoryObjectsTemporary.c)
 *     ObpInsertOrLocateNamedObject @ 0x1406C0ABC (ObpInsertOrLocateNamedObject.c)
 *     NtQueryDirectoryObject @ 0x1406C2630 (NtQueryDirectoryObject.c)
 *     ObReferenceObjectByName @ 0x1406C2C50 (ObReferenceObjectByName.c)
 *     ObpCloseHandle @ 0x1406E7680 (ObpCloseHandle.c)
 *     ObReferenceObjectByNameEx @ 0x14071535C (ObReferenceObjectByNameEx.c)
 *     ObpDeleteNameCheck @ 0x140740140 (ObpDeleteNameCheck.c)
 *     ObpCreateSymbolicLinkName @ 0x1407B69F0 (ObpCreateSymbolicLinkName.c)
 *     ObCreateObjectTypeEx @ 0x14081F1F0 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140B4B2F8 (ObInitSystem.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140231190 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8CE0 (ObDereferenceObjectDeferDeleteWithTag.c)
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

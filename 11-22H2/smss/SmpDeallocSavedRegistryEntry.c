/*
 * XREFs of SmpDeallocSavedRegistryEntry @ 0x140009B40
 * Callers:
 *     SmpFreeSavedRegistryEntry @ 0x140001200 (SmpFreeSavedRegistryEntry.c)
 *     SmpCleanupStalePageFiles @ 0x140007060 (SmpCleanupStalePageFiles.c)
 *     SmpBuildSubSystemLists @ 0x140007180 (SmpBuildSubSystemLists.c)
 *     SmpSaveRegistryValue_U @ 0x1400079E0 (SmpSaveRegistryValue_U.c)
 *     SmpConfigureSharedSessionData @ 0x140008400 (SmpConfigureSharedSessionData.c)
 *     SmpInitializeDosDevices @ 0x1400098E0 (SmpInitializeDosDevices.c)
 *     SmpCreatePagingFiles @ 0x140009EC4 (SmpCreatePagingFiles.c)
 *     SmpRecordNewPageFile @ 0x14000AEF4 (SmpRecordNewPageFile.c)
 *     SmpProcessFileRenames @ 0x14000B13C (SmpProcessFileRenames.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall SmpDeallocSavedRegistryEntry(struct _UNICODE_STRING *BaseAddress)
{
  void *v2; // r8
  BOOLEAN result; // al

  if ( BaseAddress )
  {
    RtlFreeUnicodeString(BaseAddress + 2);
    v2 = *(void **)&BaseAddress[3].Length;
    if ( v2 )
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v2);
    return RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
  }
  return result;
}

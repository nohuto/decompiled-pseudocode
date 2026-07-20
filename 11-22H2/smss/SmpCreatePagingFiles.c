/*
 * XREFs of SmpCreatePagingFiles @ 0x140009EC4
 * Callers:
 *     SmpAsyncMemoryConfiguration @ 0x14000B010 (SmpAsyncMemoryConfiguration.c)
 * Callees:
 *     SmpCheckForCrashDump @ 0x140006BB0 (SmpCheckForCrashDump.c)
 *     SmpSaveOldPageFiles @ 0x140006E98 (SmpSaveOldPageFiles.c)
 *     SmpCleanupStalePageFiles @ 0x140007060 (SmpCleanupStalePageFiles.c)
 *     SmpDeallocSavedRegistryEntry @ 0x140009B40 (SmpDeallocSavedRegistryEntry.c)
 *     SmpProcessPagefileDescriptor @ 0x14000A108 (SmpProcessPagefileDescriptor.c)
 *     SmpBuildFilesStringFromList @ 0x14000A224 (SmpBuildFilesStringFromList.c)
 *     SmpRecordCreatedPageFiles @ 0x14000A310 (SmpRecordCreatedPageFiles.c)
 *     SmpCreatePagingFileDescriptor @ 0x14000A43C (SmpCreatePagingFileDescriptor.c)
 *     SmpCreateWorkingSetSwapPagingFile @ 0x14000A930 (SmpCreateWorkingSetSwapPagingFile.c)
 *     SmpEnableSwapOnPagingFiles @ 0x14000ADF0 (SmpEnableSwapOnPagingFiles.c)
 *     SmpCreateVolumeDescriptors @ 0x14000CCF8 (SmpCreateVolumeDescriptors.c)
 *     SmpAdjustPagefileSizeforLowStorage @ 0x140011158 (SmpAdjustPagefileSizeforLowStorage.c)
 *     SmpCreateDedicatedMemoryPagefile @ 0x1400112B0 (SmpCreateDedicatedMemoryPagefile.c)
 *     SmpCreateEmergencyPagingFile @ 0x140016ED8 (SmpCreateEmergencyPagingFile.c)
 */

void __fastcall SmpCreatePagingFiles(__int64 a1)
{
  int v1; // edx
  signed __int32 v2; // ecx
  __int64 v3; // rax
  struct _UNICODE_STRING *i; // rbx
  PVOID *v5; // rbx
  struct _UNICODE_STRING *v6; // rdi
  PVOID *v7; // rax
  struct _UNICODE_STRING **Buffer; // rcx
  int VolumeDescriptors; // eax
  __int64 v10; // rcx
  signed __int32 v11; // ecx
  PVOID *v12; // rsi
  char v13; // di
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  PVOID BaseAddress[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF
  int SystemInformation; // [rsp+58h] [rbp+10h] BYREF

  SystemInformation = 0;
  *(_OWORD *)BaseAddress = 0LL;
  SmpCreateDedicatedMemoryPagefile(a1);
  v1 = SmpBuildFilesStringFromList(&SmpExistingPageFilesList, BaseAddress);
  if ( v1 < 0 )
  {
    v2 = _InterlockedIncrement(SmpGlobalLog) % 64;
    v3 = 2LL * v2;
    SmpGlobalLog[4 * v2 + 2] = 2881;
LABEL_3:
    SmpGlobalLog[2 * v3 + 3] = v1;
    *(_QWORD *)&SmpGlobalLog[2 * v3 + 4] = 0LL;
    goto LABEL_32;
  }
  SmpSaveOldPageFiles();
  for ( i = (struct _UNICODE_STRING *)SmpExistingPageFilesList;
        i != (struct _UNICODE_STRING *)&SmpExistingPageFilesList;
        i = *(struct _UNICODE_STRING **)&i->Length )
  {
    SmpCheckForCrashDump(i + 1);
  }
  SystemInformation = 2;
  NtSetSystemInformation(SystemCrashDumpStateInformation, &SystemInformation, 4u);
  v5 = (PVOID *)SmpPagingFileList;
  while ( v5 != &SmpPagingFileList )
  {
    v6 = (struct _UNICODE_STRING *)v5;
    SmpCreatePagingFileDescriptor(v5 + 2);
    v7 = (PVOID *)*v5;
    v5 = v7;
    if ( v7[1] != v6 || (Buffer = (struct _UNICODE_STRING **)v6->Buffer, *Buffer != v6) )
      __fastfail(3u);
    *Buffer = (struct _UNICODE_STRING *)v7;
    v7[1] = Buffer;
    SmpDeallocSavedRegistryEntry(v6);
  }
  if ( !SmpNumberOfPagefileDescriptors && !SmpRegistrySpecifierPresent )
  {
    SmpCleanupStalePageFiles();
    goto LABEL_32;
  }
  VolumeDescriptors = SmpCreateVolumeDescriptors();
  v1 = VolumeDescriptors;
  if ( VolumeDescriptors < 0 )
  {
    v11 = _InterlockedIncrement(SmpGlobalLog) % 64;
    v3 = 2LL * v11;
    SmpGlobalLog[4 * v11 + 2] = 2963;
    goto LABEL_3;
  }
  SmpAdjustPagefileSizeforLowStorage(v10, (unsigned int)VolumeDescriptors);
  v12 = (PVOID *)SmpPagingFileDescriptorList;
  v13 = 0;
  if ( SmpPagingFileDescriptorList != &SmpPagingFileDescriptorList )
  {
    do
    {
      v14 = SmpProcessPagefileDescriptor(v12);
      v12 = (PVOID *)*v12;
      if ( v14 >= 0 )
        v13 = 1;
    }
    while ( v12 != &SmpPagingFileDescriptorList );
    if ( v13 )
      goto LABEL_24;
  }
  if ( (int)SmpCreateEmergencyPagingFile() >= 0 )
  {
LABEL_24:
    v15 = SmpCreateWorkingSetSwapPagingFile(&v19);
    if ( v15 < 0 )
    {
      if ( v15 != -1073741710 || SmpNumberOfPagefilesCreated != 1 )
        goto LABEL_31;
      v16 = 63LL;
      goto LABEL_30;
    }
    if ( (*(_BYTE *)(v19 + 16) & 0x10) != 0 )
    {
      v16 = *(unsigned __int16 *)(v19 + 28);
LABEL_30:
      SmpEnableSwapOnPagingFiles(&SmpPagingFileDescriptorList, v16);
    }
  }
LABEL_31:
  SmpCleanupStalePageFiles();
  LOBYTE(v17) = v13 == 0;
  SmpRecordCreatedPageFiles(v17, BaseAddress);
LABEL_32:
  if ( BaseAddress[1] )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress[1]);
}

/*
 * XREFs of RtlpImageDirectoryEntryToDataEx @ 0x1800219BC
 * Callers:
 *     LdrpInitializeTls @ 0x1800042A0 (LdrpInitializeTls.c)
 *     LdrpHandleTlsData @ 0x180004568 (LdrpHandleTlsData.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180018890 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpAccessResourceData @ 0x180022B10 (LdrpAccessResourceData.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x18002B270 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x18002B858 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrpCfgProcessLoadConfig @ 0x18002B8E4 (LdrpCfgProcessLoadConfig.c)
 *     RtlCaptureImageExceptionValues @ 0x18002C1BC (RtlCaptureImageExceptionValues.c)
 *     LdrpCompleteMapModule @ 0x18002CD30 (LdrpCompleteMapModule.c)
 *     LdrpGetImportDescriptorForSnap @ 0x18007648C (LdrpGetImportDescriptorForSnap.c)
 *     RtlFindExportedRoutineByName @ 0x18007B770 (RtlFindExportedRoutineByName.c)
 *     RtlGetImageFileMachines @ 0x180083670 (RtlGetImageFileMachines.c)
 *     RtlImageDirectoryEntryToData @ 0x1800840A0 (RtlImageDirectoryEntryToData.c)
 *     LdrpRelocateImage @ 0x180086268 (LdrpRelocateImage.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008D8A0 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpCorValidateImage @ 0x18008EBD8 (LdrpCorValidateImage.c)
 *     LdrpEnclaveAddDelayloadModules @ 0x1800D876C (LdrpEnclaveAddDelayloadModules.c)
 *     LdrpEnclaveAddForwarderModules @ 0x1800D8964 (LdrpEnclaveAddForwarderModules.c)
 *     LdrpCorFixupImage @ 0x1800DA178 (LdrpCorFixupImage.c)
 *     LdrpFindDelayloadedMethod @ 0x1800DA418 (LdrpFindDelayloadedMethod.c)
 *     LdrpGetDelayloadDescriptor @ 0x1800DA55C (LdrpGetDelayloadDescriptor.c)
 *     LdrpIsILOnlyImage @ 0x1800DC654 (LdrpIsILOnlyImage.c)
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 *     LdrpProcessMachineMismatch @ 0x1800E07FC (LdrpProcessMachineMismatch.c)
 *     AvrfMiniLoadDll @ 0x1800E6DE8 (AvrfMiniLoadDll.c)
 *     RtlComputeImportTableHash @ 0x1800EC100 (RtlComputeImportTableHash.c)
 *     LdrEnumResources @ 0x1800EC930 (LdrEnumResources.c)
 *     LdrRelocateImageWithBias @ 0x1800EFA48 (LdrRelocateImageWithBias.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x18010BC44 (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     EtwpFindDebugId @ 0x180126420 (EtwpFindDebugId.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180024950 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x18002B0F0 (RtlAddressInSectionTable.c)
 */

NTSTATUS __fastcall RtlpImageDirectoryEntryToDataEx(
        unsigned __int64 BaseOfImage,
        char a2,
        unsigned __int16 a3,
        unsigned int *a4,
        _QWORD *a5)
{
  _QWORD *v5; // r14
  int v6; // ebx
  char v7; // si
  __int64 v9; // rbp
  char *v10; // rdi
  NTSTATUS result; // eax
  PIMAGE_NT_HEADERS v12; // rcx
  __int64 VirtualAddress; // rdx
  unsigned int Size; // eax
  PVOID v15; // rax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+40h] [rbp+8h] BYREF

  v5 = a5;
  v6 = 0;
  v7 = a2;
  v9 = a3;
  v10 = (char *)BaseOfImage;
  OutHeaders = 0LL;
  *a5 = 0LL;
  if ( (BaseOfImage & 3) != 0 )
  {
    v10 = (char *)(BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
    v7 = 0;
    if ( (BaseOfImage & 1) == 0 )
      v7 = a2;
  }
  result = RtlImageNtHeaderEx(1u, v10, 0LL, &OutHeaders);
  v12 = OutHeaders;
  if ( OutHeaders )
  {
    if ( OutHeaders->OptionalHeader.Magic == 267 )
    {
      if ( (unsigned int)v9 < HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapReserve) )
      {
        VirtualAddress = *((unsigned int *)&OutHeaders->OptionalHeader.SizeOfHeapCommit + 2 * v9);
        if ( (_DWORD)VirtualAddress )
        {
          Size = *((_DWORD *)&OutHeaders->OptionalHeader.SizeOfHeapCommit + 2 * v9 + 1);
          goto LABEL_10;
        }
        return -1073741822;
      }
    }
    else if ( OutHeaders->OptionalHeader.Magic == 523
           && (unsigned int)v9 < OutHeaders->OptionalHeader.NumberOfRvaAndSizes )
    {
      VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[v9].VirtualAddress;
      if ( (_DWORD)VirtualAddress )
      {
        Size = OutHeaders->OptionalHeader.DataDirectory[v9].Size;
LABEL_10:
        *a4 = Size;
        if ( v7 || (unsigned int)VirtualAddress < v12->OptionalHeader.SizeOfHeaders )
        {
          *v5 = &v10[VirtualAddress];
        }
        else
        {
          v15 = RtlAddressInSectionTable(v12, v10, VirtualAddress);
          *v5 = v15;
          return v15 == 0LL ? 0xC000000D : 0;
        }
        return v6;
      }
      return -1073741822;
    }
    return -1073741811;
  }
  return result;
}

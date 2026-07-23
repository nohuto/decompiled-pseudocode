/*
 * XREFs of RtlpImageDirectoryEntryToDataEx @ 0x180021B9C
 * Callers:
 *     LdrpInitializeTls @ 0x180004220 (LdrpInitializeTls.c)
 *     LdrpHandleTlsData @ 0x180004574 (LdrpHandleTlsData.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180018AA0 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpAccessResourceData @ 0x180022C2C (LdrpAccessResourceData.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x18002B440 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x18002BA28 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrpCfgProcessLoadConfig @ 0x18002BAB4 (LdrpCfgProcessLoadConfig.c)
 *     RtlCaptureImageExceptionValues @ 0x18002C38C (RtlCaptureImageExceptionValues.c)
 *     LdrpCompleteMapModule @ 0x18002CF00 (LdrpCompleteMapModule.c)
 *     LdrpGetImportDescriptorForSnap @ 0x180075E1C (LdrpGetImportDescriptorForSnap.c)
 *     RtlFindExportedRoutineByName @ 0x18007B100 (RtlFindExportedRoutineByName.c)
 *     RtlGetImageFileMachines @ 0x180083000 (RtlGetImageFileMachines.c)
 *     RtlImageDirectoryEntryToData @ 0x1800838A0 (RtlImageDirectoryEntryToData.c)
 *     LdrpRelocateImage @ 0x180085A68 (LdrpRelocateImage.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008D0A0 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpCorValidateImage @ 0x18008E3D8 (LdrpCorValidateImage.c)
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 *     LdrpEnclaveAddDelayloadModules @ 0x1800D8DBC (LdrpEnclaveAddDelayloadModules.c)
 *     LdrpEnclaveAddForwarderModules @ 0x1800D8FB4 (LdrpEnclaveAddForwarderModules.c)
 *     LdrpCorFixupImage @ 0x1800DA7C8 (LdrpCorFixupImage.c)
 *     LdrpFindDelayloadedMethod @ 0x1800DAA68 (LdrpFindDelayloadedMethod.c)
 *     LdrpGetDelayloadDescriptor @ 0x1800DABAC (LdrpGetDelayloadDescriptor.c)
 *     LdrpIsILOnlyImage @ 0x1800DCCA4 (LdrpIsILOnlyImage.c)
 *     LdrpProcessMachineMismatch @ 0x1800DF4CC (LdrpProcessMachineMismatch.c)
 *     AvrfMiniLoadDll @ 0x1800E5AB8 (AvrfMiniLoadDll.c)
 *     RtlComputeImportTableHash @ 0x1800EADD0 (RtlComputeImportTableHash.c)
 *     LdrEnumResources @ 0x1800EB600 (LdrEnumResources.c)
 *     LdrRelocateImageWithBias @ 0x1800EE638 (LdrRelocateImageWithBias.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x18010A7D4 (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     EtwpFindDebugId @ 0x180124FA0 (EtwpFindDebugId.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180024AA0 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x18002B2C0 (RtlAddressInSectionTable.c)
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

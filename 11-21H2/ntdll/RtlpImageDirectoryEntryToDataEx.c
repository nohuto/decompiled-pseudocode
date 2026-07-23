/*
 * XREFs of RtlpImageDirectoryEntryToDataEx @ 0x18003C720
 * Callers:
 *     LdrpHandleTlsData @ 0x180033A94 (LdrpHandleTlsData.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180034354 (LdrpPrepareImportAddressTableForSnap.c)
 *     RtlCaptureImageExceptionValues @ 0x1800345EC (RtlCaptureImageExceptionValues.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180034A60 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrpCfgProcessLoadConfig @ 0x1800354CC (LdrpCfgProcessLoadConfig.c)
 *     LdrpAccessResourceData @ 0x180038740 (LdrpAccessResourceData.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18003A234 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpSearchResourceSection_U @ 0x180040060 (LdrpSearchResourceSection_U.c)
 *     LdrpSnapKernelBaseExtensions @ 0x1800437E8 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpCompleteMapModule @ 0x18004CFB8 (LdrpCompleteMapModule.c)
 *     LdrpInitializeTls @ 0x18007A64C (LdrpInitializeTls.c)
 *     LdrpGetImportDescriptorForSnap @ 0x18007B978 (LdrpGetImportDescriptorForSnap.c)
 *     RtlFindExportedRoutineByName @ 0x18007FEF0 (RtlFindExportedRoutineByName.c)
 *     RtlImageDirectoryEntryToData @ 0x1800864D0 (RtlImageDirectoryEntryToData.c)
 *     LdrpRelocateImage @ 0x180088D94 (LdrpRelocateImage.c)
 *     LdrRelocateImageWithBias @ 0x18008B610 (LdrRelocateImageWithBias.c)
 *     LdrpCorValidateImage @ 0x18008C52C (LdrpCorValidateImage.c)
 *     LdrpProcessMachineMismatch @ 0x18008F9C0 (LdrpProcessMachineMismatch.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180092650 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpEnclaveAddDelayloadModules @ 0x1800D8AAC (LdrpEnclaveAddDelayloadModules.c)
 *     LdrpEnclaveAddForwarderModules @ 0x1800D8CA4 (LdrpEnclaveAddForwarderModules.c)
 *     LdrpCorFixupImage @ 0x1800DA6D8 (LdrpCorFixupImage.c)
 *     LdrpFindDelayloadedMethod @ 0x1800DA978 (LdrpFindDelayloadedMethod.c)
 *     LdrpGetDelayloadDescriptor @ 0x1800DAABC (LdrpGetDelayloadDescriptor.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800E6C5C (AvrfMiniLoadDll.c)
 *     RtlComputeImportTableHash @ 0x1800EB920 (RtlComputeImportTableHash.c)
 *     LdrEnumResources @ 0x1800EBE50 (LdrEnumResources.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x18010A614 (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     EtwpFindDebugId @ 0x180123240 (EtwpFindDebugId.c)
 * Callees:
 *     RtlAddressInSectionTable @ 0x180033A60 (RtlAddressInSectionTable.c)
 *     RtlImageNtHeaderEx @ 0x18003CF10 (RtlImageNtHeaderEx.c)
 */

NTSTATUS __fastcall RtlpImageDirectoryEntryToDataEx(
        unsigned __int64 BaseOfImage,
        char a2,
        unsigned __int16 a3,
        unsigned int *a4,
        PIMAGE_NT_HEADERS OutHeaders)
{
  PIMAGE_NT_HEADERS v5; // rsi
  int v6; // ebx
  char v7; // r14
  __int64 v9; // rbp
  char *v10; // rdi
  NTSTATUS result; // eax
  PIMAGE_NT_HEADERS v12; // rcx
  __int64 VirtualAddress; // rdx
  int v14; // r9d
  unsigned __int64 v15; // r8
  char v16; // al
  unsigned int v17; // ecx
  __int64 v18; // rax
  char *v19; // rax
  PVOID v20; // rax

  v5 = OutHeaders;
  v6 = 0;
  v7 = a2;
  v9 = a3;
  v10 = (char *)BaseOfImage;
  OutHeaders = 0LL;
  *(_QWORD *)&v5->Signature = 0LL;
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
        if ( !(_DWORD)VirtualAddress )
          return -1073741822;
        *a4 = *((_DWORD *)&OutHeaders->OptionalHeader.SizeOfHeapCommit + 2 * v9 + 1);
        if ( v7 || (unsigned int)VirtualAddress < v12->OptionalHeader.SizeOfHeaders )
        {
LABEL_10:
          *(_QWORD *)&v5->Signature = &v10[VirtualAddress];
          return v6;
        }
        v14 = 0;
        v15 = (unsigned __int64)&OutHeaders->OptionalHeader + v12->FileHeader.SizeOfOptionalHeader;
        v16 = 0;
        if ( OutHeaders->FileHeader.NumberOfSections )
        {
          while ( 1 )
          {
            v17 = *(_DWORD *)(v15 + 12);
            if ( (unsigned int)VirtualAddress >= v17 && (unsigned int)VirtualAddress < *(_DWORD *)(v15 + 16) + v17 )
              break;
            v15 += 40LL;
            if ( ++v14 >= (unsigned int)OutHeaders->FileHeader.NumberOfSections )
              goto LABEL_24;
          }
          v16 = 1;
        }
        v18 = v15 & -(__int64)(v16 != 0);
        if ( v18 )
        {
          v19 = &v10[*(unsigned int *)(v18 + 20) - (unsigned __int64)*(unsigned int *)(v18 + 12)];
          *(_QWORD *)&v5->Signature = &v19[VirtualAddress];
          if ( &v19[VirtualAddress] )
            return v6;
        }
        else
        {
LABEL_24:
          *(_QWORD *)&v5->Signature = 0LL;
        }
      }
    }
    else if ( OutHeaders->OptionalHeader.Magic == 523
           && (unsigned int)v9 < OutHeaders->OptionalHeader.NumberOfRvaAndSizes )
    {
      VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[v9].VirtualAddress;
      if ( (_DWORD)VirtualAddress )
      {
        *a4 = OutHeaders->OptionalHeader.DataDirectory[v9].Size;
        if ( !v7 && (unsigned int)VirtualAddress >= v12->OptionalHeader.SizeOfHeaders )
        {
          v20 = RtlAddressInSectionTable(v12, v10, VirtualAddress);
          *(_QWORD *)&v5->Signature = v20;
          return v20 == 0LL ? 0xC000000D : 0;
        }
        goto LABEL_10;
      }
      return -1073741822;
    }
    return -1073741811;
  }
  return result;
}

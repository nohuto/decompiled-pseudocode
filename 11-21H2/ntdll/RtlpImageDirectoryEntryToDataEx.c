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

__int64 __fastcall RtlpImageDirectoryEntryToDataEx(
        unsigned __int64 a1,
        char a2,
        unsigned __int16 a3,
        _DWORD *a4,
        __int64 a5)
{
  unsigned __int64 *v5; // rsi
  unsigned int v6; // ebx
  char v7; // r14
  __int64 v9; // rbp
  unsigned __int64 v10; // rdi
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // r9d
  __int64 v15; // r8
  char v16; // al
  unsigned int v17; // ecx
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax

  v5 = (unsigned __int64 *)a5;
  v6 = 0;
  v7 = a2;
  v9 = a3;
  v10 = a1;
  a5 = 0LL;
  *v5 = 0LL;
  if ( (a1 & 3) != 0 )
  {
    v10 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v7 = 0;
    if ( (a1 & 1) == 0 )
      v7 = a2;
  }
  result = RtlImageNtHeaderEx(1LL, v10, 0LL, &a5);
  v12 = a5;
  if ( a5 )
  {
    if ( *(_WORD *)(a5 + 24) == 267 )
    {
      if ( (unsigned int)v9 < *(_DWORD *)(a5 + 116) )
      {
        v13 = *(unsigned int *)(a5 + 8 * v9 + 120);
        if ( !(_DWORD)v13 )
          return (unsigned int)-1073741822;
        *a4 = *(_DWORD *)(a5 + 8 * v9 + 124);
        if ( v7 || (unsigned int)v13 < *(_DWORD *)(v12 + 84) )
        {
LABEL_10:
          *v5 = v10 + v13;
          return v6;
        }
        v14 = 0;
        v15 = *(unsigned __int16 *)(v12 + 20) + a5 + 24;
        v16 = 0;
        if ( *(_WORD *)(a5 + 6) )
        {
          while ( 1 )
          {
            v17 = *(_DWORD *)(v15 + 12);
            if ( (unsigned int)v13 >= v17 && (unsigned int)v13 < *(_DWORD *)(v15 + 16) + v17 )
              break;
            v15 += 40LL;
            if ( ++v14 >= (unsigned int)*(unsigned __int16 *)(a5 + 6) )
              goto LABEL_24;
          }
          v16 = 1;
        }
        v18 = v15 & -(__int64)(v16 != 0);
        if ( v18 )
        {
          v19 = v10 + *(unsigned int *)(v18 + 20) - (unsigned __int64)*(unsigned int *)(v18 + 12);
          *v5 = v19 + v13;
          if ( v19 + v13 )
            return v6;
        }
        else
        {
LABEL_24:
          *v5 = 0LL;
        }
      }
    }
    else if ( *(_WORD *)(a5 + 24) == 523 && (unsigned int)v9 < *(_DWORD *)(a5 + 132) )
    {
      v13 = *(unsigned int *)(a5 + 8 * v9 + 136);
      if ( (_DWORD)v13 )
      {
        *a4 = *(_DWORD *)(a5 + 8 * v9 + 140);
        if ( !v7 && (unsigned int)v13 >= *(_DWORD *)(v12 + 84) )
        {
          v20 = RtlAddressInSectionTable();
          *v5 = v20;
          return v20 == 0 ? 0xC000000D : 0;
        }
        goto LABEL_10;
      }
      return (unsigned int)-1073741822;
    }
    return (unsigned int)-1073741811;
  }
  return result;
}

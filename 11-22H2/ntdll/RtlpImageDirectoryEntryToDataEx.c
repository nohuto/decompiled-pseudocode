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

__int64 __fastcall RtlpImageDirectoryEntryToDataEx(
        unsigned __int64 a1,
        char a2,
        unsigned __int16 a3,
        _DWORD *a4,
        __int64 *a5)
{
  __int64 *v5; // r14
  unsigned int v6; // ebx
  char v7; // si
  __int64 v9; // rbp
  unsigned __int64 v10; // rdi
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v5 = a5;
  v6 = 0;
  v7 = a2;
  v9 = a3;
  v10 = a1;
  v16 = 0LL;
  *a5 = 0LL;
  if ( (a1 & 3) != 0 )
  {
    v10 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v7 = 0;
    if ( (a1 & 1) == 0 )
      v7 = a2;
  }
  result = RtlImageNtHeaderEx(1LL, v10, 0LL, &v16);
  v12 = v16;
  if ( v16 )
  {
    if ( *(_WORD *)(v16 + 24) == 267 )
    {
      if ( (unsigned int)v9 < *(_DWORD *)(v16 + 116) )
      {
        v13 = *(unsigned int *)(v16 + 8 * v9 + 120);
        if ( (_DWORD)v13 )
        {
          v14 = *(_DWORD *)(v16 + 8 * v9 + 124);
          goto LABEL_10;
        }
        return (unsigned int)-1073741822;
      }
    }
    else if ( *(_WORD *)(v16 + 24) == 523 && (unsigned int)v9 < *(_DWORD *)(v16 + 132) )
    {
      v13 = *(unsigned int *)(v16 + 8 * v9 + 136);
      if ( (_DWORD)v13 )
      {
        v14 = *(_DWORD *)(v16 + 8 * v9 + 140);
LABEL_10:
        *a4 = v14;
        if ( v7 || (unsigned int)v13 < *(_DWORD *)(v12 + 84) )
        {
          *v5 = v10 + v13;
        }
        else
        {
          v15 = RtlAddressInSectionTable(v12, v10, (unsigned int)v13);
          *v5 = v15;
          return v15 == 0 ? 0xC000000D : 0;
        }
        return v6;
      }
      return (unsigned int)-1073741822;
    }
    return (unsigned int)-1073741811;
  }
  return result;
}

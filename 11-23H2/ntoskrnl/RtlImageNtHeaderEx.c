/*
 * XREFs of RtlImageNtHeaderEx @ 0x140214B60
 * Callers:
 *     RtlpImageDirectoryEntryToDataEx @ 0x140214A58 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeader @ 0x140214B30 (RtlImageNtHeader.c)
 *     MiProcessKernelCfgImage @ 0x140368450 (MiProcessKernelCfgImage.c)
 *     RtlApplyFunctionOverrideFixupsToImage @ 0x1403760F4 (RtlApplyFunctionOverrideFixupsToImage.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x140376160 (RtlpCaptureDynamicRelocationTableRva.c)
 *     LdrCaptureDynamicRelocationTableHeader @ 0x1406A7AD4 (LdrCaptureDynamicRelocationTableHeader.c)
 *     LdrpResGetMappingSize @ 0x14075A1F8 (LdrpResGetMappingSize.c)
 *     LdrpResGetResourceDirectory @ 0x14075A398 (LdrpResGetResourceDirectory.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x14077DF6C (EtwpLocateDbgIdForRegEntry.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x1407D47FC (LdrpFetchAddressOfSecurityCookie.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1407D4898 (LdrImageDirectoryEntryToLoadConfig.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x14082F720 (MiCaptureBootDriverRetpolineInfo.c)
 *     LdrRelocateImageWithBias @ 0x1409C21A4 (LdrRelocateImageWithBias.c)
 *     MiOpenHotPatchFile @ 0x140A3A600 (MiOpenHotPatchFile.c)
 *     RtlFindHotPatchInformation @ 0x140A7677C (RtlFindHotPatchInformation.c)
 *     VfDriverEnableVerifierForAll @ 0x140ACA638 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlImageNtHeaderEx(ULONG Flags, PVOID BaseOfImage, ULONG64 Size, PIMAGE_NT_HEADERS *OutHeaders)
{
  NTSTATUS v5; // r10d
  char v6; // al
  ULONG64 v7; // r8
  _IMAGE_NT_HEADERS64 *v8; // rax

  if ( !OutHeaders )
    return -1073741811;
  v5 = 0;
  *OutHeaders = 0LL;
  if ( (Flags & 0xFFFFFFFE) != 0 || (char *)BaseOfImage - 1 > (char *)0xFFFFFFFFFFFFFFFDLL )
    return -1073741811;
  if ( (Flags & 1) != 0 )
  {
    v6 = 0;
  }
  else
  {
    v6 = 1;
    if ( Size < 0x40 )
      return -1073741701;
  }
  if ( *(_WORD *)BaseOfImage == 23117 )
  {
    v7 = *((unsigned int *)BaseOfImage + 15);
    if ( !v6 || v7 < Size && (unsigned int)v7 < 0xFFFFFFE7 && v7 + 24 < Size )
    {
      v8 = (_IMAGE_NT_HEADERS64 *)((char *)BaseOfImage + v7);
      if ( (char *)BaseOfImage + v7 >= BaseOfImage
        && ((unsigned __int64)BaseOfImage > 0x7FFFFFFEFFFFLL
         || (_IMAGE_NT_HEADERS64 *)((char *)&v8->OptionalHeader.DataDirectory[15].Size + 3) >= v8
         && (unsigned __int64)&v8->OptionalHeader.DataDirectory[15].Size + 3 <= 0x7FFFFFFEFFFFLL)
        && v8->Signature == 17744 )
      {
        *OutHeaders = v8;
        return v5;
      }
    }
  }
  return -1073741701;
}

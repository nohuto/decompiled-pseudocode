/*
 * XREFs of RtlImageNtHeaderEx @ 0x140214B80
 * Callers:
 *     RtlpImageDirectoryEntryToDataEx @ 0x140214A78 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeader @ 0x140214B50 (RtlImageNtHeader.c)
 *     MiProcessKernelCfgImage @ 0x140367C60 (MiProcessKernelCfgImage.c)
 *     RtlApplyFunctionOverrideFixupsToImage @ 0x1403765A4 (RtlApplyFunctionOverrideFixupsToImage.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x140376610 (RtlpCaptureDynamicRelocationTableRva.c)
 *     LdrCaptureDynamicRelocationTableHeader @ 0x1406A7AD4 (LdrCaptureDynamicRelocationTableHeader.c)
 *     LdrpResGetMappingSize @ 0x14075A518 (LdrpResGetMappingSize.c)
 *     LdrpResGetResourceDirectory @ 0x14075A6B8 (LdrpResGetResourceDirectory.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x14077E28C (EtwpLocateDbgIdForRegEntry.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x1407D4AAC (LdrpFetchAddressOfSecurityCookie.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1407D4B48 (LdrImageDirectoryEntryToLoadConfig.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x140830F70 (MiCaptureBootDriverRetpolineInfo.c)
 *     LdrRelocateImageWithBias @ 0x1409C2054 (LdrRelocateImageWithBias.c)
 *     MiOpenHotPatchFile @ 0x140A3A3C0 (MiOpenHotPatchFile.c)
 *     RtlFindHotPatchInformation @ 0x140A7653C (RtlFindHotPatchInformation.c)
 *     VfDriverEnableVerifierForAll @ 0x140ACB618 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlImageNtHeaderEx(int a1, unsigned __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  unsigned int v5; // r10d
  char v6; // al
  unsigned __int64 v7; // r8
  _DWORD *v8; // rax

  if ( !a4 )
    return (unsigned int)-1073741811;
  v5 = 0;
  *a4 = 0LL;
  if ( (a1 & 0xFFFFFFFE) != 0 || a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return (unsigned int)-1073741811;
  if ( (a1 & 1) != 0 )
  {
    v6 = 0;
  }
  else
  {
    v6 = 1;
    if ( a3 < 0x40 )
      return 3221225595LL;
  }
  if ( *(_WORD *)a2 == 23117 )
  {
    v7 = *(unsigned int *)(a2 + 60);
    if ( !v6 || v7 < a3 && (unsigned int)v7 < 0xFFFFFFE7 && v7 + 24 < a3 )
    {
      v8 = (_DWORD *)(v7 + a2);
      if ( v7 + a2 >= a2
        && (a2 > 0x7FFFFFFEFFFFLL || (_DWORD *)((char *)v8 + 263) >= v8
                                  && (unsigned __int64)v8 + 263 <= 0x7FFFFFFEFFFFLL)
        && *v8 == 17744 )
      {
        *a4 = v8;
        return v5;
      }
    }
  }
  return 3221225595LL;
}

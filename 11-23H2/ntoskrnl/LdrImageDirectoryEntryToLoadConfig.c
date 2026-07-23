/*
 * XREFs of LdrImageDirectoryEntryToLoadConfig @ 0x1407D4898
 * Callers:
 *     RtlGuardRestoreContext @ 0x140340514 (RtlGuardRestoreContext.c)
 *     RtlIsImageFullyRetpolined @ 0x140360118 (RtlIsImageFullyRetpolined.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x140376048 (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x140376160 (RtlpCaptureDynamicRelocationTableRva.c)
 *     RtlGetImageBaseAndLoadConfig @ 0x1405B2370 (RtlGetImageBaseAndLoadConfig.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1405B2458 (RtlGuardCheckLongJumpTarget.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x1407D47FC (LdrpFetchAddressOfSecurityCookie.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x14082F720 (MiCaptureBootDriverRetpolineInfo.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140214A20 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x140214B60 (RtlImageNtHeaderEx.c)
 */

_DWORD *__fastcall LdrImageDirectoryEntryToLoadConfig(PVOID BaseOfImage)
{
  __int64 v1; // rbx
  _DWORD *v3; // rdx
  ULONG Size; // [rsp+30h] [rbp+8h] BYREF
  PIMAGE_NT_HEADERS v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  Size = 0;
  v6 = 0LL;
  RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &v6);
  if ( !BaseOfImage )
    return 0LL;
  v3 = RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0xAu, &Size);
  if ( (unsigned __int64)BaseOfImage <= 0x7FFFFFFEFFFFLL
    && ((unsigned __int64)(v3 + 1) > 0x7FFFFFFF0000LL || v3 + 1 < v3) )
  {
    MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( !v3 || !Size || Size != *v3 )
    return 0LL;
  if ( v6->FileHeader.Machine == 0x8664 )
    return v3;
  return (_DWORD *)v1;
}

/*
 * XREFs of LdrImageDirectoryEntryToLoadConfig @ 0x1407D45C8
 * Callers:
 *     RtlGuardRestoreContext @ 0x140340284 (RtlGuardRestoreContext.c)
 *     RtlIsImageFullyRetpolined @ 0x14035FF78 (RtlIsImageFullyRetpolined.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x140375EA8 (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x140375FC0 (RtlpCaptureDynamicRelocationTableRva.c)
 *     RtlGetImageBaseAndLoadConfig @ 0x1405B1E00 (RtlGetImageBaseAndLoadConfig.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1405B1EE8 (RtlGuardCheckLongJumpTarget.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x1407D452C (LdrpFetchAddressOfSecurityCookie.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x14082F420 (MiCaptureBootDriverRetpolineInfo.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140214A20 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x140214B60 (RtlImageNtHeaderEx.c)
 */

_DWORD *__fastcall LdrImageDirectoryEntryToLoadConfig(unsigned __int64 a1)
{
  __int64 v1; // rbx
  int v3; // edx
  _DWORD *v4; // rdx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  v6 = 0;
  v7 = 0LL;
  RtlImageNtHeaderEx(1, a1, 0LL, &v7);
  if ( !a1 )
    return 0LL;
  LOBYTE(v3) = 1;
  v4 = (_DWORD *)RtlImageDirectoryEntryToData(a1, v3, 10, (int)&v6);
  if ( a1 <= 0x7FFFFFFEFFFFLL && ((unsigned __int64)(v4 + 1) > 0x7FFFFFFF0000LL || v4 + 1 < v4) )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( !v4 || !v6 || v6 != *v4 )
    return 0LL;
  if ( *(_WORD *)(v7 + 4) == 0x8664 )
    return v4;
  return (_DWORD *)v1;
}

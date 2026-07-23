/*
 * XREFs of AslPathCombine @ 0x140A5539C
 * Callers:
 *     SdbpGetPathAppPatchPreRS3 @ 0x14066E660 (SdbpGetPathAppPatchPreRS3.c)
 *     SdbpGetPathCustomSdbPreRS3 @ 0x14066E7F0 (SdbpGetPathCustomSdbPreRS3.c)
 *     SdbpGetPathAppPatch @ 0x140A52EE0 (SdbpGetPathAppPatch.c)
 *     SdbpGetPathAppraiser @ 0x140A52FE0 (SdbpGetPathAppraiser.c)
 *     SdbpGetPathCustomSdb @ 0x140A53130 (SdbpGetPathCustomSdb.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x140A57458 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x140A576AC (AslEnvGetSystem32DirPathBuf.c)
 * Callees:
 *     RtlStringCchCatW @ 0x14022BDA4 (RtlStringCchCatW.c)
 *     RtlStringCchLengthW @ 0x14022C750 (RtlStringCchLengthW.c)
 *     RtlStringCchCopyW @ 0x14022C7C0 (RtlStringCchCopyW.c)
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 */

__int64 __fastcall AslPathCombine(NTSTRSAFE_PCWSTR pszSrc, __int64 a2, wchar_t *a3, size_t a4)
{
  NTSTATUS v8; // ebx
  const wchar_t *v9; // r11
  NTSTRSAFE_PCWSTR v10; // r11
  const wchar_t *v11; // r15
  unsigned int v12; // ebp
  unsigned int v13; // eax
  size_t pcchLength[7]; // [rsp+30h] [rbp-38h] BYREF
  size_t v15; // [rsp+88h] [rbp+20h] BYREF

  pcchLength[0] = 0LL;
  v15 = 0LL;
  if ( !a4 )
    return 3221225507LL;
  v8 = RtlStringCchLengthW(pszSrc, 0x7FFFFFFFuLL, pcchLength);
  if ( v8 < 0 )
    goto LABEL_23;
  v8 = RtlStringCchLengthW(v9, 0x7FFFFFFFuLL, &v15);
  if ( v8 < 0 )
    goto LABEL_23;
  if ( pcchLength[0] )
  {
    if ( v15 )
    {
      v11 = v10 + 1;
      v12 = (pszSrc[pcchLength[0] - 1] == 92) + 1;
      if ( *v10 != 92 )
        v12 = pszSrc[pcchLength[0] - 1] == 92;
      if ( v12 <= 1 )
        v11 = v10;
      v8 = RtlStringCchCopyW(a3, a4, pszSrc);
      if ( v8 >= 0 )
      {
        v13 = v12 - 1;
        if ( v12 <= 1 )
          v13 = v12;
        if ( v13 || (v8 = RtlStringCchCatW(a3, a4, L"\\"), v8 >= 0) )
        {
          v8 = RtlStringCchCatW(a3, a4, v11);
          if ( v8 >= 0 )
            return 0;
        }
      }
LABEL_23:
      AslLogCallPrintf(1LL);
      return (unsigned int)v8;
    }
    v10 = pszSrc;
LABEL_11:
    v8 = RtlStringCchCopyW(a3, a4, v10);
    if ( v8 >= 0 )
      return (unsigned int)v8;
    goto LABEL_23;
  }
  if ( v15 )
    goto LABEL_11;
  *a3 = 0;
  return 0;
}

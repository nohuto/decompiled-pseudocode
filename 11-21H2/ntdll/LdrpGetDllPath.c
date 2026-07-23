/*
 * XREFs of LdrpGetDllPath @ 0x18001DBFC
 * Callers:
 *     LdrGetDllPath @ 0x18001DBD0 (LdrGetDllPath.c)
 *     LdrpComputeLazyDllPath @ 0x180051BAC (LdrpComputeLazyDllPath.c)
 * Callees:
 *     LdrpLogDllStateEx2 @ 0x18001DE58 (LdrpLogDllStateEx2.c)
 *     RtlpGetCachedPath @ 0x18001DEB4 (RtlpGetCachedPath.c)
 *     RtlDetermineDosPathNameType_U @ 0x180060670 (RtlDetermineDosPathNameType_U.c)
 *     LdrpLogRelativePathWithAlteredSearchError @ 0x180084878 (LdrpLogRelativePathWithAlteredSearchError.c)
 */

__int64 __fastcall LdrpGetDllPath(
        PCWSTR DosFileName,
        int a2,
        _QWORD *a3,
        _QWORD *a4,
        _DWORD *a5,
        _OWORD *a6,
        _QWORD *a7)
{
  bool v10; // r15
  bool v11; // r13
  unsigned int v12; // ebx
  char v13; // si
  PCWSTR v14; // rcx
  char v15; // al
  PCWSTR v16; // r8
  __int64 (__fastcall *v17)(); // rdx
  void *v18; // rcx
  PCWSTR v19; // r9
  __int64 CachedPath; // rax
  __int64 v21; // rcx
  __int64 result; // rax
  RTL_PATH_TYPE v23; // eax
  __int64 v24; // rax

  v10 = (a2 & 0x2000) != 0;
  v11 = 0;
  v12 = a2 & 0xFFFFDFFF;
  if ( (a2 & 8) != 0 )
  {
    if ( v12 != 8 )
      return 3221225485LL;
    v12 = 0;
    v13 = 1;
  }
  else
  {
    v13 = 0;
    if ( v12 )
      goto LABEL_4;
  }
  if ( LdrpDefaultDllDirectories )
  {
    v10 = (a2 & 0x2000) != 0 || (LdrpDefaultDllDirectories & 0x2000) != 0;
    v12 = LdrpDefaultDllDirectories & 0xFFFFDFFF;
  }
LABEL_4:
  v14 = 0LL;
  if ( (v12 & 0x100) == 0 && !v13 )
    goto LABEL_6;
  v23 = RtlDetermineDosPathNameType_U(DosFileName);
  if ( (unsigned int)(v23 - 1) > 1 )
  {
    if ( v23 != RtlPathTypeLocalDevice || DosFileName[2] != 63 )
      goto LABEL_25;
    v11 = RtlDetermineDosPathNameType_U(DosFileName + 4) != RtlPathTypeDriveAbsolute;
  }
  v14 = DosFileName;
  if ( !v11 )
  {
LABEL_6:
    v15 = LdrpPolicyBits;
    goto LABEL_7;
  }
LABEL_25:
  if ( !v13
    || (LdrpLogRelativePathWithAlteredSearchError(DosFileName), v15 = LdrpPolicyBits, (LdrpPolicyBits & 0x40) == 0)
    || (v13 = 0, v14 = DosFileName, (v12 & 0x100) != 0) )
  {
    v14 = DosFileName;
    if ( !v12 )
      goto LABEL_8;
    return 3221225485LL;
  }
LABEL_7:
  if ( v12 )
  {
    if ( (v12 & 0x1000) != 0 )
    {
      v12 |= 0xA00u;
      if ( (v15 & 4) != 0 )
        v12 |= 0x400u;
    }
    v16 = (PCWSTR)v12;
    v17 = RtlpComputeDllPathWithOptions;
    LODWORD(v16) = v12 | 0x100;
    v19 = v14;
    v18 = &RtlpDllSearchPathWithOptions;
    if ( !v13 )
      v16 = (PCWSTR)v12;
    goto LABEL_9;
  }
LABEL_8:
  v16 = v14;
  v17 = RtlpComputeDllPath;
  v18 = &RtlpDllSearchPath;
  v19 = 0LL;
LABEL_9:
  CachedPath = RtlpGetCachedPath(v18, v17, v16, v19);
  v21 = CachedPath;
  if ( CachedPath )
  {
    *a7 = *(_QWORD *)(CachedPath + 104);
    if ( a6 )
    {
      *a6 = *(_OWORD *)CachedPath;
      a6[1] = *(_OWORD *)(CachedPath + 16);
      a6[2] = *(_OWORD *)(CachedPath + 32);
      a6[3] = *(_OWORD *)(CachedPath + 48);
      a6[4] = *(_OWORD *)(CachedPath + 64);
    }
    *a3 = CachedPath + 128;
    if ( a4 )
    {
      if ( v10 )
        v24 = *(_QWORD *)(CachedPath + 120);
      else
        v24 = 0LL;
      *a4 = v24;
    }
    if ( a5 )
      *a5 = *(_DWORD *)(v21 + 112);
    LdrpLogDllStateEx2(v21, DosFileName, *a3, 5313LL);
    return 0LL;
  }
  else
  {
    *a3 = 0LL;
    if ( a4 )
      *a4 = 0LL;
    result = 3221225495LL;
    *a7 = 0LL;
  }
  return result;
}

/*
 * XREFs of GetOverlayFilePathUsingChecksum @ 0x18000B228
 * Callers:
 *     RtlpGetMUIRedirectedFilePath @ 0x180009C6C (RtlpGetMUIRedirectedFilePath.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001F930 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     _ValidateAndStandardizeOverlayPaths @ 0x18000B338 (_ValidateAndStandardizeOverlayPaths.c)
 *     _GetOverlayPackageKeyForLanguage @ 0x18000B474 (_GetOverlayPackageKeyForLanguage.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     _GetOverlayPackagePathFromKey @ 0x1800B0114 (_GetOverlayPackagePathFromKey.c)
 *     _GetOverlayPackageTypeFromKey @ 0x1800B01B2 (_GetOverlayPackageTypeFromKey.c)
 *     _BuildCumulativeOverlayFilePath @ 0x18012DAAC (_BuildCumulativeOverlayFilePath.c)
 *     _BuildStandardOverlayFilePath @ 0x18012DBF0 (_BuildStandardOverlayFilePath.c)
 */

__int64 __fastcall GetOverlayFilePathUsingChecksum(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        _WORD *Destination)
{
  __int64 result; // rax
  unsigned int v10; // esi
  int OverlayPackageKeyForLanguage; // ebx
  int OverlayPackagePathFromKey; // eax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned int v16; // eax
  unsigned int v17; // [rsp+50h] [rbp-B0h] BYREF
  int v18; // [rsp+54h] [rbp-ACh] BYREF
  HANDLE Handle[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+68h] [rbp-98h] BYREF
  __int64 v21; // [rsp+70h] [rbp-90h] BYREF
  char v22; // [rsp+80h] [rbp-80h] BYREF

  Handle[1] = &v22;
  LODWORD(Handle[0]) = 46006272;
  v21 = 0LL;
  v20 = 0LL;
  result = ValidateAndStandardizeOverlayPaths(a1, a2, (_DWORD)a5, (unsigned int)Handle, (__int64)&v21, (__int64)&v20);
  if ( (int)result >= 0 )
  {
    v10 = *a5;
    v17 = *a5;
    v18 = 0;
    if ( Destination && v10 >= 2 )
      *Destination = 0;
    Handle[0] = 0LL;
    OverlayPackageKeyForLanguage = GetOverlayPackageKeyForLanguage(a1, Handle);
    if ( OverlayPackageKeyForLanguage >= 0 )
    {
      OverlayPackageKeyForLanguage = GetOverlayPackageTypeFromKey(Handle[0], &v18);
      if ( OverlayPackageKeyForLanguage >= 0 )
      {
        OverlayPackagePathFromKey = GetOverlayPackagePathFromKey(Handle[0], &v17, Destination);
        v10 = v17;
        OverlayPackageKeyForLanguage = OverlayPackagePathFromKey;
      }
      if ( Handle[0] )
        NtClose(Handle[0]);
      if ( OverlayPackageKeyForLanguage >= 0 )
        goto LABEL_18;
    }
    if ( Destination && *a5 >= 2 )
      *Destination = 0;
    if ( OverlayPackageKeyForLanguage == -1073741789 )
    {
LABEL_18:
      v13 = -1LL;
      v14 = -1LL;
      do
        ++v14;
      while ( *(_WORD *)(v20 + 2 * v14) );
      v15 = (unsigned int)(2 * v14);
      do
        ++v13;
      while ( *(_WORD *)(v21 + 2 * v13) );
      v16 = 2 * v13;
      if ( (v18 & 1) != 0 && a4 && a3 )
        return BuildCumulativeOverlayFilePath(v10, v21, a3, a4, (__int64)a5, Destination);
      else
        return BuildStandardOverlayFilePath(v10, v15, v20, v16, v21, a5, Destination);
    }
    else
    {
      return (unsigned int)OverlayPackageKeyForLanguage;
    }
  }
  return result;
}

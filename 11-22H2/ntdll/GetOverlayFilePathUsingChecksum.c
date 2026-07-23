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
        PCWSTR Source,
        __int64 a2,
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
  __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+68h] [rbp-98h] BYREF
  __int64 v20; // [rsp+70h] [rbp-90h] BYREF
  char v21; // [rsp+80h] [rbp-80h] BYREF

  Handle[1] = &v21;
  LODWORD(Handle[0]) = 46006272;
  v20 = 0LL;
  v19 = 0LL;
  result = ValidateAndStandardizeOverlayPaths(Source, a2, a5, Handle, &v20, &v19);
  if ( (int)result >= 0 )
  {
    v10 = *a5;
    v17 = *a5;
    if ( Destination && v10 >= 2 )
      *Destination = 0;
    Handle[0] = 0LL;
    OverlayPackageKeyForLanguage = GetOverlayPackageKeyForLanguage(Source, Handle);
    if ( OverlayPackageKeyForLanguage >= 0 )
    {
      OverlayPackageKeyForLanguage = GetOverlayPackageTypeFromKey(Handle[0]);
      if ( OverlayPackageKeyForLanguage >= 0 )
      {
        OverlayPackagePathFromKey = GetOverlayPackagePathFromKey(Handle[0], (__int64)&v17);
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
      while ( *(_WORD *)(v19 + 2 * v14) );
      v15 = (unsigned int)(2 * v14);
      do
        ++v13;
      while ( *(_WORD *)(v20 + 2 * v13) );
      v16 = 2 * v13;
      if ( (v17 & 0x100000000LL) != 0 && a4 && a3 )
        return BuildCumulativeOverlayFilePath(v10, v20, a3, a4, (__int64)a5, Destination);
      else
        return BuildStandardOverlayFilePath(v10, v15, v19, v16, v20, a5, Destination);
    }
    else
    {
      return (unsigned int)OverlayPackageKeyForLanguage;
    }
  }
  return result;
}

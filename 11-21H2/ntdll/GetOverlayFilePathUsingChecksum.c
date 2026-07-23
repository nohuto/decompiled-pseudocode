/*
 * XREFs of GetOverlayFilePathUsingChecksum @ 0x180050A04
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180041F80 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x180063B0C (RtlpGetMUIRedirectedFilePath.c)
 * Callees:
 *     _GetOverlayPackageKeyForLanguage @ 0x18004F360 (_GetOverlayPackageKeyForLanguage.c)
 *     _ValidateAndStandardizeOverlayPaths @ 0x1800508A0 (_ValidateAndStandardizeOverlayPaths.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     _GetOverlayPackagePathFromKey @ 0x1800B1F36 (_GetOverlayPackagePathFromKey.c)
 *     _GetOverlayPackageTypeFromKey @ 0x1800B1FD4 (_GetOverlayPackageTypeFromKey.c)
 *     _BuildCumulativeOverlayFilePath @ 0x180128E24 (_BuildCumulativeOverlayFilePath.c)
 *     _BuildStandardOverlayFilePath @ 0x180128F68 (_BuildStandardOverlayFilePath.c)
 */

NTSTATUS __fastcall GetOverlayFilePathUsingChecksum(
        PCWSTR Source,
        const WCHAR *a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        _WORD *Destination)
{
  NTSTATUS result; // eax
  unsigned int v10; // esi
  int OverlayPackageKeyForLanguage; // ebx
  int OverlayPackagePathFromKey; // eax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING Handle; // [rsp+58h] [rbp-A8h] BYREF
  wchar_t *v19; // [rsp+68h] [rbp-98h] BYREF
  __int64 v20; // [rsp+70h] [rbp-90h] BYREF
  char v21; // [rsp+80h] [rbp-80h] BYREF

  Handle.Buffer = (wchar_t *)&v21;
  *(_DWORD *)&Handle.Length = 46006272;
  v20 = 0LL;
  v19 = 0LL;
  result = ValidateAndStandardizeOverlayPaths((__int64)Source, a2, (__int64)a5, &Handle, &v20, &v19);
  if ( result >= 0 )
  {
    v10 = *a5;
    v17 = *a5;
    if ( Destination && v10 >= 2 )
      *Destination = 0;
    *(_QWORD *)&Handle.Length = 0LL;
    OverlayPackageKeyForLanguage = GetOverlayPackageKeyForLanguage(Source, (PHANDLE)&Handle);
    if ( OverlayPackageKeyForLanguage >= 0 )
    {
      OverlayPackageKeyForLanguage = GetOverlayPackageTypeFromKey(*(HANDLE *)&Handle.Length);
      if ( OverlayPackageKeyForLanguage >= 0 )
      {
        OverlayPackagePathFromKey = GetOverlayPackagePathFromKey(*(HANDLE *)&Handle.Length, (__int64)&v17);
        v10 = v17;
        OverlayPackageKeyForLanguage = OverlayPackagePathFromKey;
      }
      if ( *(_QWORD *)&Handle.Length )
        NtClose(*(HANDLE *)&Handle.Length);
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
      while ( v19[v14] );
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
      return OverlayPackageKeyForLanguage;
    }
  }
  return result;
}

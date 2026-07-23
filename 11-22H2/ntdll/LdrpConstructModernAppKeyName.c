/*
 * XREFs of LdrpConstructModernAppKeyName @ 0x1800DD1B0
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800DD9FC (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x18006E480 (RtlQueryPackageIdentity.c)
 *     RtlStringCbPrintfExW @ 0x18006E844 (RtlStringCbPrintfExW.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall LdrpConstructModernAppKeyName(_WORD *a1)
{
  NTSTATUS result; // eax
  ULONG_PTR AppIdSize; // [rsp+40h] [rbp-1B8h] BYREF
  ULONG_PTR PackageSize; // [rsp+48h] [rbp-1B0h] BYREF
  WCHAR AppId[72]; // [rsp+50h] [rbp-1A8h] BYREF
  WCHAR PackageFullName[128]; // [rsp+E0h] [rbp-118h] BYREF

  AppIdSize = 132LL;
  PackageSize = 256LL;
  memset_thunk_772440563353939046(PackageFullName, 0, 0x100uLL);
  memset_thunk_772440563353939046(AppId, 0, 0x84uLL);
  result = RtlQueryPackageIdentity((HANDLE)0xFFFFFFFFFFFFFFFCLL, PackageFullName, &PackageSize, AppId, &AppIdSize, 0LL);
  if ( result >= 0 )
    return RtlStringCbPrintfExW(a1, 0x184uLL, 0LL, 0LL, 0, L"%s!%s", PackageFullName, AppId, AppIdSize, PackageSize);
  return result;
}

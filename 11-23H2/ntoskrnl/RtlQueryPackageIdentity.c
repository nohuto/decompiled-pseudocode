/*
 * XREFs of RtlQueryPackageIdentity @ 0x1402260A0
 * Callers:
 *     ExpGetProcessInformation @ 0x140742FB0 (ExpGetProcessInformation.c)
 *     EtwpQueryTokenPackageInfo @ 0x140754FF4 (EtwpQueryTokenPackageInfo.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1407B32AC (PopEtGetProcessSidAndPackageIdentity.c)
 *     PfSnCheckModernApp @ 0x1407C2C74 (PfSnCheckModernApp.c)
 *     EtwpApplyPackageIdFilter @ 0x1409F51A8 (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     RtlQueryPackageIdentityEx @ 0x1402260F0 (RtlQueryPackageIdentityEx.c)
 */

NTSTATUS __cdecl RtlQueryPackageIdentity(
        HANDLE TokenHandle,
        PWSTR PackageFullName,
        PSIZE_T PackageSize,
        PWSTR AppId,
        PSIZE_T AppIdSize,
        PBOOLEAN Packaged)
{
  NTSTATUS result; // eax
  GUID *v7; // [rsp+28h] [rbp-30h]
  unsigned __int64 v8[3]; // [rsp+40h] [rbp-18h] BYREF

  v8[0] = 0LL;
  result = RtlQueryPackageIdentityEx(TokenHandle, PackageFullName, PackageSize, AppId, AppIdSize, v7, v8);
  if ( result >= 0 )
  {
    if ( Packaged )
      *Packaged = v8[0] != 0;
  }
  return result;
}

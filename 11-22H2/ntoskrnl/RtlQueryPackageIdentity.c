/*
 * XREFs of RtlQueryPackageIdentity @ 0x140225FB0
 * Callers:
 *     ExpGetProcessInformation @ 0x1407432D0 (ExpGetProcessInformation.c)
 *     EtwpQueryTokenPackageInfo @ 0x140755314 (EtwpQueryTokenPackageInfo.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1407B366C (PopEtGetProcessSidAndPackageIdentity.c)
 *     PfSnCheckModernApp @ 0x1407C2F34 (PfSnCheckModernApp.c)
 *     EtwpApplyPackageIdFilter @ 0x1409F4FC8 (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     RtlQueryPackageIdentityEx @ 0x140226000 (RtlQueryPackageIdentityEx.c)
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

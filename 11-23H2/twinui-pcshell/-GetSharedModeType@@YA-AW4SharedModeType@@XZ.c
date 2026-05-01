/*
 * XREFs of ?GetSharedModeType@@YA?AW4SharedModeType@@XZ @ 0x1803FF6D8
 * Callers:
 *     ?IsBootToCloudModeRegistryCheck@CloudPCHelpers@@YA_NXZ @ 0x1801DAC98 (-IsBootToCloudModeRegistryCheck@CloudPCHelpers@@YA_NXZ.c)
 *     ?GetBootToCloudModeType@CloudPCHelpers@@YA?AW4BootModeType@1@XZ @ 0x1807062E4 (-GetBootToCloudModeType@CloudPCHelpers@@YA-AW4BootModeType@1@XZ.c)
 * Callees:
 *     <none>
 */

__int64 GetSharedModeType()
{
  __int64 result; // rax
  unsigned int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF
  DWORD v3; // [rsp+60h] [rbp+18h] BYREF
  int v4; // [rsp+68h] [rbp+20h] BYREF

  result = (unsigned int)`GetSharedModeType'::`2'::sharedModeCached;
  if ( `GetSharedModeType'::`2'::sharedModeCached == -1 )
  {
    pcbData = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\SharedPC",
      L"SharedPCMode",
      0x20010010u,
      0LL,
      &pvData,
      &pcbData);
    v3 = 4;
    RegGetValueW(
      HKEY_CURRENT_USER,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\SharedPC",
      L"DoNotCacheSharedPCMode",
      0x20010010u,
      0LL,
      &v4,
      &v3);
    result = pvData;
    if ( !v4 )
      `GetSharedModeType'::`2'::sharedModeCached = pvData;
  }
  return result;
}

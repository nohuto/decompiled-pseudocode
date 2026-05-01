/*
 * XREFs of ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x1800E7D88
 * Callers:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x1800E7794 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 *     ?GetPackageFullNameFromAppId@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAG@Z @ 0x1803B3D70 (-GetPackageFullNameFromAppId@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAG@Z.c)
 *     ?IsLegacyApp@@YA_NPEBG@Z @ 0x1803EED74 (-IsLegacyApp@@YA_NPEBG@Z.c)
 *     ?s_IsLegacyApp@CSwitchController@@CA_NPEBG@Z @ 0x1804E5D38 (-s_IsLegacyApp@CSwitchController@@CA_NPEBG@Z.c)
 *     ImmersiveIcons::GetPackageFullNameForAppsFolderItem @ 0x1805ED5E8 (ImmersiveIcons--GetPackageFullNameForAppsFolderItem.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800913B8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAG_K12@Z @ 0x1800E7F80 (-ParseAppUserModelId@@YAJPEBGPEAG_K12@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

int __fastcall CallerIdentity::GetPackageFullNameFromAppId(CallerIdentity *this, char **a2, unsigned __int16 **a3)
{
  int result; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  bool v7; // sf
  unsigned __int64 v8; // r9
  int bufferLength; // [rsp+20h] [rbp-E0h]
  UINT32 count; // [rsp+40h] [rbp-C0h] BYREF
  UINT32 v11; // [rsp+44h] [rbp-BCh] BYREF
  PWSTR packageFullNames; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR buffer[128]; // [rsp+E0h] [rbp-20h] BYREF

  v11 = 128;
  *a2 = 0LL;
  packageFullNames = 0LL;
  count = 1;
  result = ParseAppUserModelId((const unsigned __int16 *)this, packageFamilyName, (unsigned __int64)a3, 0LL, 0LL);
  if ( result >= 0 )
  {
    result = FindPackagesByPackageFamily(packageFamilyName, 0x10u, &count, &packageFullNames, &v11, buffer, 0LL);
    v7 = result < 0;
    if ( result > 0 )
    {
      result = (unsigned __int16)result | 0x80070000;
      v7 = result < 0;
    }
    if ( !v7 )
    {
      if ( count == 1 )
      {
        v8 = -1LL;
        do
          ++v8;
        while ( buffer[v8] );
        return _AllocStringWorker<CTCoAllocPolicy>(v6, v5, buffer, v8, bufferLength, a2);
      }
      else
      {
        return -2147221165;
      }
    }
  }
  return result;
}

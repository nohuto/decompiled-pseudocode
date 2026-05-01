/*
 * XREFs of ?IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x1805E8058
 * Callers:
 *     _lambda_b1ccbe0050df59b1c7585372b6aa23ae_::operator() @ 0x1803FC320 (_lambda_b1ccbe0050df59b1c7585372b6aa23ae_--operator().c)
 *     _lambda_b54eacfb88775a45f9bf3f20a89a8862_::operator() @ 0x180405574 (_lambda_b54eacfb88775a45f9bf3f20a89a8862_--operator().c)
 *     ?DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPEAUHWND__@@@Z @ 0x1805E7E50 (-DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPE.c)
 *     ?IsApplicationInteractive@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x1805E81B4 (-IsApplicationInteractive@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 * Callees:
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x1800E7E80 (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     IsWPDeveloperAppAllowedPresent @ 0x18018F4D4 (IsWPDeveloperAppAllowedPresent.c)
 *     ?GetPackageActivationSettings@@YAJPEBGPEAW4PACKAGEACTIVATIONSETTINGS@@@Z @ 0x18061B068 (-GetPackageActivationSettings@@YAJPEBGPEAW4PACKAGEACTIVATIONSETTINGS@@@Z.c)
 */

__int64 __fastcall CallerIdentity::ApiPolicyChecker::IsAppBeingDebugged(
        CallerIdentity::ApiPolicyChecker *this,
        unsigned __int16 *a2,
        int *a3)
{
  int PackageActivationSettings; // ebx
  LONG PackagesByPackageFamily; // eax
  int v7; // eax
  UINT32 count; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  UINT32 bufferLength; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[4]; // [rsp+3Ch] [rbp-C4h] BYREF
  PWSTR packageFullNames; // [rsp+40h] [rbp-C0h] BYREF
  PCWSTR packageFamilyName; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B0h]
  __int64 v16; // [rsp+58h] [rbp-A8h]
  WCHAR buffer[128]; // [rsp+60h] [rbp-A0h] BYREF

  *(_DWORD *)a2 = 0;
  packageFamilyName = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&packageFamilyName);
  v15 = -1LL;
  v16 = -1LL;
  PackageActivationSettings = ParseAppUserModelId((const unsigned __int16 *)this, (char **)&packageFamilyName, 0LL);
  if ( PackageActivationSettings >= 0 )
  {
    count = 1;
    bufferLength = 128;
    PackagesByPackageFamily = GetPackagesByPackageFamily(
                                packageFamilyName,
                                &count,
                                &packageFullNames,
                                &bufferLength,
                                buffer);
    PackageActivationSettings = PackagesByPackageFamily;
    if ( PackagesByPackageFamily > 0 )
      PackageActivationSettings = (unsigned __int16)PackagesByPackageFamily | 0x80070000;
    if ( PackageActivationSettings >= 0 && count == 1 )
    {
      if ( IsWPDeveloperAppAllowedPresent() )
        v7 = WPDeveloperAppAllowed(packageFullNames, &v10);
      else
        v7 = IsDeveloperModeEnabled(&v10);
      PackageActivationSettings = v7;
      if ( v7 >= 0 )
      {
        if ( v10 )
        {
          PackageActivationSettings = GetPackageActivationSettings(
                                        packageFullNames,
                                        (enum PACKAGEACTIVATIONSETTINGS *)v12);
          if ( PackageActivationSettings >= 0 && (v12[0] & 2) != 0 )
            *(_DWORD *)a2 = 1;
        }
      }
    }
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&packageFamilyName);
  return (unsigned int)PackageActivationSettings;
}

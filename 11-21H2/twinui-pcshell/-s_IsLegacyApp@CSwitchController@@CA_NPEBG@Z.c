/*
 * XREFs of ?s_IsLegacyApp@CSwitchController@@CA_NPEBG@Z @ 0x1804E5D38
 * Callers:
 *     ?_PackageActivationArguments@CSwitchController@@AEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@_NPEAPEAUIDelayedAppActivation@@@Z @ 0x1804E5784 (-_PackageActivationArguments@CSwitchController@@AEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERN.c)
 * Callees:
 *     ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x1800E7D88 (-GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

bool __fastcall CSwitchController::s_IsLegacyApp(CallerIdentity *this)
{
  bool v2; // bl
  unsigned __int16 **v3; // r8
  unsigned __int16 v5[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  *(_QWORD *)v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v5);
  v6 = -1LL;
  v7 = -1LL;
  if ( CallerIdentity::GetPackageFullNameFromAppId(this, (char **)v5, v3) >= 0
    && (int)QuirkIsEnabledForPackage(*(_QWORD *)v5, this, 1114112LL, &v8) >= 0 )
  {
    v2 = v8 != 0;
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v5);
  return v2;
}

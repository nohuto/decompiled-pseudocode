/*
 * XREFs of ?AllowPackageInstall@WidgetPlatformPackageHelper@@UEAA_NXZ @ 0x1802380D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?IsAutomaticInstallAllowedByPolicy@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x18023EC74 (-IsAutomaticInstallAllowedByPolicy@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsNetworkAvailableAndNotConstrained@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x18023F54C (-IsNetworkAvailableAndNotConstrained@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsPackageInstalled@LockScreenWidgetPackageHelperBase@@QEAA_NXZ @ 0x18023FA40 (-IsPackageInstalled@LockScreenWidgetPackageHelperBase@@QEAA_NXZ.c)
 *     ?IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x18023FEAC (-IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall WidgetPlatformPackageHelper::AllowPackageInstall(WidgetPlatformPackageHelper *this)
{
  LockScreenWidgetPackageHelperBase *v2; // rcx
  bool IsPackageInstalled; // bl
  void **v5; // [rsp+20h] [rbp-19h] BYREF
  int v6; // [rsp+28h] [rbp-11h]
  const wchar_t *v7; // [rsp+30h] [rbp-9h]
  __int64 v8; // [rsp+38h] [rbp-1h]
  const unsigned __int16 *v9; // [rsp+40h] [rbp+7h]
  __int64 v10; // [rsp+48h] [rbp+Fh]
  __int64 v11; // [rsp+50h] [rbp+17h] BYREF
  __m128i si128; // [rsp+60h] [rbp+27h]
  __int64 v13; // [rsp+70h] [rbp+37h]

  if ( !*((_DWORD *)this + 2) && !LockScreenWidgetPackageHelperBase::IsAutomaticInstallAllowedByPolicy(this)
    || !LockScreenWidgetPackageHelperBase::IsPowerSupplyAdequateForInstall(this)
    || !LockScreenWidgetPackageHelperBase::IsNetworkAvailableAndNotConstrained(v2) )
  {
    return 0;
  }
  v6 = *((_DWORD *)this + 2);
  v7 = L"9MSSGKG348SP";
  v8 = 12LL;
  v9 = L"MicrosoftWindows.Client.WebExperience_cw5n1h2txyewy";
  v10 = 51LL;
  v11 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v13 = 0x826144020CLL;
  v5 = &WebExperiencePackageHelper::`vftable';
  IsPackageInstalled = LockScreenWidgetPackageHelperBase::IsPackageInstalled((LockScreenWidgetPackageHelperBase *)&v5);
  std::wstring::_Tidy_deallocate((__int64)&v11);
  return IsPackageInstalled;
}

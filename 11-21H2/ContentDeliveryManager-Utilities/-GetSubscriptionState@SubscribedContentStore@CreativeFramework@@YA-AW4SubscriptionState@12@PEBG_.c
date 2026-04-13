/*
 * XREFs of ?GetSubscriptionState@SubscribedContentStore@CreativeFramework@@YA?AW4SubscriptionState@12@PEBG_N@Z @ 0x18007081C
 * Callers:
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x18006EE8C (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180039F6C (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180043DD8 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAU_FILETIME@@@Z @ 0x18005DBC0 (-GetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAU_FILETIME@@@.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentAPI@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18006FA80 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentAPI@@@det.c)
 */

// Hidden C++ exception states: #wind=14
_BOOL8 __fastcall CreativeFramework::SubscribedContentStore::GetSubscriptionState(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // r8d
  const unsigned __int16 *v3; // r8
  int FileTimeSetting; // eax
  unsigned __int64 v5; // rbx
  BOOL v6; // ebx
  int v8; // [rsp+20h] [rbp-19h]
  int v9; // [rsp+20h] [rbp-19h]
  struct _FILETIME v10; // [rsp+40h] [rbp+7h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+48h] [rbp+Fh] BYREF
  unsigned __int64 v12; // [rsp+50h] [rbp+17h]
  bool v13[8]; // [rsp+58h] [rbp+1Fh] BYREF
  LPVOID pv[3]; // [rsp+60h] [rbp+27h] BYREF
  LPVOID v15; // [rsp+78h] [rbp+3Fh]
  __int64 v16; // [rsp+80h] [rbp+47h]
  signed __int32 v17; // [rsp+88h] [rbp+4Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  v15 = 0LL;
  memset(pv, 0, sizeof(pv));
  v1 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
         (__int64)pv,
         L"%s\\%s",
         L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\Subscriptions",
         a1);
  if ( v1 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      54LL,
      (__int64)"onecoreuap\\internal\\shell\\inc\\SubscribedContentStoreShared.h",
      (const char *)(unsigned int)v1,
      v8);
  v15 = pv[0];
  v16 = 0LL;
  v2 = `wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetImpl'::`2'::impl & 2) == 0 )
  {
    v12 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TargetedContentAPI>::GetCachedFeatureEnabledState(
                       &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetImpl'::`2'::impl,
                       &v17);
    v2 = v12;
  }
  v10.dwLowDateTime = 0;
  LOBYTE(v10.dwHighDateTime) = 3;
  wil::details::ReportUsageToService(
    (__int64)&unk_1801AF1F0,
    0x7EA375u,
    (v2 >> 8) & 1,
    (v2 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&v10,
    1,
    3);
  LOBYTE(v3) = 1;
  FileTimeSetting = CreativeFramework::ContentDeliveryManagerSettings::GetFileTimeSetting(
                      (const WCHAR *)pv[0],
                      L"LastAccessed",
                      v3,
                      v13);
  if ( FileTimeSetting < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      141LL,
      (__int64)"onecoreuap\\internal\\shell\\inc\\SubscribedContentStore.h",
      (const char *)(unsigned int)FileTimeSetting,
      v9);
  v5 = *(unsigned int *)v13 + ((unsigned __int64)*(unsigned int *)&v13[4] << 32) + 2592000000000LL;
  v12 = v5;
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v6 = (unsigned int)v5 + ((unsigned __int64)HIDWORD(v12) << 32) > SystemTimeAsFileTime.dwLowDateTime
                                                                 + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return v6;
}

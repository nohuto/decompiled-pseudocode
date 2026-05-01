/*
 * XREFs of ?ToggleDashboardVisibility@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4DashboardInvokeType@Dashboard@3UI@WindowsUdk@6@URect@Foundation@56@@Z @ 0x18005A0D0
 * Callers:
 *     ?OnMessage@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJI_K_J@Z @ 0x18005A050 (-OnMessage@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?IsDashboardVisible@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x18005A34C (-IsDashboardVisible@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ.c)
 *     _anonymous_namespace_::TryGetDashboardPackageName @ 0x18005A3E8 (_anonymous_namespace_--TryGetDashboardPackageName.c)
 *     ??$DashboardInteracted@AEAU_GUID@@IAEA_NPEBGPEBGAEAY0BK@$$CBGAEAPEBG@DashboardManagerTelemetry@@SAXAEAU_GUID@@$$QEAIAEA_N$$QEAPEBG3AEAY0BK@$$CBGAEAPEBG@Z @ 0x18005A55C (--$DashboardInteracted@AEAU_GUID@@IAEA_NPEBGPEBGAEAY0BK@$$CBGAEAPEBG@DashboardManagerTelemetry@@.c)
 *     ??$convert@$00U_GUID@@@guid@winrt@@CA?AU01@AEBU_GUID@@@Z @ 0x180088608 (--$convert@$00U_GUID@@@guid@winrt@@CA-AU01@AEBU_GUID@@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     _anonymous_namespace_::DashboardExtensionVersion::_DashboardExtensionVersion @ 0x1800A8D64 (_anonymous_namespace_--DashboardExtensionVersion--_DashboardExtensionVersion.c)
 *     ??1?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@QEAA@XZ @ 0x1800A8D90 (--1-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x1800B6A10 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?GetDashboardAppExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@6@XZ @ 0x18023BE40 (-GetDashboardAppExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUA.c)
 *     ?ToggleDashboardVisibilityAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@Uguid@6@W4DashboardInvokeType@Dashboard@3UI@WindowsUdk@6@URect@Foundation@56@@Z @ 0x180244908 (-ToggleDashboardVisibilityAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AE.c)
 *     _anonymous_namespace_::TryGetDashboardPackageName_0 @ 0x180244DFC (_anonymous_namespace_--TryGetDashboardPackageName_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ @ 0x18024877C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1803D4B3C (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibility(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *a1,
        __int64 a2,
        const WCHAR *a3)
{
  const WCHAR *v3; // rsi
  winrt::Windows::Internal::Shell::implementation::DashboardManager *v4; // rdi
  HRESULT v5; // eax
  const char *v6; // r9
  __int64 DashboardPackageName_0; // rax
  const WCHAR *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  int v11; // [rsp+20h] [rbp-128h]
  _BYTE v12[16]; // [rsp+40h] [rbp-108h] BYREF
  const WCHAR *v13; // [rsp+50h] [rbp-F8h] BYREF
  winrt::Windows::Internal::Shell::implementation::DashboardManager *v14; // [rsp+60h] [rbp-E8h] BYREF
  __int128 v15; // [rsp+70h] [rbp-D8h] BYREF
  _BYTE v16[24]; // [rsp+80h] [rbp-C8h] BYREF
  _QWORD v17[4]; // [rsp+98h] [rbp-B0h] BYREF
  char v18; // [rsp+B8h] [rbp-90h]
  _QWORD v19[4]; // [rsp+C0h] [rbp-88h] BYREF
  _QWORD v20[2]; // [rsp+E0h] [rbp-68h] BYREF
  __m128i si128; // [rsp+F0h] [rbp-58h]
  GUID v22; // [rsp+100h] [rbp-48h] BYREF
  _QWORD v23[4]; // [rsp+110h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+0h]

  v3 = a3;
  v4 = a1;
  v14 = a1;
  v13 = a3;
  v5 = CoCreateGuid(&v22);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6E6,
      (unsigned int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)(unsigned int)v5,
      v11);
  try
  {
    v12[0] = winrt::Windows::Internal::Shell::implementation::DashboardManager::IsDashboardVisible(v4);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x6ED,
      (unsigned int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      v6);
    v4 = v14;
    v3 = v13;
  }
  std::wstring::wstring(v23, &LocaleName);
  v20[0] = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_49686193>::GetImpl'::`2'::impl) )
  {
    winrt::Windows::Internal::Shell::implementation::DashboardManager::GetDashboardAppExtension(v4, &v13);
    DashboardPackageName_0 = anonymous_namespace_::TryGetDashboardPackageName_0(v19);
    std::wstring::operator=(v20, DashboardPackageName_0);
    wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(v19);
  }
  else
  {
    anonymous_namespace_::TryGetDashboardPackageName(v20);
  }
  anonymous_namespace_::TryGetAvailableDashboardExtensionVersion(v16);
  if ( v18 )
  {
    v8 = (const WCHAR *)v17;
    if ( v17[3] >= 8uLL )
      v8 = (const WCHAR *)v17[0];
  }
  else
  {
    v8 = &LocaleName;
  }
  v13 = v8;
  v9 = v20;
  if ( si128.m128i_i64[1] >= 8uLL )
    v9 = (_QWORD *)v20[0];
  *(_QWORD *)&v15 = v9;
  v10 = v23;
  if ( v23[3] >= 8uLL )
    v10 = (_QWORD *)v23[0];
  v19[0] = v10;
  LODWORD(v14) = 1;
  DashboardManagerTelemetry::DashboardInteracted<_GUID &,unsigned int,bool &,unsigned short const *,unsigned short const *,unsigned short const (&)[26],unsigned short const * &>(
    (unsigned int)&v22,
    (unsigned int)&v14,
    (unsigned int)v12,
    (unsigned int)v19,
    (__int64)&v15);
  winrt::guid::convert<1,_GUID>(v19, &v22);
  v15 = *(_OWORD *)v3;
  winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync(v4, v12, v19);
  if ( v18 )
    anonymous_namespace_::DashboardExtensionVersion::_DashboardExtensionVersion(v16);
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(v20);
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(v23);
}

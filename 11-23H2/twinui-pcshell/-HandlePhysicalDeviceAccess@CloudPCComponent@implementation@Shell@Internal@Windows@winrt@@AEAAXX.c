/*
 * XREFs of ?HandlePhysicalDeviceAccess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180277CEC
 * Callers:
 *     ?perform_delayed_initialization@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1801ADA70 (-perform_delayed_initialization@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UE.c)
 * Callees:
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??1?$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAA@XZ @ 0x180072254 (--1-$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAA@XZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180095B9C (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1800C4F00 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800C4F5C (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?IsPhysicalDeviceAccessConfigured@CloudPCHelpers@@YA_NXZ @ 0x1801DAD44 (-IsPhysicalDeviceAccessConfigured@CloudPCHelpers@@YA_NXZ.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1801DBA20 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_BASBF@@@details@wil@@QEAA_NXZ @ 0x1801DBA48 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_BASBF@@@details@wil@@QEAA_NXZ.c)
 *     ??$PhysicalDeviceAccessed@AEAY0BAE@G@CloudPCTelemetryCore@@SAXAEAY0BAE@G@Z @ 0x180276A8C (--$PhysicalDeviceAccessed@AEAY0BAE@G@CloudPCTelemetryCore@@SAXAEAY0BAE@G@Z.c)
 *     ??1?$test_data_control@U_tip_VDSlideAnimationPerfTest@@@tip@@QEAA@XZ @ 0x180276C00 (--1-$test_data_control@U_tip_VDSlideAnimationPerfTest@@@tip@@QEAA@XZ.c)
 *     ?IsSignOutConfiguredForPhysicalDeviceAccess@CloudPCHelpers@@YA_NXZ @ 0x180278370 (-IsSignOutConfiguredForPhysicalDeviceAccess@CloudPCHelpers@@YA_NXZ.c)
 *     ?SubscribeToAccessPhysicalDevice@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180278634 (-SubscribeToAccessPhysicalDevice@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@A.c)
 *     ?start_and_watch_errors@?$tip_test@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@@tip@@QEAA?AV?$test_watcher@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@@2@XZ @ 0x180278CD4 (-start_and_watch_errors@-$tip_test@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@@tip@@QEAA-.c)
 *     ?GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z @ 0x180706530 (-GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::CloudPCComponent::HandlePhysicalDeviceAccess(
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent *this)
{
  CloudPCHelpers *v2; // rcx
  unsigned int v3; // eax
  wil::details::in1diag3 *v4; // rcx
  __int64 v5; // rdx
  const char *v6; // r9
  const unsigned __int16 *v7; // r8
  unsigned int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // rdx
  std::_Ref_count_base *v11; // rbx
  __int64 v12; // rax
  std::_Ref_count_base *v13; // rbx
  __int64 v14; // rax
  std::_Ref_count_base *v15; // rbx
  __int64 v16; // rax
  std::_Ref_count_base *v17; // rbx
  __int64 v18; // rax
  std::_Ref_count_base *v19; // rbx
  __int64 v20; // rax
  HKEY hKey; // [rsp+50h] [rbp-288h] BYREF
  std::_Ref_count_base *v22[2]; // [rsp+58h] [rbp-280h] BYREF
  BYTE Data[8]; // [rsp+68h] [rbp-270h] BYREF
  _BYTE v24[48]; // [rsp+70h] [rbp-268h] BYREF
  _QWORD v25[2]; // [rsp+A0h] [rbp-238h] BYREF
  _BYTE pvData[528]; // [rsp+B0h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2D8h] [rbp+0h]

  try
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_BASBF>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_BASBF>::GetImpl'::`2'::impl)
      && CloudPCHelpers::IsSignOutConfiguredForPhysicalDeviceAccess(v2) )
    {
      hKey = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
        &hKey,
        0LL);
      v3 = RegOpenKeyExW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\BootToCloud\\PhysicalDeviceAccess",
             0,
             2u,
             &hKey);
      if ( v3 != 2 )
      {
        v4 = retaddr;
        if ( v3 )
        {
          v5 = 411LL;
        }
        else
        {
          v3 = RegDeleteValueW(hKey, L"SignOutConfiguredForPhysicalDeviceAccess");
          v4 = retaddr;
          if ( !v3 )
          {
            ExitWindowsEx(4u, 0x80000000);
            wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
            return;
          }
          v5 = 413LL;
        }
        wil::details::in1diag3::_Log_Win32(
          v4,
          (void *)v5,
          (int)"pcshell\\twinui\\cloudpc\\lib\\cloudpccomponent.cpp",
          (const char *)v3);
      }
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
    }
    if ( CloudPCHelpers::IsPhysicalDeviceAccessConfigured(v2) )
    {
      *(_OWORD *)v22 = 0LL;
      tip::tip_test<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>::start_and_watch_errors(v22, v24);
      if ( v22[1] )
        std::_Ref_count_base::_Decref(v22[1]);
      *(_DWORD *)Data = 1;
      hKey = 0LL;
      CloudPCHelpers::GetCorrelationId(pvData, (wchar_t *)L"SystemId_boot", v7);
      CloudPCTelemetryCore::PhysicalDeviceAccessed<unsigned short (&)[260]>((__int64)pvData);
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_BASBF>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_BASBF>::GetImpl'::`2'::impl) )
      {
        v8 = RegDeleteKeyExW(
               HKEY_CURRENT_USER,
               L"Software\\Microsoft\\Windows\\BootToCloud\\PhysicalDeviceAccess",
               0,
               0);
        v9 = retaddr;
        if ( v8 )
        {
          v10 = 433LL;
LABEL_28:
          wil::details::in1diag3::_Log_Win32(
            v9,
            (void *)v10,
            (int)"pcshell\\twinui\\cloudpc\\lib\\cloudpccomponent.cpp",
            (const char *)v8);
LABEL_39:
          tip::details::test_common_data<1>::complete(v25[0] + 8LL);
LABEL_40:
          wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
          tip::test_watcher<_tip_DiscoverabilityManagerTipTest>::~test_watcher<_tip_DiscoverabilityManagerTipTest>((__int64)v24);
          return;
        }
        std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
          v22,
          v25);
        v11 = v22[0];
        tip::details::test_common_data<1>::begin_update((__int64)v22[0] + 8);
        v12 = (__int64)v11 + 184;
        if ( !v11 )
          v12 = 8LL;
        *(_BYTE *)v12 = 1;
        tip::test_data_control<_tip_VDSlideAnimationPerfTest>::~test_data_control<_tip_VDSlideAnimationPerfTest>((__int64 *)v22);
        wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
          &hKey,
          0LL);
        v8 = RegCreateKeyExW(
               HKEY_CURRENT_USER,
               L"Software\\Microsoft\\Windows\\BootToCloud\\PhysicalDeviceAccess",
               0,
               0LL,
               1u,
               0x20006u,
               0LL,
               &hKey,
               0LL);
        v9 = retaddr;
        if ( v8 )
        {
          v10 = 436LL;
          goto LABEL_28;
        }
        std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
          v22,
          v25);
        v13 = v22[0];
        tip::details::test_common_data<1>::begin_update((__int64)v22[0] + 8);
        v14 = (__int64)v13 + 185;
        if ( !v13 )
          v14 = 9LL;
        *(_BYTE *)v14 = 1;
        tip::test_data_control<_tip_VDSlideAnimationPerfTest>::~test_data_control<_tip_VDSlideAnimationPerfTest>((__int64 *)v22);
        v8 = RegSetValueExW(hKey, L"PhysicalDeviceAccessConfigured", 0, 4u, Data, 4u);
        v9 = retaddr;
        if ( v8 )
        {
          v10 = 439LL;
          goto LABEL_28;
        }
        v8 = RegSetValueExW(hKey, L"PhysicalDeviceAccessed", 0, 4u, Data, 4u);
        v9 = retaddr;
        if ( v8 )
        {
          v10 = 441LL;
          goto LABEL_28;
        }
      }
      else
      {
        if ( RegDeleteKeyExW(
               HKEY_CURRENT_USER,
               L"Software\\Microsoft\\Windows\\BootToCloud\\PhysicalDeviceAccess",
               0,
               0) < 0 )
          goto LABEL_40;
        std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
          v22,
          v25);
        v15 = v22[0];
        tip::details::test_common_data<1>::begin_update((__int64)v22[0] + 8);
        v16 = (__int64)v15 + 184;
        if ( !v15 )
          v16 = 8LL;
        *(_BYTE *)v16 = 1;
        tip::test_data_control<_tip_VDSlideAnimationPerfTest>::~test_data_control<_tip_VDSlideAnimationPerfTest>((__int64 *)v22);
        wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
          &hKey,
          0LL);
        if ( RegCreateKeyExW(
               HKEY_CURRENT_USER,
               L"Software\\Microsoft\\Windows\\BootToCloud\\PhysicalDeviceAccess",
               0,
               0LL,
               1u,
               0x20006u,
               0LL,
               &hKey,
               0LL) < 0 )
          goto LABEL_40;
        std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
          v22,
          v25);
        v17 = v22[0];
        tip::details::test_common_data<1>::begin_update((__int64)v22[0] + 8);
        v18 = (__int64)v17 + 185;
        if ( !v17 )
          v18 = 9LL;
        *(_BYTE *)v18 = 1;
        tip::test_data_control<_tip_VDSlideAnimationPerfTest>::~test_data_control<_tip_VDSlideAnimationPerfTest>((__int64 *)v22);
        if ( RegSetValueExW(hKey, L"PhysicalDeviceAccessConfigured", 0, 4u, Data, 4u) < 0 )
          goto LABEL_40;
      }
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        v22,
        v25);
      v19 = v22[0];
      tip::details::test_common_data<1>::begin_update((__int64)v22[0] + 8);
      v20 = (__int64)v19 + 186;
      if ( !v19 )
        v20 = 10LL;
      *(_BYTE *)v20 = 1;
      tip::test_data_control<_tip_VDSlideAnimationPerfTest>::~test_data_control<_tip_VDSlideAnimationPerfTest>((__int64 *)v22);
      goto LABEL_39;
    }
    if ( *((_DWORD *)this + 30) == 1 )
      winrt::Windows::Internal::Shell::implementation::CloudPCComponent::SubscribeToAccessPhysicalDevice(this);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x1DF,
      (unsigned int)"pcshell\\twinui\\cloudpc\\lib\\cloudpccomponent.cpp",
      v6);
  }
}

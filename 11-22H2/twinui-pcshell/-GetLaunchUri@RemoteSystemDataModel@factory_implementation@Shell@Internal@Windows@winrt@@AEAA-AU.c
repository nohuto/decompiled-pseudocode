/*
 * XREFs of ?GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AUUri@Foundation@56@AEBURemoteDesktopProviderInfo@3456@W4Mode@CloudPCHelpers@@@Z @ 0x180712008
 * Callers:
 *     ?LaunchBootToCloudAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x1807146CC (-LaunchBootToCloudAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winr.c)
 *     ?LaunchForSwitchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180714D9C (-LaunchForSwitchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1800B5424 (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ?_Equal@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_NQEBG@Z @ 0x18017B6A0 (-_Equal@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_NQEBG@Z.c)
 *     ??$?0PEAG$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x18019AC30 (--$-0PEAG$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEAG0AEBV-$alloc.c)
 *     ??$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z @ 0x18019AC74 (--$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAA_NXZ @ 0x180279EA8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@d_ea_180279EA8.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly@@@details@wil@@QEAA_NXZ @ 0x18040A54C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly@@@det.c)
 *     ?GetBootToCloudModeType@CloudPCHelpers@@YA?AW4BootModeType@1@XZ @ 0x1807062E4 (-GetBootToCloudModeType@CloudPCHelpers@@YA-AW4BootModeType@1@XZ.c)
 *     ?GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z @ 0x180706530 (-GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z.c)
 *     ?CreateCorrelationIdForSwitch@Utils@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@U76@@Z @ 0x18070FBE4 (-CreateCorrelationIdForSwitch@Utils@implementation@Shell@Internal@Windows@winrt@@SA-AUhstring@6@.c)
 *     ?SetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@0@Z @ 0x1807187BC (-SetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEA.c)
 *     ?SystemId@?$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1807192A8 (-SystemId@-$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Internal@W.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings@@@details@wil@@QEAA_NXZ @ 0x18071A804 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ManagedPCSe_ea_18071A804.c)
 *     ??0UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18072C2A4 (--0UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$basic_string@GU-$char_trai.c)
 *     ?AddQueryParameter@UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x18072C3D0 (-AddQueryParameter@UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBV-$basic_stri.c)
 *     ?Uri@UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEBA?AU0Foundation@56@XZ @ 0x18072C590 (-Uri@UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEBA-AU0Foundation@56@XZ.c)
 */

// Hidden C++ exception states: #wind=19
volatile signed __int32 *__fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::GetLaunchUri(
        winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *a1,
        volatile signed __int32 *a2,
        __int64 a3,
        int a4)
{
  const unsigned __int16 *v8; // r8
  unsigned __int16 *v9; // rax
  unsigned int BootToCloudModeType; // edi
  unsigned __int16 *v11; // rax
  _WORD *v12; // rax
  unsigned __int16 *v13; // rax
  unsigned __int16 *v14; // rax
  wchar_t *v15; // rdx
  unsigned __int16 *v16; // rax
  unsigned __int16 *v17; // rax
  unsigned __int16 *v18; // rax
  unsigned __int16 *v19; // rax
  struct winrt::impl::hstring_header *v20; // rdx
  unsigned int v21; // r8d
  unsigned __int16 *v22; // rax
  unsigned __int16 *v23; // rax
  unsigned __int16 *v24; // rax
  __int64 v25; // r8
  unsigned __int16 *v26; // rax
  unsigned __int16 *v27; // rax
  unsigned __int16 *v28; // rax
  volatile signed __int32 *v30; // [rsp+20h] [rbp-E0h] BYREF
  winrt::impl *v31; // [rsp+28h] [rbp-D8h] BYREF
  struct winrt::impl::hstring_header *v32; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v33[4]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v34[4]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v35[40]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v36[4]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v37[4]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v38[4]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v39[5]; // [rsp+108h] [rbp+8h] BYREF
  _WORD v40[7]; // [rsp+132h] [rbp+32h] BYREF
  _WORD pvData[264]; // [rsp+140h] [rbp+40h] BYREF

  v32 = (struct winrt::impl::hstring_header *)a2;
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudPCCommon_v3>::__private_IsEnabled((volatile signed __int32 *)`wil::Feature<__WilFeatureTraits_Feature_CloudPCCommon_v3>::GetImpl'::`2'::impl) )
    goto LABEL_16;
  if ( a4 == 1 )
  {
    CloudPCHelpers::GetCorrelationId(pvData, (wchar_t *)L"SystemId_boot", v8);
    std::wstring::wstring(v37, pvData);
    v9 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_remoteSystemBootAPPURI);
    std::wstring::wstring(v38, v9);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::UriBuilder(v35, v38);
    std::wstring::_Tidy_deallocate((__int64)v38);
    BootToCloudModeType = CloudPCHelpers::GetBootToCloudModeType();
    if ( !std::wstring::_Equal((char *)v37, (char *)&LocaleName) )
    {
      v11 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_correlationIdQueryParam);
      std::wstring::wstring(v34, v11);
      winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v35, v34, v37);
      std::wstring::_Tidy_deallocate((__int64)v34);
    }
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly>::GetImpl'::`2'::impl) )
    {
      v12 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v40, BootToCloudModeType);
      std::wstring::wstring((__int64)v33, v12, v40);
      v13 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_bootModeTypeQueryParam);
      std::wstring::wstring(v34, v13);
      winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v35, v34, v33);
      std::wstring::_Tidy_deallocate((__int64)v34);
      std::wstring::_Tidy_deallocate((__int64)v33);
    }
    std::wstring::wstring(v34, L"true");
    v14 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_supportBluetoothSettingsQueryParam);
    std::wstring::wstring(v33, v14);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v35, v33, v34);
    std::wstring::_Tidy_deallocate((__int64)v33);
    std::wstring::_Tidy_deallocate((__int64)v34);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::GetImpl'::`2'::impl) )
    {
      v15 = L"true";
      if ( BootToCloudModeType != 2 )
        v15 = L"false";
      std::wstring::wstring(v39, v15);
      std::wstring::wstring(v34, L"true");
      v16 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_supportSystemSoundSettings);
      std::wstring::wstring(v33, v16);
      winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v35, v33, v34);
      std::wstring::_Tidy_deallocate((__int64)v33);
      std::wstring::_Tidy_deallocate((__int64)v34);
      std::wstring::wstring(v34, L"true");
      v17 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_supportSystemDisplaySettings);
      std::wstring::wstring(v33, v17);
      winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v35, v33, v34);
      std::wstring::_Tidy_deallocate((__int64)v33);
      std::wstring::_Tidy_deallocate((__int64)v34);
      std::wstring::wstring(v34, L"true");
      v18 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_supportSystemSettings);
      std::wstring::wstring(v33, v18);
      winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v35, v33, v34);
      std::wstring::_Tidy_deallocate((__int64)v33);
      std::wstring::_Tidy_deallocate((__int64)v34);
      v19 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_supportSystemAccountSettings);
      std::wstring::wstring(v36, v19);
      winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v35, v36, v39);
      std::wstring::_Tidy_deallocate((__int64)v36);
      std::wstring::_Tidy_deallocate((__int64)v39);
    }
    winrt::Windows::Internal::Shell::implementation::UriBuilder::Uri(v35, a2);
    std::wstring::_Tidy_deallocate((__int64)v35);
    std::wstring::_Tidy_deallocate((__int64)v37);
    return a2;
  }
  if ( a4 )
  {
LABEL_16:
    *(_QWORD *)a2 = 0LL;
    return a2;
  }
  winrt::impl::consume_Windows_Internal_Shell_IRegistrationData<winrt::Windows::Internal::Shell::IRegistrationData>::SystemId(
    a3,
    &v31);
  v32 = winrt::impl::duplicate_hstring(v31, v20, v21);
  winrt::Windows::Internal::Shell::implementation::Utils::CreateCorrelationIdForSwitch(
    (volatile signed __int32 *)&v30,
    (volatile signed __int32 **)&v32);
  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::SetCorrelationId(
    a1,
    (const struct winrt::hstring *)&v31,
    (const struct winrt::hstring *)&v30);
  v22 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_remoteSystemSwitchAPPURI);
  std::wstring::wstring(v39, v22);
  winrt::Windows::Internal::Shell::implementation::UriBuilder::UriBuilder(v35, v39);
  std::wstring::_Tidy_deallocate((__int64)v39);
  v23 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&v31);
  std::wstring::wstring(v33, v23);
  v24 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_remoteDesktopIdQueryParam);
  std::wstring::wstring(v36, v24);
  winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v35, v36, v33);
  std::wstring::_Tidy_deallocate((__int64)v36);
  std::wstring::_Tidy_deallocate((__int64)v33);
  if ( !winrt::operator==((__int64)&v30, (__int64)&LocaleName, v25) )
  {
    v26 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&v30);
    std::wstring::wstring(v33, v26);
    v27 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_correlationIdQueryParam);
    std::wstring::wstring(v36, v27);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v35, v36, v33);
    std::wstring::_Tidy_deallocate((__int64)v36);
    std::wstring::_Tidy_deallocate((__int64)v33);
  }
  std::wstring::wstring(v33, L"false");
  v28 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_supportBluetoothSettingsQueryParam);
  std::wstring::wstring(v36, v28);
  winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v35, v36, v33);
  std::wstring::_Tidy_deallocate((__int64)v36);
  std::wstring::_Tidy_deallocate((__int64)v33);
  winrt::Windows::Internal::Shell::implementation::UriBuilder::Uri(v35, a2);
  std::wstring::_Tidy_deallocate((__int64)v35);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v30);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v31);
  return a2;
}

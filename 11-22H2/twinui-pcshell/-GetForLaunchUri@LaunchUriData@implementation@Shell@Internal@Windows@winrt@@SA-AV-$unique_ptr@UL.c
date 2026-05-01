/*
 * XREFs of ?GetForLaunchUri@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@SA?AV?$unique_ptr@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@AEBUUri@Foundation@56@@Z @ 0x18072B4F0
 * Callers:
 *     ?RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUUri@Foundation@56@_N@Z @ 0x180717244 (-RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Window.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x18004CF30 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1800B5424 (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800DBDB8 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAA_NXZ @ 0x180279EA8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@d_ea_180279EA8.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings@@@details@wil@@QEAA_NXZ @ 0x180279EE8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings@@.c)
 *     ??0LaunchUriData@implementation@Shell@Internal@Windows@winrt@@AEAA@AEBUhstring@5@0AEBW4Mode@CloudPCHelpers@@AEBW4BootModeType@8@AEB_N33333@Z @ 0x180280A74 (--0LaunchUriData@implementation@Shell@Internal@Windows@winrt@@AEAA@AEBUhstring@5@0AEBW4Mode@Clou.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ?attach@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z @ 0x180392150 (-attach@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly@@@details@wil@@QEAA_NXZ @ 0x18040A54C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly@@@det.c)
 *     ?GetFirstValueByName@?$consume_Windows_Foundation_IWwwFormUrlDecoderRuntimeClass@UIWwwFormUrlDecoderRuntimeClass@Foundation@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180467B00 (-GetFirstValueByName@-$consume_Windows_Foundation_IWwwFormUrlDecoderRuntimeClass@UIWwwFormUrlDec.c)
 *     ?QueryParsed@?$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180469F58 (-QueryParsed@-$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@.c)
 *     ?stoi@std@@YAHAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEA_KH@Z @ 0x18051D74C (-stoi@std@@YAHAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@PEA_KH@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@1@@Z @ 0x1806C6E94 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@std@@.c)
 *     ??9?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@@std@@QEBA_NAEBV01@@Z @ 0x1806C75E4 (--9-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@st.c)
 *     ?SchemeName@?$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1806FDC70 (-SchemeName@-$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@w.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings@@@details@wil@@QEAA_NXZ @ 0x18071A804 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ManagedPCSe_ea_18071A804.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$00@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@@2@AEBUhstring@winrt@@@Z @ 0x18072BEC8 (-find@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@U12@U-$less@Uhstring@winrt@@@std@@V-$allocator@U-$.c)
 *     ?to_multimap@implementation@Shell@Internal@Windows@winrt@@YA@AEBUWwwFormUrlDecoder@Foundation@45@@Z @ 0x18072BEEC (-to_multimap@implementation@Shell@Internal@Windows@winrt@@YA@AEBUWwwFormUrlDecoder@Foundation@45.c)
 */

// Hidden C++ exception states: #wind=10
winrt::Windows::Internal::Shell::implementation::LaunchUriData **__fastcall winrt::Windows::Internal::Shell::implementation::LaunchUriData::GetForLaunchUri(
        winrt::Windows::Internal::Shell::implementation::LaunchUriData **a1,
        __int64 *a2)
{
  __int64 *v2; // rsi
  winrt::Windows::Internal::Shell::implementation::LaunchUriData **v3; // r14
  winrt::Windows::Internal::Shell::implementation::LaunchUriData **result; // rax
  _QWORD *v6; // rax
  __int64 v7; // r8
  char v8; // bl
  unsigned int v9; // r8d
  _QWORD *v10; // rax
  __int64 v11; // r8
  char v12; // bl
  __int64 *v13; // rax
  void **FirstValueByName; // rax
  volatile signed __int32 *v15; // rdx
  unsigned int v16; // r8d
  __int64 *v17; // rax
  void **v18; // rax
  volatile signed __int32 *v19; // rdx
  __int64 *v20; // rax
  __int64 v21; // r8
  const struct winrt::Windows::Foundation::WwwFormUrlDecoder *v22; // rax
  unsigned __int16 *v23; // rax
  wchar_t *v24; // rdx
  __int64 v25; // r8
  int v26; // eax
  const char *v27; // r9
  char *v28; // rbx
  __int64 v29; // r8
  __int64 v30; // r8
  __int64 v31; // r8
  __int64 v32; // r8
  __int64 v33; // r8
  const char *v34; // r9
  char *v35; // [rsp+60h] [rbp-A8h] BYREF
  bool v36; // [rsp+68h] [rbp-A0h] BYREF
  bool v37; // [rsp+69h] [rbp-9Fh] BYREF
  bool v38; // [rsp+6Ah] [rbp-9Eh] BYREF
  bool v39; // [rsp+6Bh] [rbp-9Dh] BYREF
  bool v40; // [rsp+6Ch] [rbp-9Ch] BYREF
  bool v41; // [rsp+6Dh] [rbp-9Bh] BYREF
  winrt::Windows::Internal::Shell::implementation::LaunchUriData *v42; // [rsp+70h] [rbp-98h] BYREF
  __int64 *v43; // [rsp+78h] [rbp-90h] BYREF
  void *v44; // [rsp+80h] [rbp-88h] BYREF
  void *v45[2]; // [rsp+88h] [rbp-80h] BYREF
  void *v46; // [rsp+98h] [rbp-70h] BYREF
  winrt::Windows::Internal::Shell::implementation::LaunchUriData **v47; // [rsp+A0h] [rbp-68h]
  int v48; // [rsp+A8h] [rbp-60h] BYREF
  int v49[3]; // [rsp+ACh] [rbp-5Ch] BYREF
  _BYTE pExceptionObject[24]; // [rsp+B8h] [rbp-50h] BYREF
  wchar_t String[16]; // [rsp+D0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]

  v2 = a2;
  v3 = a1;
  v47 = a1;
  v43 = a2;
  winrt::hstring::hstring((winrt::hstring *)&v44, &LocaleName);
  winrt::hstring::hstring((winrt::hstring *)&v46, &LocaleName);
  v48 = 0;
  v41 = 0;
  v40 = 0;
  v39 = 0;
  v38 = 0;
  v37 = 0;
  v36 = 0;
  v42 = 0LL;
  if ( winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))v2, &v42) )
  {
    *v3 = 0LL;
    winrt::hstring::~hstring(&v46);
    winrt::hstring::~hstring(&v44);
    return v3;
  }
  else
  {
    try
    {
      v6 = winrt::impl::consume_Windows_Foundation_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::SchemeName(
             v2,
             &v42);
      v8 = winrt::operator==((__int64)v6, (__int64)&c_remoteSystemProviderUriSchemeForBoot, v7);
      winrt::hstring::~hstring((void **)&v42);
      if ( v8 )
      {
        v49[0] = 1;
        winrt::hstring::operator=((volatile signed __int32 **)&v44, (winrt::impl **)&c_bootSystemId, v9);
      }
      else
      {
        v10 = winrt::impl::consume_Windows_Foundation_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::SchemeName(
                v2,
                &v42);
        v12 = winrt::operator==((__int64)v10, (__int64)&c_remoteSystemProviderUriScheme, v11);
        winrt::hstring::~hstring((void **)&v42);
        if ( !v12 )
        {
          std::exception::exception((std::exception *)pExceptionObject, "Invalid launchUri protocol scheme name!!");
          throw (std::exception *)pExceptionObject;
        }
        v49[0] = 0;
        try
        {
          v13 = winrt::impl::consume_Windows_Foundation_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::QueryParsed(
                  v2,
                  &v35);
          *(_QWORD *)String = c_remoteDesktopIdQueryParam;
          FirstValueByName = (void **)winrt::impl::consume_Windows_Foundation_IWwwFormUrlDecoderRuntimeClass<winrt::Windows::Foundation::IWwwFormUrlDecoderRuntimeClass>::GetFirstValueByName(
                                        v13,
                                        &v42,
                                        String);
          if ( &v44 != FirstValueByName )
          {
            v15 = (volatile signed __int32 *)*FirstValueByName;
            *FirstValueByName = 0LL;
            winrt::handle_type<winrt::impl::hstring_traits>::attach((volatile signed __int32 **)&v44, v15);
          }
          winrt::hstring::~hstring((void **)&v42);
          if ( v35 )
            winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v35);
        }
        catch ( ... )
        {
          winrt::hstring::operator=((volatile signed __int32 **)&v44, (winrt::impl **)&c_hostSystemId, v16);
          v2 = v43;
          v3 = v47;
        }
      }
      try
      {
        v17 = winrt::impl::consume_Windows_Foundation_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::QueryParsed(
                v2,
                &v35);
        *(_QWORD *)String = c_correlationIdQueryParam;
        v18 = (void **)winrt::impl::consume_Windows_Foundation_IWwwFormUrlDecoderRuntimeClass<winrt::Windows::Foundation::IWwwFormUrlDecoderRuntimeClass>::GetFirstValueByName(
                         v17,
                         &v42,
                         String);
        if ( &v46 != v18 )
        {
          v19 = (volatile signed __int32 *)*v18;
          *v18 = 0LL;
          winrt::handle_type<winrt::impl::hstring_traits>::attach((volatile signed __int32 **)&v46, v19);
        }
        winrt::hstring::~hstring((void **)&v42);
        if ( v35 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v35);
      }
      catch ( ... )
      {
        v2 = v43;
        v3 = v47;
      }
      try
      {
        v20 = winrt::impl::consume_Windows_Foundation_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::QueryParsed(
                v2,
                &v35);
        *(_QWORD *)String = c_supportBluetoothSettingsQueryParam;
        winrt::impl::consume_Windows_Foundation_IWwwFormUrlDecoderRuntimeClass<winrt::Windows::Foundation::IWwwFormUrlDecoderRuntimeClass>::GetFirstValueByName(
          v20,
          &v42,
          String);
        if ( v35 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v35);
        v41 = winrt::operator==((__int64)&v42, (__int64)L"true", v21);
        winrt::hstring::~hstring((void **)&v42);
      }
      catch ( ... )
      {
        v2 = v43;
        v3 = v47;
      }
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudPCCommon_v3>::__private_IsEnabled((volatile signed __int32 *)`wil::Feature<__WilFeatureTraits_Feature_CloudPCCommon_v3>::GetImpl'::`2'::impl) )
      {
        v22 = (const struct winrt::Windows::Foundation::WwwFormUrlDecoder *)winrt::impl::consume_Windows_Foundation_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::QueryParsed(
                                                                              v2,
                                                                              &v42);
        winrt::Windows::Internal::Shell::implementation::to_multimap(
          (winrt::Windows::Internal::Shell::implementation *)v45,
          v22);
        if ( v42 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v42);
        if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly>::GetImpl'::`2'::impl) )
        {
          std::_Tree<std::_Tmap_traits<winrt::hstring,winrt::hstring,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>,1>>::find(
            v45,
            &v35,
            &c_bootModeTypeQueryParam);
          v43 = (__int64 *)v45[0];
          if ( std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>>::operator!=(
                 &v35,
                 &v43) )
          {
            try
            {
              v23 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)(v35 + 40));
              std::wstring::wstring(String, v23);
              std::stoi(String, v24, v25);
              v48 = v26;
              std::wstring::_Tidy_deallocate((__int64)String);
            }
            catch ( ... )
            {
              wil::details::in1diag3::Log_CaughtException(
                retaddr,
                (void *)0x83,
                (int)"pcshell\\twinui\\cloudpc\\lib\\launchuridata.cpp",
                v27);
              v3 = v47;
            }
          }
        }
        if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::GetImpl'::`2'::impl) )
        {
          std::_Tree<std::_Tmap_traits<winrt::hstring,winrt::hstring,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>,1>>::find(
            v45,
            &v43,
            &c_supportSystemSoundSettings);
          v28 = (char *)v45[0];
          v35 = (char *)v45[0];
          if ( std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>>::operator!=(
                 &v43,
                 &v35) )
          {
            v40 = winrt::operator==((__int64)(v43 + 5), (__int64)L"true", v29);
            v28 = (char *)v45[0];
          }
          v43 = *(__int64 **)std::_Tree<std::_Tmap_traits<winrt::hstring,winrt::hstring,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>,1>>::find(
                               v45,
                               &v35,
                               &c_supportSystemDisplaySettings);
          v35 = v28;
          if ( std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>>::operator!=(
                 &v43,
                 &v35) )
          {
            v39 = winrt::operator==(v30 + 40, (__int64)L"true", v30);
            v28 = (char *)v45[0];
          }
          v43 = *(__int64 **)std::_Tree<std::_Tmap_traits<winrt::hstring,winrt::hstring,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>,1>>::find(
                               v45,
                               &v35,
                               &c_supportSystemSettings);
          v35 = v28;
          if ( std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>>::operator!=(
                 &v43,
                 &v35) )
          {
            v38 = winrt::operator==(v31 + 40, (__int64)L"true", v31);
            v28 = (char *)v45[0];
          }
          v43 = *(__int64 **)std::_Tree<std::_Tmap_traits<winrt::hstring,winrt::hstring,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>,1>>::find(
                               v45,
                               &v35,
                               &c_supportSystemAccountSettings);
          v35 = v28;
          if ( std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>>::operator!=(
                 &v43,
                 &v35) )
          {
            v37 = winrt::operator==(v32 + 40, (__int64)L"true", v32);
          }
        }
        if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings>::GetImpl'::`2'::impl) )
        {
          std::_Tree<std::_Tmap_traits<winrt::hstring,winrt::hstring,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>,1>>::find(
            v45,
            &v42,
            &c_supportBlendedDisplaySettings);
          v35 = (char *)v45[0];
          if ( std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>>::operator!=(
                 &v42,
                 &v35) )
          {
            v36 = winrt::operator==((__int64)v42 + 40, (__int64)L"true", v33);
          }
        }
        std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,winrt::hstring>,void *>>>(
          (__int64)v45,
          (__int64)v45,
          *((char **)v45[0] + 1));
        std::_Deallocate<16,0>(v45[0], 0x30uLL);
      }
      v42 = (winrt::Windows::Internal::Shell::implementation::LaunchUriData *)operator new(0x20uLL);
      *v3 = winrt::Windows::Internal::Shell::implementation::LaunchUriData::LaunchUriData(
              v42,
              (winrt::impl **)&v44,
              (winrt::impl **)&v46,
              (const enum CloudPCHelpers::Mode *)v49,
              (const enum CloudPCHelpers::BootModeType *)&v48,
              &v41,
              &v40,
              &v39,
              &v38,
              &v37,
              &v36);
      winrt::hstring::~hstring(&v46);
      winrt::hstring::~hstring(&v44);
      result = v3;
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0xB9,
        (int)"pcshell\\twinui\\cloudpc\\lib\\launchuridata.cpp",
        v34);
      *v47 = 0LL;
      winrt::hstring::~hstring(&v46);
      winrt::hstring::~hstring(&v44);
      return v47;
    }
  }
  return result;
}

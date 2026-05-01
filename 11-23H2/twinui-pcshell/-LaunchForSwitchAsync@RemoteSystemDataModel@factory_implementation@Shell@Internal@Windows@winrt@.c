/*
 * XREFs of ?LaunchForSwitchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180714D9C
 * Callers:
 *     ?LaunchForSwitchAsync@?$produce@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemDataModelStatics@3456@@impl@winrt@@UEAAHPEAXPEAPEAX@Z @ 0x180714D10 (-LaunchForSwitchAsync@-$produce@URemoteSystemDataModel@factory_implementation@Shell@Internal@Win.c)
 *     ?LaunchAsync@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180730C20 (-LaunchAsync@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AU-$IAsyn.c)
 * Callees:
 *     ??Hwinrt@@YA?AUhstring@0@PEBGAEBU10@@Z @ 0x180060E5C (--Hwinrt@@YA-AUhstring@0@PEBGAEBU10@@Z.c)
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1800B5424 (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@0@Z @ 0x1800B54E0 (--Hwinrt@@YA-AUhstring@0@AEBU10@0@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAA_NXZ @ 0x180279EA8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@d_ea_180279EA8.c)
 *     ??$call@AEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@?$factory_cache_entry@UUri@Foundation@Windows@winrt@@UIUriRuntimeClassFactory@234@@impl@winrt@@QEAA?A_PAEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@Z @ 0x1803F6FA4 (--$call@AEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@-$factory_cache_entry@UUri@Foundation@Wi.c)
 *     ??R_lambda_0a61d549bec6c444b35123f4c9509ca7_@@QEBA@AEBUIUriRuntimeClassFactory@Foundation@Windows@winrt@@@Z @ 0x1803F9F20 (--R_lambda_0a61d549bec6c444b35123f4c9509ca7_@@QEBA@AEBUIUriRuntimeClassFactory@Foundation@Window.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@PEBG@Z @ 0x180466940 (--Hwinrt@@YA-AUhstring@0@AEBU10@PEBG@Z.c)
 *     ?CreateCorrelationIdForSwitch@Utils@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@U76@@Z @ 0x18070FBE4 (-CreateCorrelationIdForSwitch@Utils@implementation@Shell@Internal@Windows@winrt@@SA-AUhstring@6@.c)
 *     ?GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AUUri@Foundation@56@AEBURemoteDesktopProviderInfo@3456@W4Mode@CloudPCHelpers@@@Z @ 0x180712008 (-GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AU.c)
 *     ?LaunchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@UUri@856@@Z @ 0x180714454 (-LaunchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AU-.c)
 *     ?SetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@0@Z @ 0x1807187BC (-SetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEA.c)
 *     ?SystemId@?$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1807192A8 (-SystemId@-$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Internal@W.c)
 */

// Hidden C++ exception states: #wind=36
__int64 __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::LaunchForSwitchAsync(
        winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *this,
        __int64 a2,
        __int64 *a3)
{
  volatile signed __int32 *v6; // rbx
  struct winrt::impl::hstring_header *v7; // rdx
  unsigned int v8; // r8d
  __int64 v9; // r8
  __int64 *v10; // rax
  struct winrt::impl::shared_hstring_header **v11; // rax
  __int64 v12; // rbx
  struct winrt::impl::shared_hstring_header **v13; // rax
  __int64 *v14; // rax
  struct winrt::impl::shared_hstring_header **v15; // rax
  __int64 v16; // rax
  void (__fastcall ***v17)(_QWORD, __int64 *, __int64 *); // rcx
  __int16 v18; // bx
  __int64 *v19; // rax
  struct winrt::impl::shared_hstring_header **v20; // r12
  __int64 v21; // r8
  __int64 *v22; // rax
  struct winrt::impl::shared_hstring_header **v23; // rax
  __int64 v24; // r15
  __int16 v25; // bx
  struct winrt::impl::shared_hstring_header **v26; // rax
  __int64 *v27; // rax
  struct winrt::impl::shared_hstring_header **v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  void (__fastcall ***v31)(_QWORD, __int64 *, __int64 *); // rcx
  __int16 v32; // bx
  volatile signed __int32 *v33; // rbx
  __int16 v35; // [rsp+20h] [rbp-E0h]
  volatile signed __int32 *v36; // [rsp+28h] [rbp-D8h] BYREF
  winrt::impl *v37; // [rsp+30h] [rbp-D0h] BYREF
  struct winrt::impl::hstring_header *v38; // [rsp+38h] [rbp-C8h] BYREF
  volatile signed __int32 *v39; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v40; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v41; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v42; // [rsp+58h] [rbp-A8h] BYREF
  volatile signed __int32 *v43; // [rsp+60h] [rbp-A0h] BYREF
  struct winrt::impl::shared_hstring_header *v44; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v45; // [rsp+70h] [rbp-90h] BYREF
  struct winrt::impl::shared_hstring_header *v46; // [rsp+78h] [rbp-88h] BYREF
  volatile signed __int32 *v47; // [rsp+80h] [rbp-80h] BYREF
  volatile signed __int32 *v48; // [rsp+88h] [rbp-78h] BYREF
  struct winrt::impl::shared_hstring_header *v49; // [rsp+90h] [rbp-70h] BYREF
  volatile signed __int32 *v50; // [rsp+98h] [rbp-68h] BYREF
  volatile signed __int32 *v51; // [rsp+A0h] [rbp-60h] BYREF
  volatile signed __int32 *v52; // [rsp+A8h] [rbp-58h] BYREF
  volatile signed __int32 *v53; // [rsp+B0h] [rbp-50h] BYREF
  struct winrt::impl::shared_hstring_header *v54; // [rsp+B8h] [rbp-48h] BYREF
  volatile signed __int32 *v55; // [rsp+C0h] [rbp-40h] BYREF
  struct winrt::impl::shared_hstring_header *v56; // [rsp+C8h] [rbp-38h] BYREF
  volatile signed __int32 *v57; // [rsp+D0h] [rbp-30h] BYREF
  volatile signed __int32 *v58; // [rsp+D8h] [rbp-28h] BYREF
  struct winrt::impl::shared_hstring_header *v59; // [rsp+E0h] [rbp-20h] BYREF
  volatile signed __int32 *v60; // [rsp+E8h] [rbp-18h] BYREF
  struct winrt::impl::shared_hstring_header *v61; // [rsp+F0h] [rbp-10h] BYREF
  volatile signed __int32 *v62[3]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v63; // [rsp+110h] [rbp+10h] BYREF
  __int64 v64; // [rsp+130h] [rbp+30h] BYREF
  volatile signed __int32 *v65; // [rsp+198h] [rbp+98h] BYREF

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudPCCommon_v3>::__private_IsEnabled((volatile signed __int32 *)`wil::Feature<__WilFeatureTraits_Feature_CloudPCCommon_v3>::GetImpl'::`2'::impl) )
  {
    winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::GetLaunchUri(
      this,
      (volatile signed __int32 *)&v38,
      (__int64)a3,
      0);
    v6 = (volatile signed __int32 *)v38;
    v36 = (volatile signed __int32 *)v38;
    winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v36);
    winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::LaunchAsync(
      (__int64)this,
      a2,
      a3,
      (winrt::Windows::Foundation::IUnknown *)&v36);
    if ( v6 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v38);
  }
  else
  {
    winrt::impl::consume_Windows_Internal_Shell_IRegistrationData<winrt::Windows::Internal::Shell::IRegistrationData>::SystemId(
      a3,
      &v37);
    v38 = winrt::impl::duplicate_hstring(v37, v7, v8);
    winrt::Windows::Internal::Shell::implementation::Utils::CreateCorrelationIdForSwitch(
      (volatile signed __int32 *)&v65,
      (volatile signed __int32 **)&v38);
    winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::SetCorrelationId(
      this,
      (const struct winrt::hstring *)&v37,
      (const struct winrt::hstring *)&v65);
    if ( winrt::operator==((__int64)&v65, (__int64)&LocaleName, v9) )
    {
      v12 = (__int64)winrt::hstring::hstring((winrt::hstring *)&v47, &LocaleName);
      v35 = 16;
    }
    else
    {
      v10 = (__int64 *)winrt::operator+((__int64)&v50, (__int64)L"&", (__int64)&c_correlationIdQueryParam);
      v11 = winrt::operator+(&v49, v10, (__int64)L"=");
      v12 = winrt::operator+((__int64)&v48, (__int64)v11, (__int64)&v65);
      v35 = 14;
    }
    v13 = winrt::operator+(&v46, (__int64 *)&c_remoteSystemSwitchAPPURI, (__int64)L"?");
    v14 = (__int64 *)winrt::operator+((__int64)&v45, (__int64)v13, (__int64)&c_remoteDesktopIdQueryParam);
    v15 = winrt::operator+(&v44, v14, (__int64)L"=");
    v16 = winrt::operator+((__int64)&v43, (__int64)v15, (__int64)&v37);
    v63 = *(_QWORD *)winrt::operator+((__int64)&v42, v16, v12);
    v40 = &v63;
    v62[2] = (volatile signed __int32 *)&qword_180990828;
    _InterlockedIncrement64(&qword_180990828);
    v18 = v35 | 0x200;
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory> )
    {
      _lambda_0a61d549bec6c444b35123f4c9509ca7_::operator()(
        &v40,
        &v39,
        &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory>);
      _InterlockedDecrement64(&qword_180990828);
    }
    else
    {
      _InterlockedDecrement64(&qword_180990828);
      winrt::impl::factory_cache_entry<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory>::call<_lambda_0a61d549bec6c444b35123f4c9509ca7_ &>(
        v17,
        &v39,
        &v40);
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v42);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v43);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v44);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v45);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v46);
    if ( (v35 & 0x10) != 0 )
    {
      v18 = v35 & 0xFDEF | 0x200;
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v47);
    }
    if ( (v18 & 8) != 0 )
    {
      v18 &= ~8u;
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v48);
    }
    if ( (v18 & 4) != 0 )
    {
      v18 &= ~4u;
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v49);
    }
    if ( (v18 & 2) != 0 )
    {
      v18 &= ~2u;
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v50);
    }
    v19 = (__int64 *)winrt::operator+((__int64)v62, (__int64)L"&", (__int64)&c_supportBluetoothSettingsQueryParam);
    v20 = winrt::operator+(&v61, v19, (__int64)L"=false");
    if ( winrt::operator==((__int64)&v65, (__int64)&LocaleName, v21) )
    {
      v24 = (__int64)winrt::hstring::hstring((winrt::hstring *)&v57, &LocaleName);
      v25 = v18 | 0x100;
    }
    else
    {
      v22 = (__int64 *)winrt::operator+((__int64)&v60, (__int64)L"&", (__int64)&c_correlationIdQueryParam);
      v23 = winrt::operator+(&v59, v22, (__int64)L"=");
      v24 = winrt::operator+((__int64)&v58, (__int64)v23, (__int64)&v65);
      v25 = v18 | 0xE0;
    }
    v26 = winrt::operator+(&v56, (__int64 *)&c_remoteSystemSwitchAPPURI, (__int64)L"?");
    v27 = (__int64 *)winrt::operator+((__int64)&v55, (__int64)v26, (__int64)&c_remoteDesktopIdQueryParam);
    v28 = winrt::operator+(&v54, v27, (__int64)L"=");
    v29 = winrt::operator+((__int64)&v53, (__int64)v28, (__int64)&v37);
    v30 = winrt::operator+((__int64)&v52, v29, v24);
    v64 = *(_QWORD *)winrt::operator+((__int64)&v51, v30, (__int64)v20);
    v41 = &v64;
    v62[1] = (volatile signed __int32 *)&qword_180990828;
    _InterlockedIncrement64(&qword_180990828);
    v32 = v25 | 0x400;
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory> )
    {
      _lambda_0a61d549bec6c444b35123f4c9509ca7_::operator()(
        &v41,
        &v36,
        &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory>);
      _InterlockedDecrement64(&qword_180990828);
    }
    else
    {
      _InterlockedDecrement64(&qword_180990828);
      winrt::impl::factory_cache_entry<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory>::call<_lambda_0a61d549bec6c444b35123f4c9509ca7_ &>(
        v31,
        &v36,
        &v41);
    }
    winrt::Windows::Foundation::IUnknown::operator=(
      (winrt::Windows::Foundation::IUnknown *)&v39,
      (winrt::Windows::Foundation::IUnknown *)&v36);
    if ( v36 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v36);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v51);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v52);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v53);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v54);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v55);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v56);
    if ( (v32 & 0x100) != 0 )
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v57);
    if ( (v32 & 0x80u) != 0 )
    {
      LOBYTE(v32) = v32 & 0x7F;
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v58);
    }
    if ( (v32 & 0x40) != 0 )
    {
      LOBYTE(v32) = v32 & 0xBF;
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v59);
    }
    if ( (v32 & 0x20) != 0 )
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v60);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v61);
    winrt::handle_type<winrt::impl::hstring_traits>::close(v62);
    v33 = v39;
    v36 = v39;
    winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v36);
    winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::LaunchAsync(
      (__int64)this,
      a2,
      a3,
      (winrt::Windows::Foundation::IUnknown *)&v36);
    if ( v33 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v39);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v65);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v37);
  }
  return a2;
}

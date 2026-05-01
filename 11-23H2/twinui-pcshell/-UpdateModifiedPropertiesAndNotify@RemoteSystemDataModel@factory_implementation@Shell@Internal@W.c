/*
 * XREFs of ?UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowId@UI@56@AEBURemoteSystem@RemoteSystemData@@_N@Z @ 0x180719DA8
 * Callers:
 *     ?RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@AEBV?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@Z @ 0x180717EE4 (-RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Int.c)
 *     ?UpdateDataForWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x180719C80 (-UpdateDataForWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x1800404E8 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?start@?$test_common_data@$00@details@tip@@QEAA?AU_GUID@@XZ @ 0x180098400 (-start@-$test_common_data@$00@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Frontline@@@details@wil@@QEAA_NXZ @ 0x180115AF0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Frontline@@@details@wi.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$?RURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@URemoteSystemStateChangedEventArgs@2345@@?$event@U?$EventHandler@URemoteSystemStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@1@AEBURemoteSystemStateChangedEventArgs@4561@@Z @ 0x1807094BC (--$-RURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@URemoteSystemSt.c)
 *     ??$?RURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@URemoteSystemTimeOutInfoChangedEventArgs@2345@@?$event@U?$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@1@AEBURemoteSystemTimeOutInfoChangedEventArgs@4561@@Z @ 0x180709590 (--$-RURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@URemoteSystemTi.c)
 *     ??$?RURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@URemoteSystemWindowAddedEventArgs@2345@@?$event@U?$EventHandler@URemoteSystemWindowAddedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@1@AEBURemoteSystemWindowAddedEventArgs@4561@@Z @ 0x180709664 (--$-RURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@URemoteSystemWi.c)
 *     ??$make@URemoteSystemStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@AEBW4CloudPCState@3456@@winrt@@YA?A_PAEBUhstring@0@AEBW4CloudPCState@Shell@Internal@Windows@0@@Z @ 0x18070C4C4 (--$make@URemoteSystemStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUhstr.c)
 *     ??$make@URemoteSystemStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@W4CloudPCState@3456@@winrt@@YA?A_PAEBUhstring@0@$$QEAW4CloudPCState@Shell@Internal@Windows@0@@Z @ 0x18070C58C (--$make@URemoteSystemStateChangedEventArgs@implementation@Shell@Internal@Windows@wi_ea_18070C58C.c)
 *     ??$make@URemoteSystemTimeOutInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@winrt@@YA?A_PAEBUhstring@0@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x18070C654 (--$make@URemoteSystemTimeOutInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AE.c)
 *     ??$make@URemoteSystemWindowAddedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@AEBUWindowId@UI@56@@winrt@@YA?A_PAEBUhstring@0@AEBUWindowId@UI@Windows@0@@Z @ 0x18070C71C (--$make@URemoteSystemWindowAddedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUhstri.c)
 *     ?CreateData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AURemoteSystem@3456@AEBU7RemoteSystemData@@@Z @ 0x18070FE84 (-CreateData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AURe.c)
 *     ?Lookup@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@Uhstring@5@URemoteSystem@Shell@Internal@45@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180715858 (-Lookup@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@Uhstring@winrt@@URemoteSystem@Shel.c)
 *     ?State@?$consume_Windows_Internal_Shell_IRemoteSystemStateChangedEventArgs@UIRemoteSystemStateChangedEventArgs@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180718DB4 (-State@-$consume_Windows_Internal_Shell_IRemoteSystemStateChangedEventArgs@UIRemoteSystemStateCh.c)
 *     ?ensure_data@?$tip_test@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@@details@tip@@@std@@XZ @ 0x18071B200 (-ensure_data@-$tip_test@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@@tip@@AEBAAEAV-$shared_p.c)
 *     ?AddWindow@RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x180729464 (-AddWindow@RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z.c)
 *     ?HasWindow@RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUWindowId@UI@56@@Z @ 0x180729A90 (-HasWindow@RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUWindowId@UI@56@@Z.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::UpdateModifiedPropertiesAndNotify(
        RTL_SRWLOCK *this,
        const struct winrt::Windows::UI::WindowId *a2,
        winrt::impl **a3,
        char a4)
{
  char v7; // r15
  winrt::impl *v8; // r13
  unsigned int v9; // r14d
  signed int v10; // eax
  __int64 v11; // rcx
  char v12; // r14
  std::_Ref_count_base *v13; // rbx
  winrt::Windows::Internal::Shell::implementation::RemoteSystem *v14; // rcx
  signed int v15; // eax
  unsigned __int16 v16; // r13
  winrt::Windows::Internal::Shell::implementation::RemoteSystem *v17; // rbx
  signed int v18; // eax
  signed int v19; // eax
  int v20; // eax
  _QWORD *v21; // rax
  __int16 v22; // di
  _QWORD *v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  bool v26; // [rsp+38h] [rbp-39h]
  unsigned __int16 v27; // [rsp+3Ah] [rbp-37h]
  char v28; // [rsp+3Ch] [rbp-35h] BYREF
  char v29; // [rsp+3Dh] [rbp-34h]
  std::_Ref_count_base *v30[2]; // [rsp+40h] [rbp-31h] BYREF
  winrt::impl *v31; // [rsp+50h] [rbp-21h] BYREF
  unsigned int v32; // [rsp+58h] [rbp-19h] BYREF
  __int128 v33; // [rsp+60h] [rbp-11h] BYREF
  winrt::impl *v34; // [rsp+70h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  LPVOID ppv; // [rsp+D8h] [rbp+67h] BYREF
  const struct RemoteSystemData::RemoteSystem *v37; // [rsp+E8h] [rbp+77h] BYREF
  char v38; // [rsp+F0h] [rbp+7Fh]

  v38 = a4;
  v37 = (const struct RemoteSystemData::RemoteSystem *)a3;
  v26 = 0;
  LOBYTE(ppv) = 0;
  v29 = 0;
  v7 = 0;
  v8 = winrt::impl::duplicate_hstring(*a3, a2, (unsigned int)a3);
  v31 = v8;
  v9 = *((_DWORD *)a3 + 2);
  v32 = v9;
  v27 = *((_WORD *)a3 + 12);
  AcquireSRWLockExclusive(this + 16);
  *(_QWORD *)&v33 = this + 16;
  v28 = 0;
  v10 = (*(__int64 (__fastcall **)(PVOID, winrt::impl *, char *))(*(_QWORD *)this[18].Ptr + 64LL))(
          this[18].Ptr,
          v8,
          &v28);
  if ( v10 < 0 )
    winrt::throw_hresult(v10);
  if ( v28 )
  {
    v34 = v8;
    winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>::Lookup(
      &this[18].Ptr,
      v30,
      &v34);
    v17 = (std::_Ref_count_base *)((char *)v30[0] - 16);
    if ( !v30[0] )
      v17 = 0LL;
    if ( !winrt::Windows::Internal::Shell::implementation::RemoteSystem::HasWindow(v17, a2) )
    {
      winrt::Windows::Internal::Shell::implementation::RemoteSystem::AddWindow(v17, a2);
      LOBYTE(ppv) = 1;
    }
    if ( v9 != 100
      && v9 != (unsigned int)winrt::impl::consume_Windows_Internal_Shell_IRemoteSystemStateChangedEventArgs<winrt::Windows::Internal::Shell::IRemoteSystemStateChangedEventArgs>::State((__int64 *)v30) )
    {
      v18 = (*(__int64 (__fastcall **)(std::_Ref_count_base *, _QWORD))(*(_QWORD *)v30[0] + 64LL))(v30[0], v9);
      if ( v18 < 0 )
        winrt::throw_hresult(v18);
      v26 = 1;
    }
    if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Frontline>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Frontline>::GetImpl'::`2'::impl)
      || HIDWORD(this[5].Ptr) )
    {
      v16 = v27;
    }
    else
    {
      v16 = v27;
      if ( v27 != 0xFFFF )
      {
        v19 = (*(__int64 (__fastcall **)(std::_Ref_count_base *, __int64))(*(_QWORD *)v30[0] + 80LL))(
                v30[0],
                600000000LL * v27);
        if ( v19 < 0 )
          winrt::throw_hresult(v19);
        v7 = 1;
      }
    }
    if ( v30[0] )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v30);
    v12 = (char)ppv;
  }
  else
  {
    v26 = v9 != 100;
    v12 = 1;
    winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::CreateData(v11, v30, (__int64)v37);
    v13 = v30[0];
    if ( v30[0] )
      v14 = (std::_Ref_count_base *)((char *)v30[0] - 16);
    else
      v14 = 0LL;
    winrt::Windows::Internal::Shell::implementation::RemoteSystem::AddWindow(v14, a2);
    LOBYTE(ppv) = 0;
    v15 = (*(__int64 (__fastcall **)(PVOID, winrt::impl *, std::_Ref_count_base *, LPVOID *))(*(_QWORD *)this[18].Ptr
                                                                                            + 80LL))(
            this[18].Ptr,
            v8,
            v13,
            &ppv);
    if ( v15 < 0 )
      winrt::throw_hresult(v15);
    v29 = 1;
    v16 = v27;
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Frontline>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Frontline>::GetImpl'::`2'::impl)
      && !HIDWORD(this[5].Ptr)
      && v27 != 0xFFFF )
    {
      v7 = 1;
    }
    if ( v13 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v30);
  }
  if ( this != (RTL_SRWLOCK *)-128LL )
    ReleaseSRWLockExclusive(this + 16);
  if ( v38 )
  {
    if ( v29 )
    {
      LODWORD(ppv) = 99;
      winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs,winrt::hstring const &,enum winrt::Windows::Internal::Shell::CloudPCState>(
        v30,
        &v31,
        &ppv);
      winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemStateChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Internal::Shell::RemoteSystemStateChangedEventArgs>(
        this + 20,
        (__int64)this,
        (__int64)v30);
      if ( v30[0] )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v30);
    }
  }
  if ( v12 )
  {
    ppv = 0LL;
    if ( CoCreateInstance(&CLSID_TaskbarList, 0LL, 1u, &GUID_ea1afb91_9e28_4b86_90e9_9e9f8a5eefaf, &ppv) >= 0
      && (*(int (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 24LL))(ppv) >= 0 )
    {
      v20 = (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)ppv + 96LL))(ppv, *(_QWORD *)a2);
      if ( v20 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x230,
          (int)"pcshell\\twinui\\cloudpc\\lib\\remotesystemdatamodel.cpp",
          (const char *)(unsigned int)v20);
    }
    winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteSystemWindowAddedEventArgs,winrt::hstring const &,winrt::Windows::UI::WindowId const &>(
      v30,
      &v31,
      a2);
    winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs>>::operator()<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs>(
      this + 23,
      (__int64)this,
      (__int64)v30);
    if ( v30[0] )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v30);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppv);
  }
  if ( v26 )
  {
    winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs,winrt::hstring const &,enum winrt::Windows::Internal::Shell::CloudPCState const &>(
      &ppv,
      &v31,
      &v32);
    winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemStateChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Internal::Shell::RemoteSystemStateChangedEventArgs>(
      this + 20,
      (__int64)this,
      (__int64)&ppv);
    if ( ppv )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&ppv);
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Frontline>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Frontline>::GetImpl'::`2'::impl)
    && !HIDWORD(this[5].Ptr)
    && v7 )
  {
    *(_OWORD *)v30 = 0LL;
    v21 = (_QWORD *)tip::tip_test<_tip_UpdateTransitionScreenTimeOutInfoTipTest>::ensure_data(v30);
    tip::details::test_common_data<1>::start(*v21 + 8LL, &v33);
    v22 = *((_WORD *)v37 + 12);
    v23 = (_QWORD *)tip::tip_test<_tip_UpdateTransitionScreenTimeOutInfoTipTest>::ensure_data(v30);
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      &v33,
      v23);
    v24 = v33;
    tip::details::test_common_data<1>::begin_update(v33 + 8);
    v25 = v24 + 184;
    if ( !v24 )
      v25 = 8LL;
    *(_WORD *)v25 = v22;
    if ( v24 )
    {
      tip::details::test_common_data<1>::end_update(v24 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v33);
    }
    if ( *((_QWORD *)&v33 + 1) )
      std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v33 + 1));
    ppv = (LPVOID)(600000000LL * v16);
    winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteSystemTimeOutInfoChangedEventArgs,winrt::hstring const &,std::chrono::duration<__int64,std::ratio<1,10000000>> const &>(
      &v37,
      &v31,
      &ppv);
    winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs>(
      (__int64)&this[29],
      (__int64)this,
      (__int64)&v37);
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v37);
    if ( v30[1] )
      std::_Ref_count_base::_Decref(v30[1]);
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v31);
}

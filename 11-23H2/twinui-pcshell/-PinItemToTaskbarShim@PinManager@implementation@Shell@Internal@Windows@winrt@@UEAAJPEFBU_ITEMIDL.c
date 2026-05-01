/*
 * XREFs of ?PinItemToTaskbarShim@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x1806A4550
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcessHandleForClientOfObject@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@1@PEAUIUnknown@@K@Z @ 0x180084BFC (-GetProcessHandleForClientOfObject@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$handle_null_onl.c)
 *     _anonymous_namespace_::IsTrustedWindowsPinProcess @ 0x180085ECC (_anonymous_namespace_--IsTrustedWindowsPinProcess.c)
 *     ?start_and_watch_errors@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@2@XZ @ 0x180086128 (-start_and_watch_errors@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U1.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180086364 (-ensure_data@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180086894 (-reset@-$com_ptr_t@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@.c)
 *     ?Release@?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@AEAAKXZ @ 0x1800868B8 (-Release@-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@AEAAKXZ.c)
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180086920 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x180086D28 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??B?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop3@@Uimmersive_shell_component@6@@winrt@@QEBA?AUIInspectable@Foundation@Windows@1@XZ @ 0x18024F998 (--B-$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInte.c)
 *     ?PinItemToTaskbarShimAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@PEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@VPinManagerPinItemToTaskbarShim@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x180251250 (-PinItemToTaskbarShimAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AUfire_a.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PinManagerRemoveShim@@@details@wil@@QEAA_NXZ @ 0x1802530EC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PinManagerRemoveShim@@@.c)
 *     ??0?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18069DD64 (--0-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0I.c)
 *     ??0?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18069DEEC (--0-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflect_ea_18069DEEC.c)
 *     ??0?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA@AEBV01@@Z @ 0x18069E038 (--0-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip.c)
 *     ??1PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAA@XZ @ 0x18069ECF8 (--1PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAA@XZ.c)
 *     _anonymous_namespace_::PinShellItem @ 0x1806A49CC (_anonymous_namespace_--PinShellItem.c)
 *     ?SetStopResult@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXJPEAJ@Z @ 0x1806A569C (-SetStopResult@-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflecto.c)
 *     ?StartActivity@PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAAXXZ @ 0x1806A5978 (-StartActivity@PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAAXXZ.c)
 *     ?Stop@PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAAXPEBG00W4PinManagerRequestPinItemResult@2@@Z @ 0x1806A60F8 (-Stop@PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAAXPEBG00W4PinManagerRequestPinItemR.c)
 *     ?TryGetProcessImageName@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@Z @ 0x1806A7C78 (-TryGetProcessImageName@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAX@.c)
 *     _anonymous_namespace_::TryGetProcessPublisher @ 0x1806A7E18 (_anonymous_namespace_--TryGetProcessPublisher.c)
 */

// Hidden C++ exception states: #wind=8 #try_helpers=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShim(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  volatile signed __int32 *v6; // rdi
  __int64 v7; // rdx
  volatile signed __int32 *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rdx
  volatile signed __int32 *v11; // rdi
  __int64 v12; // rdx
  unsigned int v13; // esi
  _QWORD *ProcessPublisher; // rax
  _QWORD *v15; // rdi
  _QWORD *ProcessImageName; // rax
  _QWORD *v17; // rbx
  __int64 *v18; // rbx
  _BYTE v20[8]; // [rsp+40h] [rbp-388h] BYREF
  LPVOID v21; // [rsp+48h] [rbp-380h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-378h] BYREF
  LPVOID v23; // [rsp+58h] [rbp-370h] BYREF
  __int64 v24; // [rsp+60h] [rbp-368h] BYREF
  void *v25; // [rsp+68h] [rbp-360h] BYREF
  _QWORD v26[4]; // [rsp+70h] [rbp-358h] BYREF
  int v27; // [rsp+90h] [rbp-338h]
  __int64 v28; // [rsp+98h] [rbp-330h]
  __int64 v29; // [rsp+A0h] [rbp-328h]
  _BYTE v30[32]; // [rsp+A8h] [rbp-320h] BYREF
  _QWORD v31[40]; // [rsp+C8h] [rbp-300h] BYREF
  LPVOID v32; // [rsp+208h] [rbp-1C0h] BYREF
  HANDLE hObject; // [rsp+210h] [rbp-1B8h] BYREF
  _OWORD v34[2]; // [rsp+218h] [rbp-1B0h] BYREF
  __int128 v35; // [rsp+238h] [rbp-190h]
  LPVOID v36; // [rsp+248h] [rbp-180h]
  _QWORD v37[40]; // [rsp+250h] [rbp-178h] BYREF

  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_PinManagerRemoveShim>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Servicing_PinManagerRemoveShim>::GetImpl'::`2'::impl) )
  {
    v32 = 0LL;
    v6 = (volatile signed __int32 *)*tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::ensure_data(&v32);
    pv = (LPVOID)v6;
    if ( v6 )
      _InterlockedIncrement(v6 + 332);
    tip2::details::shared_data<0,0,1>::begin_update((__int64)(v6 + 2));
    *((_DWORD *)v6 + 66) = 2;
    tip2::details::shared_data<0,0,0>::end_update((__int64)(v6 + 2), v7);
    wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::reset(&pv);
    if ( pv )
      tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::Release((volatile signed __int32 *)pv);
    v8 = (volatile signed __int32 *)*tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::ensure_data(&v32);
    v23 = (LPVOID)v8;
    if ( v8 )
      _InterlockedIncrement(v8 + 332);
    tip2::details::shared_data<0,0,1>::begin_update((__int64)(v8 + 2));
    *((_DWORD *)v8 + 329) = a3;
    tip2::details::shared_data<0,0,0>::end_update((__int64)(v8 + 2), v9);
    wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::reset(&v23);
    if ( v23 )
      tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::Release((volatile signed __int32 *)v23);
    memset(v34, 0, sizeof(v34));
    v35 = 0LL;
    v36 = 0LL;
    tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::start_and_watch_errors(
      (__int64 *)&v32,
      (struct wil::details::IFailureCallback *)v34);
    memset_0(v37, 0, sizeof(v37));
    wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v37,
      (__int64)"PinManagerPinItemToTaskbarShim");
    v37[0] = &PinManagerTelemetry::PinManagerPinItemToTaskbarShim::`vftable';
    PinManagerTelemetry::PinManagerPinItemToTaskbarShim::StartActivity((PinManagerTelemetry::PinManagerPinItemToTaskbarShim *)v37);
    hObject = 0LL;
    v10 = *(_QWORD *)winrt::implements<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::Windows::Internal::Shell::PinManager,IPinManagerInterop3,winrt::immersive_shell_component>::operator winrt::Windows::Foundation::IInspectable(
                       a1,
                       (winrt *)&v24);
    wil::GetProcessHandleForClientOfObject(&hObject, v10);
    if ( v24 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v24);
    if ( anonymous_namespace_::IsTrustedWindowsPinProcess((__int64)hObject, (__int64)&v32) )
    {
      v11 = (volatile signed __int32 *)*tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::ensure_data(&v32);
      v21 = (LPVOID)v11;
      if ( v11 )
        _InterlockedIncrement(v11 + 332);
      tip2::details::shared_data<0,0,1>::begin_update((__int64)(v11 + 2));
      *((_DWORD *)v11 + 327) = 1;
      tip2::details::shared_data<0,0,0>::end_update((__int64)(v11 + 2), v12);
      wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::reset(&v21);
      if ( v21 )
        tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::Release((volatile signed __int32 *)v21);
      v13 = anonymous_namespace_::PinShellItem(a2, a3, &v32);
      ProcessPublisher = (_QWORD *)anonymous_namespace_::TryGetProcessPublisher(v26);
      v15 = ProcessPublisher;
      if ( ProcessPublisher[3] >= 8uLL )
        v15 = (_QWORD *)*ProcessPublisher;
      ProcessImageName = (_QWORD *)TryGetProcessImageName(v30, hObject);
      v17 = ProcessImageName;
      if ( ProcessImageName[3] >= 8uLL )
        v17 = (_QWORD *)*ProcessImageName;
      wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v37,
        v13);
      PinManagerTelemetry::PinManagerPinItemToTaskbarShim::Stop(v37, &LocaleName, v17, v15, 0);
      std::wstring::_Tidy_deallocate((__int64)v30);
      std::wstring::_Tidy_deallocate((__int64)v26);
    }
    else
    {
      v26[0] = &tip2::test_watcher<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::`vftable';
      v26[1] = 0LL;
      v26[2] = v26;
      v26[3] = 0LL;
      v27 = 0;
      v28 = 0LL;
      v29 = 0LL;
      v18 = (__int64 *)tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(
                         &v25,
                         &v32);
      wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
        (__int64)v31,
        (__int64)v37);
      v31[0] = &PinManagerTelemetry::PinManagerPinItemToTaskbarShim::`vftable';
      winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync(
        a1,
        v20,
        a2,
        a3,
        (PinManagerTelemetry::PinManagerPinItemToTaskbarShim *)v31,
        v18,
        (__int64)v26);
    }
    if ( hObject )
      CloseHandle(hObject);
    PinManagerTelemetry::PinManagerPinItemToTaskbarShim::~PinManagerPinItemToTaskbarShim((PinManagerTelemetry::PinManagerPinItemToTaskbarShim *)v37);
    if ( v36 )
      tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::Release((volatile signed __int32 *)v36);
    if ( (_DWORD)v35 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)((char *)v34 + 8));
    if ( v32 )
      tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::Release((volatile signed __int32 *)v32);
  }
  return 0LL;
}

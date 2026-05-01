/*
 * XREFs of ?DelayInitialize@TouchEdgeGestureManager@@QEAAXXZ @ 0x1800DBDF8
 * Callers:
 *     ?perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ @ 0x180173280 (-perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@std@@IEAAXXZ @ 0x1800875EC (-_Tidy@-$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@w.c)
 *     ?Initialize@TouchEdgeGestureProcessor@@QEAAXPEAUIImmersiveMonitorManager@@AEBV?$function@$$A6A_NXZ@std@@@Z @ 0x1800A29D8 (-Initialize@TouchEdgeGestureProcessor@@QEAAXPEAUIImmersiveMonitorManager@@AEBV-$function@$$A6A_N.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?WatchCurrentThread@TouchEdgeGestureTelemetry@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1800BA038 (-WatchCurrentThread@TouchEdgeGestureTelemetry@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$get_weak@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@IEAA?AU?$weak_ref@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1800DC048 (--$get_weak@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@-$root_implements@.c)
 *     ?InputGestureStarted@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UShellViewGestureReportedArgs@2345@@Foundation@Windows@3@@Z @ 0x1800DC0BC (-InputGestureStarted@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoordinator@.c)
 *     ??$make_event_revoker@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@U?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@5@PEBU?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@75@@impl@winrt@@YA?AU?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@01@PEBU?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@01@Uevent_token@1@@Z @ 0x1800DC168 (--$make_event_revoker@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@U-$event_revoker@UIShellV.c)
 *     ??1?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAA@XZ @ 0x1800DC23C (--1-$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UIShellView.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18016CF38 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ @ 0x180182FBC (-unconditional_release_ref@-$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ.c)
 *     winrt::make_self_TouchEdgeGripperHost__lambda_e16a4bade3739a0d698c6031a316e206___lambda_a4da1f0f89255fbad3a15aa44999bedc___ @ 0x1801830DC (winrt--make_self_TouchEdgeGripperHost__lambda_e16a4bade3739a0d698c6031a316e206___lambda_a4da1f0f.c)
 *     ?_Reallocate_exactly@?$vector@U?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@V?$allocator@U?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@@std@@@std@@AEAAX_K@Z @ 0x1801A90D0 (-_Reallocate_exactly@-$vector@U-$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@U?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@@?$vector@U?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@V?$allocator@U?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@@std@@@std@@QEAAPEAU?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAU234@$$QEAU234@@Z @ 0x18064C754 (--$_Emplace_reallocate@U-$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8t.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall TouchEdgeGestureManager::DelayInitialize(TouchEdgeGestureManager *this)
{
  TouchEdgeGestureManager *self_TouchEdgeGripperHost__lambda_e16a4bade3739a0d698c6031a316e206___lambda_a4da1f0f89255fbad3a15aa44999bedc; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  __int64 **v7; // rdi
  __int64 *i; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // [rsp+28h] [rbp-E0h] BYREF
  __int64 *v16; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v17; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C8h]
  __int64 v19; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v20[2]; // [rsp+50h] [rbp-B8h] BYREF
  TouchEdgeGestureManager *v21; // [rsp+60h] [rbp-A8h] BYREF
  TouchEdgeGestureManager *v22; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v23[8]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v24[32]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v25[24]; // [rsp+98h] [rbp-70h] BYREF
  int v26; // [rsp+B0h] [rbp-58h]
  _QWORD v27[8]; // [rsp+C8h] [rbp-40h] BYREF

  TouchEdgeGestureTelemetry::WatchCurrentThread(
    (wil::ActivityThreadWatcher *)v24,
    "TouchEdgeGestureManager::DelayInitialize");
  v21 = this;
  v22 = this;
  self_TouchEdgeGripperHost__lambda_e16a4bade3739a0d698c6031a316e206___lambda_a4da1f0f89255fbad3a15aa44999bedc = (TouchEdgeGestureManager *)winrt::make_self_TouchEdgeGripperHost__lambda_e16a4bade3739a0d698c6031a316e206___lambda_a4da1f0f89255fbad3a15aa44999bedc___(&v19, &v22, &v21);
  v3 = (_QWORD *)((char *)this + 88);
  if ( (TouchEdgeGestureManager *)((char *)this + 88) != self_TouchEdgeGripperHost__lambda_e16a4bade3739a0d698c6031a316e206___lambda_a4da1f0f89255fbad3a15aa44999bedc )
  {
    if ( *v3 )
      winrt::com_ptr<TouchEdgeGripperHost>::unconditional_release_ref((char *)this + 88);
    v4 = *(_QWORD *)self_TouchEdgeGripperHost__lambda_e16a4bade3739a0d698c6031a316e206___lambda_a4da1f0f89255fbad3a15aa44999bedc;
    *(_QWORD *)self_TouchEdgeGripperHost__lambda_e16a4bade3739a0d698c6031a316e206___lambda_a4da1f0f89255fbad3a15aa44999bedc = 0LL;
    *v3 = v4;
  }
  if ( v19 )
    winrt::com_ptr<TouchEdgeGripperHost>::unconditional_release_ref(&v19);
  v27[0] = off_1807CEF08;
  v27[1] = this;
  v27[7] = v27;
  TouchEdgeGestureProcessor::Initialize((__int64)this + 96, *((_QWORD *)this + 7), (__int64)v27);
  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
    (__int64)v27,
    v5);
  v6 = *((_QWORD *)this + 46);
  if ( v6 > (__int64)(*((_QWORD *)this + 54) - *((_QWORD *)this + 52)) >> 4 )
  {
    if ( v6 > 0xFFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    __Reallocate_exactly___vector_U__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__V__allocator_U__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt___std___std__AEAAX_K_Z((char *)this + 416);
  }
  v7 = (__int64 **)*((_QWORD *)this + 45);
  for ( i = *v7; i != (__int64 *)v7; i = (__int64 *)*i )
  {
    winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::get_weak<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>(
      (char *)this + 24,
      &v15);
    v9 = v15;
    v15 = 0LL;
    v17 = v9;
    LODWORD(v18) = *((_DWORD *)i + 4);
    v16 = &v17;
    v10 = operator new(0x20uLL);
    v11 = v17;
    v17 = 0LL;
    v10[1] = v11;
    *((_DWORD *)v10 + 4) = v18;
    _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
    *((_DWORD *)v10 + 6) = 1;
    *v10 = off_1807A1F28;
    v16 = v10;
    if ( v17 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v17);
    v12 = (_QWORD *)winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator3<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::InputGestureStarted(
                      i + 3,
                      v23,
                      &v16);
    ___make_event_revoker_UShellViewCoordinator_Shell_UI_WindowsUdk_winrt__U__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_5_PEBU__consume_WindowsUdk_UI_Shell_IShellViewCoordinator3_UShellViewCoordinator_Shell_UI_WindowsUdk_winrt___75__impl_winrt__YA_AU__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_01_PEBU__consume_WindowsUdk_UI_Shell_IShellViewCoordinator3_UShellViewCoordinator_Shell_UI_WindowsUdk_winrt___01_Uevent_token_1__Z(
      v20,
      i + 3,
      *v12);
    v13 = (_QWORD *)*((_QWORD *)this + 53);
    if ( v13 == *((_QWORD **)this + 54) )
    {
      ____Emplace_reallocate_U__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt_____vector_U__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__V__allocator_U__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt___std___std__QEAAPEAU__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAU234___QEAU234__Z(
        (char *)this + 416,
        v13,
        v20);
    }
    else
    {
      v14 = v20[0];
      v20[0] = 0LL;
      *v13 = v14;
      v13[1] = v20[1];
      *((_QWORD *)this + 53) += 16LL;
    }
    __1__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAA_XZ(v20);
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
    if ( v15 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v15);
  }
  if ( v26 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v25);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v24);
}

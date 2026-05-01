/*
 * XREFs of ?HandleConnectionStateChange@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180731E90
 * Callers:
 *     <none>
 * Callees:
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x1800404E8 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??B?$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ @ 0x1806006B8 (--B-$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ.c)
 *     ?SystemId@?$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1807192A8 (-SystemId@-$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Internal@W.c)
 *     ?Get@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$com_ptr@UIVirtualDesktop@@@6@AEBUhstring@6@@Z @ 0x18072FE68 (-Get@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$com_ptr@UIVir.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@@tip@@YA?A_PXZ @ 0x180731318 (--$open_and_watch_errors@V-$tip_test@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@@tip@@YA-A_.c)
 *     ?HandleConnectionStateChange@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180736060 (-HandleConnectionStateChange@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::HandleConnectionStateChange(
        __int64 a1,
        LPVOID **a2,
        unsigned int a3)
{
  LPVOID v6; // rbx
  __int64 v7; // rbx
  void **v8; // rax
  _WORD *v9; // r15
  __int64 v10; // rsi
  unsigned __int64 v11; // r8
  __int64 v12; // rcx
  LPVOID pv; // [rsp+20h] [rbp-69h] BYREF
  __int64 v14; // [rsp+28h] [rbp-61h] BYREF
  volatile signed __int32 *v15; // [rsp+30h] [rbp-59h] BYREF
  __int64 v16; // [rsp+38h] [rbp-51h] BYREF
  std::_Ref_count_base *v17; // [rsp+40h] [rbp-49h]
  _BYTE v18[8]; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v19[24]; // [rsp+58h] [rbp-31h] BYREF
  int v20; // [rsp+70h] [rbp-19h]
  __int64 v21; // [rsp+80h] [rbp-9h] BYREF
  std::_Ref_count_base *v22; // [rsp+88h] [rbp-1h]
  IID rclsid; // [rsp+90h] [rbp+7h] BYREF

  if ( *(_QWORD *)(a1 + 152) )
  {
    tip::open_and_watch_errors<tip::tip_test<_tip_RemoteSessionOnStateChangedTipTest>>((__int64)v18);
    if ( tip::test_watcher<_tip_RemoteSessionOnStateChangedTipTest>::operator bool((__int64)v18) )
    {
      pv = **a2;
      v6 = pv;
      winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&pv);
      winrt::impl::consume_Windows_Internal_Shell_IRegistrationData<winrt::Windows::Internal::Shell::IRegistrationData>::SystemId(
        (__int64 *)&pv,
        &v15);
      if ( v6 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&pv);
      winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::Get(
        *(PSRWLOCK *)(a1 + 136),
        &v14,
        (__int64 *)&v15);
      v7 = v14;
      if ( v14 && (*(int (__fastcall **)(__int64, IID *))(*(_QWORD *)v14 + 32LL))(v14, &rclsid) >= 0 )
      {
        pv = 0LL;
        v8 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&pv);
        if ( StringFromCLSID(&rclsid, (LPOLESTR *)v8) >= 0 )
        {
          v9 = pv;
          std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
            &v16,
            &v21);
          v10 = v16;
          tip::details::test_common_data<1>::begin_update(v16 + 8);
          v11 = -1LL;
          do
            ++v11;
          while ( v9[v11] );
          v12 = v10 + 216;
          if ( !v10 )
            v12 = 40LL;
          std::wstring::assign((char *)v12, v9, v11);
          if ( v10 )
          {
            tip::details::test_common_data<1>::end_update(v10 + 8);
            std::shared_ptr<PeoplePaneViewInfo>::reset(&v16);
          }
          if ( v17 )
            std::_Ref_count_base::_Decref(v17);
        }
        if ( pv )
          CoTaskMemFree(pv);
      }
      if ( v7 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v14);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v15);
    }
    if ( v22 )
      std::_Ref_count_base::_Decref(v22);
    if ( v20 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v19);
    winrt::Windows::Internal::Shell::implementation::ConnectionHandler::HandleConnectionStateChange(a1, a2, a3);
  }
}

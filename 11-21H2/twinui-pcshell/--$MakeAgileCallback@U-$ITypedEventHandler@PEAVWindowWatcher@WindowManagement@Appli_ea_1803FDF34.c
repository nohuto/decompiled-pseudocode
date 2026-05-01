/*
 * XREFs of ??$MakeAgileCallback@U?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@AEBQEAVUwpWindowManagerBridge@@P84@EAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@3@PEAUIInspectable@@@_E@wil@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@AEBQEAVUwpWindowManagerBridge@@$$QEAP84@EAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@_E@Z @ 0x1803FDF34
 * Callers:
 *     _lambda_524ccb934e25246a0120727c88ebe67d_::operator() @ 0x18040076C (_lambda_524ccb934e25246a0120727c88ebe67d_--operator().c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVWindowChangedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18014EB10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$I_ea_18014EB10.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802EBA5C (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Make@U?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_29e6abf6590bd0340660135221b2dd0d_@@$0?0PEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIWindowWatcher@2345@@Internal@Foundation@Windows@@PEAUIInspectable@@@Foundation@Windows@@EAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@3@PEAUIInspectable@@@Z@Details@WRL@Microsoft@@V_lambda_29e6abf6590bd0340660135221b2dd0d_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_29e6abf6590bd0340660135221b2dd0d_@@$0?0PEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIWindowWatcher@2345@@Internal@Foundation@Windows@@PEAUIInspectable@@@Foundation@Windows@@EAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@3@PEAUIInspectable@@@Z@Details@WRL@Microsoft@@@12@$$QEAV_lambda_29e6abf6590bd0340660135221b2dd0d_@@@Z @ 0x1803FD680 (--$Make@U-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsof_ea_1803FD680.c)
 */

// Hidden C++ exception states: #wind=1
volatile signed __int32 **__fastcall ___MakeAgileCallback_U__ITypedEventHandler_PEAVWindowWatcher_WindowManagement_ApplicationModel_Internal_Windows__PEAUIInspectable___Foundation_Windows__AEBQEAVUwpWindowManagerBridge__P84_EAAJPEAUIWindowWatcher_WindowManagement_ApplicationModel_Internal_3_PEAUIInspectable____E_wil__YA_AV__ComPtr_U__ITypedEventHandler_PEAVWindowWatcher_WindowManagement_ApplicationModel_Internal_Windows__PEAUIInspectable___Foundation_Windows___WRL_Microsoft__AEBQEAVUwpWindowManagerBridge____QEAP84_EAAJPEAUIWindowWatcher_WindowManagement_ApplicationModel_Internal_Windows__PEAUIInspectable____E_Z(
        volatile signed __int32 **a1,
        __int64 *a2,
        __int128 *a3)
{
  volatile signed __int32 **v4; // rax
  const char *v5; // r9
  volatile signed __int32 *v6; // rcx
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  volatile signed __int32 *v11; // [rsp+58h] [rbp+10h] BYREF

  v8 = *a2;
  v9 = *a3;
  v4 = Microsoft::WRL::Details::Make<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher *,Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *>,IInspectable *>::*)(Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *,IInspectable *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher *,IInspectable *>,Microsoft::WRL::FtmBase>,_lambda_29e6abf6590bd0340660135221b2dd0d_,-1,Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *,IInspectable *>,_lambda_29e6abf6590bd0340660135221b2dd0d_>(
         &v11,
         (__int64)&v8);
  *a1 = *v4;
  *v4 = 0LL;
  v6 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher *,Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs *>,Microsoft::WRL::FtmBase>>::Release(v6);
  }
  if ( !*a1 )
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0x4E,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v5);
  return a1;
}

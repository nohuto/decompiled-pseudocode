/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@AEAV_lambda_19c1d202f72b0b42264fbf5bd807c7dc_@@$0?0PEAUIInspectable@@PEAU5@@?$DelegateArgTraits@P8?$IEventHandler_impl@PEAUIInspectable@@@Foundation@Windows@@EAAJPEAUIInspectable@@0@Z@Details@WRL@Microsoft@@UEAAJPEAUIInspectable@@0@Z @ 0x180160D90
 * Callers:
 *     <none>
 * Callees:
 *     ??$DoInvoke@V_lambda_26e7c45e3546dfe70bac8262412ba5b5_@@@?$EventSource@U?$ITypedEventHandler@PEAVCompositionCapabilities@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_26e7c45e3546dfe70bac8262412ba5b5_@@@Z @ 0x1801607DC (--$DoInvoke@V_lambda_26e7c45e3546dfe70bac8262412ba5b5_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::IEventHandler_impl<IInspectable *>::*)(IInspectable *,IInspectable *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::FtmBase>,_lambda_19c1d202f72b0b42264fbf5bd807c7dc_ &,-1,IInspectable *,IInspectable *>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r8
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  v6 = a2;
  v3 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)&v5 = &v7;
  v6 = 0LL;
  v7 = (v3 + 72) & -(__int64)(v3 != 0);
  *((_QWORD *)&v5 + 1) = &v6;
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionCapabilities *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_26e7c45e3546dfe70bac8262412ba5b5_>(
    v3 + 48,
    &v5);
  return 0LL;
}

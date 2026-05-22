/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIDispatcherQueueHandler@System@Windows@@VFtmBase@23@@WRL@Microsoft@@AEAV_lambda_45408fcd3a1e321ae85b6197296025bf_@@$0?0$$V@?$DelegateArgTraits@P8IDispatcherQueueHandler@System@Windows@@EAAJXZ@Details@WRL@Microsoft@@UEAAJXZ @ 0x180160F10
 * Callers:
 *     <none>
 * Callees:
 *     ??$DoInvoke@V_lambda_b9c6a9526e98e8096438348dee47a029_@@@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_b9c6a9526e98e8096438348dee47a029_@@@Z @ 0x180160884 (--$DoInvoke@V_lambda_b9c6a9526e98e8096438348dee47a029_@@@-$EventSource@U-$IEventHandler@PEAUIIns.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::System::IDispatcherQueueHandler::*)(void)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::System::IDispatcherQueueHandler,Microsoft::WRL::FtmBase>,_lambda_45408fcd3a1e321ae85b6197296025bf_ &,-1,>::Invoke(
        __int64 a1)
{
  __int64 v1; // rcx
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  v4 = 0LL;
  *(_QWORD *)&v3 = &v4;
  *((_QWORD *)&v3 + 1) = &v5;
  Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_b9c6a9526e98e8096438348dee47a029_>(
    v1,
    &v3);
  return 0LL;
}

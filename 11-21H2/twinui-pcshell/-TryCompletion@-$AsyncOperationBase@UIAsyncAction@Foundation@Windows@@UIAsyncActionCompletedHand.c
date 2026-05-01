/*
 * XREFs of ?TryCompletion@?$AsyncOperationBase@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@$1?c_gammaFlashAsyncOperationName@@3QBGB@@QEAAJJ@Z @ 0x18033AD4C
 * Callers:
 *     ??0?$AsyncOperationBase@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@$1?c_gammaFlashAsyncOperationName@@3QBGB@@QEAA@XZ @ 0x18032A97C (--0-$AsyncOperationBase@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@$1-c_.c)
 *     ?MemberThreadWorker@?$AsyncOperationBase@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@$1?c_gammaFlashAsyncOperationName@@3QBGB@@IEAAXXZ @ 0x180334BB8 (-MemberThreadWorker@-$AsyncOperationBase@UIAsyncAction@Foundation@Windows@@UIAsyncActionComplete.c)
 *     ?OnStart@?$AsyncOperationBase@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@$1?c_gammaFlashAsyncOperationName@@3QBGB@@UEAAJXZ @ 0x180335A50 (-OnStart@-$AsyncOperationBase@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TransitionToState@?$AsyncBase@U?$IAsyncOperationCompletedHandler@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@AEAA_NW4AsyncStatusInternal@Details@23@@Z @ 0x18033AC3C (-TransitionToState@-$AsyncBase@U-$IAsyncOperationCompletedHandler@W4AppRequestHandledResult@View.c)
 *     ?TryTransitionToError@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?c_gammaFlashAsyncOperationName@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAA_NJW4CancelTransitionPolicy@23@PEAX@Z @ 0x18033ADE0 (-TryTransitionToError@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details.c)
 */

__int64 __fastcall AsyncOperationBase<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,&unsigned short const near * const c_gammaFlashAsyncOperationName>::TryCompletion(
        __int64 a1,
        int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx
  char v5; // al

  v2 = a1 + 16;
  v4 = a1 + 16;
  if ( a2 < 0 )
    v5 = Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const c_gammaFlashAsyncOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TryTransitionToError(v4);
  else
    v5 = Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TransitionToState(
           v4,
           1);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, 0LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 128LL))(v2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return 0LL;
}

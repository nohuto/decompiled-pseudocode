/*
 * XREFs of ?OnClose@?$AsyncOperation@U?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@23@VCHSTRINGResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAXXZ @ 0x1800396C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Close@CHSTRINGResult@Internal@Windows@@QEAAXXZ @ 0x180030354 (-Close@CHSTRINGResult@Internal@Windows@@QEAAXXZ.c)
 */

void __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<HSTRING__ *>,Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING__ *>,Windows::Internal::CHSTRINGResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::OnClose(
        __int64 a1)
{
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 260)) == 1 )
    Windows::Internal::CHSTRINGResult::Close((RTL_SRWLOCK *)(a1 + 272));
}

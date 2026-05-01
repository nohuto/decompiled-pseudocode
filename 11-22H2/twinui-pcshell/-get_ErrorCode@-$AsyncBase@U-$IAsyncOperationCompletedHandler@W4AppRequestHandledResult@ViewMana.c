/*
 * XREFs of ?get_ErrorCode@?$AsyncBase@U?$IAsyncOperationCompletedHandler@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJPEAJ@Z @ 0x1804EE0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckValidStateForAsyncInfoCall@?$AsyncBase@U?$IAsyncOperationCompletedHandler@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@AEAAJXZ @ 0x1803FAD70 (-CheckValidStateForAsyncInfoCall@-$AsyncBase@U-$IAsyncOperationCompletedHandler@W4AppRequestHand.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::get_ErrorCode(
        __int64 a1,
        volatile signed __int32 *a2)
{
  int v4; // edi
  signed __int32 v5; // r8d
  __int64 v6; // rcx
  signed __int32 v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::CheckValidStateForAsyncInfoCall(a1);
  if ( v4 < 0 )
  {
    *a2 = v4;
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 48);
    v8 = -2;
    _InterlockedCompareExchange(&v8, v5, -2);
    if ( v8 == 3 )
    {
      _InterlockedCompareExchange(a2, *(_DWORD *)(a1 + 52), *a2);
      v6 = *(_QWORD *)(a1 + 40);
      if ( v6 )
        SetRestrictedErrorInfo(v6);
    }
    else
    {
      *a2 = 0;
    }
  }
  return (unsigned int)v4;
}

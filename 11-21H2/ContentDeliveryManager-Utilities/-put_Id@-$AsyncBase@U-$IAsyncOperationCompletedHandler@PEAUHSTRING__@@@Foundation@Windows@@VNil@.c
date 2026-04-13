/*
 * XREFs of ?put_Id@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJI@Z @ 0x18004AC90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING__ *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::put_Id(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4)
{
  signed __int32 v5; // ecx
  signed __int32 v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+24h] [rbp-24h] BYREF
  wchar_t v8; // [rsp+28h] [rbp-20h]

  if ( a2 )
  {
    *(_DWORD *)(a1 + 56) = a2;
    v5 = *(_DWORD *)(a1 + 48);
    v6 = -2;
    _InterlockedCompareExchange(&v6, v5, -2);
    if ( v6 == -1 )
    {
      return 0LL;
    }
    else
    {
      RoOriginateError(2147483662LL, 0LL, a3, a4);
      return 2147483662LL;
    }
  }
  else
  {
    v7 = *(_DWORD *)L"id";
    v8 = aId_0[2];
    RoOriginateErrorW(2147942487LL, 2LL, &v7);
    return 2147942487LL;
  }
}

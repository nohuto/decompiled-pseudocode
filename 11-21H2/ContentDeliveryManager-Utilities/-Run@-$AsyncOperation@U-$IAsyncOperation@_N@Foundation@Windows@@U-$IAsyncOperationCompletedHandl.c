/*
 * XREFs of ?Run@?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAXXZ @ 0x1800B7180
 * Callers:
 *     <none>
 * Callees:
 *     ?_Run@?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXW4AsyncStage@23@J@Z @ 0x1800B7FC0 (-_Run@-$AsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationCompletedHand.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Internal::CBasicResult<unsigned char,0>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::Run(
        __int64 a1)
{
  signed __int32 v1; // edx
  signed __int32 v3; // ecx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned __int32 v7; // [rsp+30h] [rbp+10h] BYREF
  signed __int32 v8; // [rsp+38h] [rbp+18h] BYREF
  signed __int32 v9; // [rsp+40h] [rbp+20h] BYREF

  v7 = 0;
  v1 = *(_DWORD *)(a1 - 144);
  v8 = -2;
  _InterlockedCompareExchange(&v8, v1, -2);
  if ( v8 )
  {
    v3 = *(_DWORD *)(a1 - 144);
    v9 = -2;
    _InterlockedCompareExchange(&v9, v3, -2);
    if ( v9 != 3 )
      goto LABEL_6;
    _InterlockedCompareExchange((volatile signed __int32 *)&v7, *(_DWORD *)(a1 - 140), v7);
    v4 = *(_QWORD *)(a1 - 152);
    if ( v4 )
      SetRestrictedErrorInfo(v4);
    v5 = v7;
    if ( (v7 & 0x80000000) == 0 )
    {
LABEL_6:
      v5 = 2147943623LL;
      v7 = -2147023673;
    }
  }
  else
  {
    v5 = v7;
  }
  return Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Internal::CBasicResult<unsigned char,0>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::_Run(
           a1 - 200,
           1LL,
           v5);
}

/*
 * XREFs of ?GetResults@?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAE@Z @ 0x1800B5770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Internal::CBasicResult<unsigned char,0>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::GetResults(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // r8
  signed __int32 v7; // ecx
  int v8; // ebx
  __int64 v9; // rcx
  signed __int32 v11; // [rsp+40h] [rbp+20h] BYREF
  signed __int32 v12; // [rsp+48h] [rbp+28h] BYREF
  signed __int32 v13; // [rsp+50h] [rbp+30h] BYREF

  *a2 = 0;
  v5 = *(unsigned int *)(a1 - 120);
  v12 = -2;
  _InterlockedCompareExchange(&v12, v5, -2);
  if ( v12 != 3 )
  {
    if ( v12 != 1 )
    {
      v8 = -2147483634;
      RoOriginateError(2147483662LL, 0LL, v5, a4);
      return (unsigned int)v8;
    }
    goto LABEL_8;
  }
  v7 = *(_DWORD *)(a1 - 120);
  v13 = -2;
  _InterlockedCompareExchange(&v13, v7, -2);
  if ( v13 == 3 )
  {
    _InterlockedCompareExchange(&v11, *(_DWORD *)(a1 - 116), v11);
    v9 = *(_QWORD *)(a1 - 128);
    if ( v9 )
      SetRestrictedErrorInfo(v9);
    v8 = v11;
  }
  else
  {
    v8 = 0;
  }
  if ( v8 >= 0 )
  {
LABEL_8:
    v8 = 0;
    *a2 = *(_BYTE *)(a1 + 120);
  }
  return (unsigned int)v8;
}

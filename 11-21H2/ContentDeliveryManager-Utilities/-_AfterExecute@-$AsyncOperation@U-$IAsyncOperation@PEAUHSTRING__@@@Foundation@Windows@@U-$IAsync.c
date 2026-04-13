/*
 * XREFs of ?_AfterExecute@?$AsyncOperation@U?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@23@VCHSTRINGResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXJ@Z @ 0x180047910
 * Callers:
 *     ?Complete@?$AsyncOperation@U?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@23@VCHSTRINGResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAXJ@Z @ 0x180030C40 (-Complete@-$AsyncOperation@U-$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U-$IAsyncOpera.c)
 *     ?_Run@?$AsyncOperation@U?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@23@VCHSTRINGResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXW4AsyncStage@23@J@Z @ 0x180048070 (-_Run@-$AsyncOperation@U-$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U-$IAsyncOperation.c)
 * Callees:
 *     ?TryTransitionToError@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?EnableLockScreenRotationOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAA_NJW4CancelTransitionPolicy@23@PEAX@Z @ 0x1800469DC (-TryTransitionToError@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details.c)
 *     ?_AfterComplete@?$AsyncOperation@U?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@23@VCHSTRINGResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXXZ @ 0x1800476D0 (-_AfterComplete@-$AsyncOperation@U-$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U-$IAsyn.c)
 */

char __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<HSTRING__ *>,Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING__ *>,Windows::Internal::CHSTRINGResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::_AfterExecute(
        volatile signed __int32 *a1,
        signed __int32 a2,
        signed __int32 a3)
{
  bool v5; // di
  signed __int32 v6; // edx
  signed __int32 v7; // eax
  signed __int32 v8; // ecx
  signed __int32 v10; // [rsp+30h] [rbp+8h] BYREF
  signed __int32 v11; // [rsp+38h] [rbp+10h] BYREF

  v5 = _InterlockedExchangeAdd(a1 + 63, 0xFFFFFFFF) == 1;
  if ( _InterlockedIncrement(a1 + 61) == 1 )
    v5 = _InterlockedExchangeAdd(a1 + 63, 0xFFFFFFFF) == 1;
  if ( a2 >= 0 )
  {
    v8 = *((_DWORD *)a1 + 14);
    v11 = -2;
    _InterlockedCompareExchange(&v11, v8, -2);
    if ( v11 || (v7 = _InterlockedCompareExchange(a1 + 14, 1, 0), v7 != v11) )
      LOBYTE(v7) = _InterlockedCompareExchange(a1 + 14, 1, 2);
  }
  else
  {
    v6 = *((_DWORD *)a1 + 14);
    v10 = -2;
    LOBYTE(v7) = _InterlockedCompareExchange(&v10, v6, -2);
    if ( v10 != 2 )
      LOBYTE(v7) = Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableLockScreenRotationOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TryTransitionToError(
                     (__int64)(a1 + 2),
                     a2,
                     a3);
  }
  if ( v5 )
    LOBYTE(v7) = Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<HSTRING__ *>,Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING__ *>,Windows::Internal::CHSTRINGResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::_AfterComplete((__int64)a1);
  return v7;
}

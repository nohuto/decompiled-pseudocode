/*
 * XREFs of ?OnClose@?$AsyncOperation@U?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@23@VCHSTRINGResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAXXZ @ 0x18003B690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<HSTRING__ *>,Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING__ *>,Windows::Internal::CHSTRINGResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::OnClose(
        __int64 a1)
{
  HRESULT result; // eax
  RTL_SRWLOCK *v3; // rdi
  HSTRING v4; // rbx

  result = _InterlockedIncrement((volatile signed __int32 *)(a1 + 260));
  if ( result == 1 )
  {
    v3 = (RTL_SRWLOCK *)(a1 + 296);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 296));
    WindowsDeleteString(0LL);
    v4 = *(HSTRING *)(a1 + 288);
    *(_QWORD *)(a1 + 288) = 0LL;
    ReleaseSRWLockExclusive(v3);
    return WindowsDeleteString(v4);
  }
  return result;
}

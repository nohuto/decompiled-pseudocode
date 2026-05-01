/*
 * XREFs of ?GetContextAndNotifyFailure@details@wil@@YGXPAUFailureInfo@2@PADI@Z @ 0x10003C30
 * Callers:
 *     <none>
 * Callees:
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QAEXABUFailureInfo@3@@Z @ 0x1000392D (-SetLastError@ThreadLocalData@details_abi@wil@@QAEXABUFailureInfo@3@@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YGPAUThreadLocalData@12@_N@Z @ 0x100039FA (-GetThreadLocalDataCache@details_abi@wil@@YGPAUThreadLocalData@12@_N@Z.c)
 *     ?GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SGXPAUFailureInfo@3@PADI@Z @ 0x10003B4D (-GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SGXPAUFailureInfo@3@PADI@Z.c)
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 */

void __stdcall wil::details::GetContextAndNotifyFailure(
        wil::details *this,
        struct wil::FailureInfo *a2,
        struct wil::FailureInfo *a3,
        unsigned int a4)
{
  DWORD CurrentThreadId; // eax
  wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // eax
  char *v6; // [esp+0h] [ebp-10h]
  unsigned int v7; // [esp+4h] [ebp-Ch]

  wil::details::ThreadFailureCallbackHolder::GetContextAndNotifyFailure(a2, (int)this, a3, v6, v7);
  CurrentThreadId = GetCurrentThreadId();
  if ( `wil::SetLastError'::`2'::lastThread != CurrentThreadId )
  {
    if ( _InterlockedIncrement(&`wil::SetLastError'::`5'::depth) < 4 )
    {
      `wil::SetLastError'::`2'::lastThread = CurrentThreadId;
      ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache();
      if ( ThreadLocalDataCache )
        wil::details_abi::ThreadLocalData::SetLastError(ThreadLocalDataCache, this);
      `wil::SetLastError'::`2'::lastThread = 0;
    }
    _InterlockedDecrement(&`wil::SetLastError'::`5'::depth);
  }
}

/*
 * XREFs of ?GetLocal@?$ThreadLocalStorage@PAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QAEPAPAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x10003EA0
 * Callers:
 *     ?GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SGXPAUFailureInfo@3@PADI@Z @ 0x10003B4D (-GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SGXPAUFailureInfo@3@PADI@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 */

_DWORD *__stdcall wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(int a1)
{
  int v1; // esi
  DWORD CurrentThreadId; // ecx
  _DWORD *result; // eax

  v1 = wil::details::g_pThreadFailureCallbacks;
  CurrentThreadId = GetCurrentThreadId();
  for ( result = *(_DWORD **)(v1 + 4 * (CurrentThreadId % 0xA)); result; result = (_DWORD *)result[1] )
  {
    if ( *result == CurrentThreadId )
    {
      result += 2;
      return result;
    }
  }
  return result;
}

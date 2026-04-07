/*
 * XREFs of ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180016DA4
 * Callers:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180016D44 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SAXPEAUFailureInfo@3@PEAD_K@Z @ 0x18009B760 (-GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SAXPEAUFailureInfo@3@PEAD_K.c)
 * Callees:
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x180016A14 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 */

signed __int64 __fastcall wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
        __int64 a1,
        char a2)
{
  __int64 v3; // rdi
  DWORD CurrentThreadId; // esi
  unsigned __int64 v5; // rbx
  __int64 i; // rax
  _QWORD *v8; // rax
  signed __int64 v9; // rcx
  signed __int64 v10; // rax

  v3 = wil::details::g_pThreadFailureCallbacks;
  CurrentThreadId = GetCurrentThreadId();
  v5 = CurrentThreadId % 0xAuLL;
  for ( i = *(_QWORD *)(v3 + 8 * v5); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)i == CurrentThreadId )
      return i + 16;
  }
  if ( !a2 )
    return 0LL;
  v8 = wil::details::ProcessHeapAlloc(0, 0x18uLL);
  v9 = (signed __int64)v8;
  if ( !v8 )
    return 0LL;
  *(_DWORD *)v8 = CurrentThreadId;
  v8[1] = 0LL;
  v8[2] = 0LL;
  do
  {
    v10 = *(_QWORD *)(v3 + 8 * v5);
    *(_QWORD *)(v9 + 8) = v10;
  }
  while ( v10 != _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 8 * v5), v9, v10) );
  return v9 + 16;
}

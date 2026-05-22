/*
 * XREFs of ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x18007C160
 * Callers:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C3078 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 * Callees:
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x1800308D4 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 */

signed __int64 __fastcall wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
        __int64 a1,
        char a2)
{
  __int64 v3; // rdi
  DWORD CurrentThreadId; // esi
  unsigned __int64 v5; // rbx
  __int64 i; // rax
  _QWORD *v7; // rax
  signed __int64 v8; // rcx
  signed __int64 v9; // rax

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
  v7 = wil::details::ProcessHeapAlloc(0, 0x18uLL);
  v8 = (signed __int64)v7;
  if ( !v7 )
    return 0LL;
  *(_DWORD *)v7 = CurrentThreadId;
  v7[1] = 0LL;
  v7[2] = 0LL;
  _m_prefetchw((const void *)(v3 + 8 * v5));
  do
  {
    v9 = *(_QWORD *)(v3 + 8 * v5);
    *(_QWORD *)(v8 + 8) = v9;
  }
  while ( v9 != _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 8 * v5), v8, v9) );
  return v8 + 16;
}

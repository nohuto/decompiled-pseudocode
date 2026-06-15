/*
 * XREFs of ?GetLocal@?$ThreadLocalStorage@UThreadLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAUThreadLocalData@23@_N@Z @ 0x18005A964
 * Callers:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x18005A8FC (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 * Callees:
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x180025CB4 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 */

signed __int64 __fastcall wil::details_abi::ThreadLocalStorage<wil::details_abi::ThreadLocalData>::GetLocal(
        __int64 a1,
        char a2)
{
  DWORD CurrentThreadId; // esi
  unsigned __int64 v5; // rbx
  __int64 i; // rax
  _QWORD *v7; // rax
  signed __int64 v8; // rcx
  signed __int64 v9; // rax

  CurrentThreadId = GetCurrentThreadId();
  v5 = CurrentThreadId % 0xAuLL;
  for ( i = *(_QWORD *)(a1 + 8 * v5); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)i == CurrentThreadId )
      return i + 16;
  }
  if ( !a2 )
    return 0LL;
  v7 = wil::details::ProcessHeapAlloc(0, 0x38uLL);
  v8 = (signed __int64)v7;
  if ( !v7 )
    return 0LL;
  *(_DWORD *)v7 = CurrentThreadId;
  v7[1] = 0LL;
  *((_WORD *)v7 + 8) = 40;
  *((_DWORD *)v7 + 5) = 0;
  v7[3] = 0LL;
  *((_DWORD *)v7 + 8) = 0;
  v7[5] = 0LL;
  *((_DWORD *)v7 + 12) = 0;
  _m_prefetchw((const void *)(a1 + 8 * v5));
  do
  {
    v9 = *(_QWORD *)(a1 + 8 * v5);
    *(_QWORD *)(v8 + 8) = v9;
  }
  while ( v9 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v5), v8, v9) );
  return v8 + 16;
}

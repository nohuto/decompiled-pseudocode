/*
 * XREFs of ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180036B74
 * Callers:
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x18002B3B8 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?SetLastError@wil@@YAXAEBUFailureInfo@1@@Z @ 0x18004053C (-SetLastError@wil@@YAXAEBUFailureInfo@1@@Z.c)
 * Callees:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18002F484 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?GetLocal@?$ThreadLocalStorage@UThreadLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAUThreadLocalData@23@_N@Z @ 0x1800353FC (-GetLocal@-$ThreadLocalStorage@UThreadLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAUThrea.c)
 */

// Hidden C++ exception states: #wind=1
struct wil::details_abi::ThreadLocalData *__fastcall wil::details_abi::GetThreadLocalDataCache(wil::details_abi *this)
{
  char v1; // si
  signed __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rbx
  signed __int64 Local; // rax
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = (char)this;
  v2 = 0LL;
  v3 = wil::details_abi::g_pProcessLocalData;
  if ( wil::details_abi::g_pProcessLocalData )
  {
    if ( !*(_QWORD *)(wil::details_abi::g_pProcessLocalData + 8) )
    {
      v7 = 0LL;
      if ( (int)wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(
                  *(_QWORD *)wil::details_abi::g_pProcessLocalData,
                  &v7) >= 0
        && !*(_QWORD *)(v3 + 8) )
      {
        *(_QWORD *)(v3 + 8) = v7;
      }
    }
    v4 = (*(_QWORD *)(v3 + 8) + 32LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(v3 + 8) >> 64);
    if ( v4 )
    {
      Local = wil::details_abi::ThreadLocalStorage<wil::details_abi::ThreadLocalData>::GetLocal(v4 + 8, v1);
      v2 = Local;
      if ( Local )
      {
        if ( !*(_QWORD *)(Local + 8) )
          *(_QWORD *)(Local + 8) = v4 + 4;
      }
    }
  }
  return (struct wil::details_abi::ThreadLocalData *)v2;
}

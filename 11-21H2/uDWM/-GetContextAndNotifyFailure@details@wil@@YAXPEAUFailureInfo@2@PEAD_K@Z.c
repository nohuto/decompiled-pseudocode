/*
 * XREFs of ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x180006690
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180009954 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180040238 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@Z @ 0x1800949A0 (-GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@.c)
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x180096028 (-SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::GetContextAndNotifyFailure(wil::details *this, struct wil::FailureInfo *a2, char *a3)
{
  wil::details *v5; // rdi
  char v6; // bp
  struct wil::details::ThreadFailureCallbackHolder **Local; // rax
  struct wil::details::ThreadFailureCallbackHolder **v8; // rbx
  DWORD CurrentThreadId; // eax
  bool v10; // dl
  wil::details_abi *v11; // rcx
  wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details::ThreadFailureCallbackHolder *v13; // rbx

  v5 = this;
  *(_BYTE *)a2 = 0;
  v6 = 0;
  if ( wil::details::g_pThreadFailureCallbacks )
  {
    Local = (struct wil::details::ThreadFailureCallbackHolder **)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                                                                   this,
                                                                   0LL);
    v8 = Local;
    if ( Local )
    {
      if ( *Local )
      {
        *(_BYTE *)a2 = 0;
        if ( wil::details::ThreadFailureCallbackHolder::GetThreadContext(v5, *Local, (char *)a2, (unsigned __int64)a3) )
          *((_QWORD *)v5 + 9) = a2;
        v13 = *v8;
        do
        {
          v6 |= (***((__int64 (__fastcall ****)(_QWORD, wil::details *))v13 + 1))(*((_QWORD *)v13 + 1), v5);
          v13 = (struct wil::details::ThreadFailureCallbackHolder *)*((_QWORD *)v13 + 2);
        }
        while ( v13 );
      }
    }
  }
  if ( wil::details::g_pfnTelemetryCallback )
  {
    LOBYTE(this) = v6;
    wil::details::g_pfnTelemetryCallback(this, v5);
  }
  CurrentThreadId = GetCurrentThreadId();
  if ( `wil::SetLastError'::`2'::lastThread != CurrentThreadId )
  {
    v11 = (wil::details_abi *)(unsigned int)_InterlockedIncrement(&`wil::SetLastError'::`5'::depth);
    if ( (int)v11 < 4 )
    {
      `wil::SetLastError'::`2'::lastThread = CurrentThreadId;
      ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v11, v10);
      if ( ThreadLocalDataCache )
        wil::details_abi::ThreadLocalData::SetLastError(ThreadLocalDataCache, v5);
      `wil::SetLastError'::`2'::lastThread = 0;
    }
    _InterlockedDecrement(&`wil::SetLastError'::`5'::depth);
  }
}

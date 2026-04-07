/*
 * XREFs of ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180009954
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x180006690 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 * Callees:
 *     ?GetShared@?$ProcessLocalStorage@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAUProcessLocalData@23@XZ @ 0x1800099D0 (-GetShared@-$ProcessLocalStorage@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAUPr.c)
 */

// Hidden C++ exception states: #wind=1
struct wil::details_abi::ThreadLocalData *__fastcall wil::details_abi::GetThreadLocalDataCache(wil::details_abi *this)
{
  __int64 i; // rbx
  __int64 Shared; // rdi
  DWORD CurrentThreadId; // r8d

  i = 0LL;
  if ( wil::details_abi::g_pProcessLocalData )
  {
    Shared = wil::details_abi::ProcessLocalStorage<wil::details_abi::ProcessLocalData>::GetShared(this);
    if ( Shared )
    {
      CurrentThreadId = GetCurrentThreadId();
      for ( i = *(_QWORD *)(Shared + 8 * (CurrentThreadId % 0xAuLL) + 8); i; i = *(_QWORD *)(i + 8) )
      {
        if ( *(_DWORD *)i == CurrentThreadId )
        {
          i += 16LL;
          break;
        }
      }
      if ( i && !*(_QWORD *)(i + 8) )
        *(_QWORD *)(i + 8) = Shared + 4;
    }
  }
  return (struct wil::details_abi::ThreadLocalData *)i;
}

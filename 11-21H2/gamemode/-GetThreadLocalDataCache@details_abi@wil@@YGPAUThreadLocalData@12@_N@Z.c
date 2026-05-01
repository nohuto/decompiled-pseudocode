/*
 * XREFs of ?GetThreadLocalDataCache@details_abi@wil@@YGPAUThreadLocalData@12@_N@Z @ 0x100039FA
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YGXPAUFailureInfo@2@PADI@Z @ 0x10003C30 (-GetContextAndNotifyFailure@details@wil@@YGXPAUFailureInfo@2@PADI@Z.c)
 * Callees:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SGJPBDPAPAV123@@Z @ 0x10004000 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SGJPBDPA.c)
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 *     __EH_epilog3 @ 0x10007399 (__EH_epilog3.c)
 *     __EH_prolog3 @ 0x100073C8 (__EH_prolog3.c)
 */

struct wil::details_abi::ThreadLocalData *__cdecl wil::details_abi::GetThreadLocalDataCache()
{
  int v0; // esi
  _DWORD *v1; // edi
  int v2; // esi
  DWORD CurrentThreadId; // edi
  _DWORD *i; // ecx
  bool v6; // zf
  _DWORD *v7; // ecx

  v0 = wil::details_abi::g_pProcessLocalData;
  v1 = 0;
  if ( wil::details_abi::g_pProcessLocalData )
  {
    if ( !*(_DWORD *)(wil::details_abi::g_pProcessLocalData + 4)
      && (int)wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire() >= 0
      && !*(_DWORD *)(v0 + 4) )
    {
      *(_DWORD *)(v0 + 4) = 0;
    }
    v2 = *(_DWORD *)(v0 + 4) != 0 ? *(_DWORD *)(v0 + 4) + 16 : 0;
    if ( v2 )
    {
      CurrentThreadId = GetCurrentThreadId();
      for ( i = *(_DWORD **)(v2 + 4 * (CurrentThreadId % 0xA) + 8); ; i = (_DWORD *)i[1] )
      {
        if ( !i )
          return 0;
        if ( *i == CurrentThreadId )
          break;
      }
      v6 = i + 2 == 0;
      v7 = i + 2;
      v1 = v7;
      if ( !v6 && !v7[2] )
        v7[2] = v2 + 4;
    }
  }
  return (struct wil::details_abi::ThreadLocalData *)v1;
}

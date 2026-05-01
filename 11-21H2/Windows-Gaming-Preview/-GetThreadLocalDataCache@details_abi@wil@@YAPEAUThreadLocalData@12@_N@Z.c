/*
 * XREFs of ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x1800041B0
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x180004400 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18000A7E0 (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18001263C (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 * Callees:
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x180001F04 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180008358 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 */

// Hidden C++ exception states: #wind=1
struct wil::details_abi::ThreadLocalData *__fastcall wil::details_abi::GetThreadLocalDataCache(wil::details_abi *this)
{
  char v1; // r14
  char *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdi
  DWORD CurrentThreadId; // ebp
  unsigned __int64 v6; // rsi
  __int64 i; // rbx
  _QWORD *v8; // rax
  signed __int64 v9; // rcx
  signed __int64 v10; // rax
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v1 = (char)this;
  v2 = 0LL;
  v3 = wil::details_abi::g_pProcessLocalData;
  if ( wil::details_abi::g_pProcessLocalData )
  {
    if ( !*(_QWORD *)(wil::details_abi::g_pProcessLocalData + 8) )
    {
      v12 = 0LL;
      if ( (int)wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(
                  *(_QWORD *)wil::details_abi::g_pProcessLocalData,
                  &v12) >= 0
        && !*(_QWORD *)(v3 + 8) )
      {
        *(_QWORD *)(v3 + 8) = v12;
      }
    }
    v4 = (*(_QWORD *)(v3 + 8) + 32LL) & -(__int64)(*(_QWORD *)(v3 + 8) != 0LL);
    if ( v4 )
    {
      CurrentThreadId = GetCurrentThreadId();
      v6 = CurrentThreadId % 0xAuLL;
      for ( i = *(_QWORD *)(v4 + 8 * v6 + 8); i; i = *(_QWORD *)(i + 8) )
      {
        if ( *(_DWORD *)i == CurrentThreadId )
        {
          v2 = (char *)(i + 16);
          goto LABEL_18;
        }
      }
      if ( v1 && (v8 = wil::details::ProcessHeapAlloc(0, 0x38uLL), (v9 = (signed __int64)v8) != 0) )
      {
        *(_DWORD *)v8 = CurrentThreadId;
        v8[1] = 0LL;
        v2 = (char *)(v8 + 2);
        *((_WORD *)v8 + 8) = 40;
        *((_DWORD *)v8 + 5) = 0;
        v8[3] = 0LL;
        *((_DWORD *)v8 + 8) = 0;
        v8[5] = 0LL;
        *((_DWORD *)v8 + 12) = 0;
        _m_prefetchw((const void *)(v4 + 8 * v6 + 8));
        do
        {
          v10 = *(_QWORD *)(v4 + 8 * v6 + 8);
          *(_QWORD *)(v9 + 8) = v10;
        }
        while ( v10 != _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 8 * v6 + 8), v9, v10) );
      }
      else
      {
        v2 = 0LL;
      }
LABEL_18:
      if ( v2 && !*((_QWORD *)v2 + 1) )
        *((_QWORD *)v2 + 1) = v4 + 4;
    }
  }
  return (struct wil::details_abi::ThreadLocalData *)v2;
}

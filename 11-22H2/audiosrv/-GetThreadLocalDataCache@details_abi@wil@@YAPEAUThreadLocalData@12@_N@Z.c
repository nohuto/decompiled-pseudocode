/*
 * XREFs of ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x18003CB50
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x18003C9C0 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x18006566C (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 * Callees:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18005F820 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x18005FBF8 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
struct wil::details_abi::ThreadLocalData *__fastcall wil::details_abi::GetThreadLocalDataCache(wil::details_abi *this)
{
  char v1; // r14
  char *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdi
  DWORD CurrentThreadId; // ebp
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rsi
  __int64 i; // rbx
  _QWORD *v10; // rax
  signed __int64 v11; // rcx
  signed __int64 v12; // rax
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v1 = (char)this;
  v2 = 0LL;
  v3 = wil::details_abi::g_pProcessLocalData;
  if ( wil::details_abi::g_pProcessLocalData )
  {
    if ( !*(_QWORD *)(wil::details_abi::g_pProcessLocalData + 8) )
    {
      v13 = 0LL;
      if ( (int)wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(
                  *(_QWORD *)wil::details_abi::g_pProcessLocalData,
                  &v13) >= 0
        && !*(_QWORD *)(v3 + 8) )
      {
        *(_QWORD *)(v3 + 8) = v13;
      }
    }
    v4 = (*(_QWORD *)(v3 + 8) + 32LL) & -(__int64)(*(_QWORD *)(v3 + 8) != 0LL);
    if ( v4 )
    {
      CurrentThreadId = GetCurrentThreadId();
      v7 = CurrentThreadId % 0xAuLL;
      for ( i = *(_QWORD *)(v4 + 8 * v7 + 8); i; i = *(_QWORD *)(i + 8) )
      {
        if ( *(_DWORD *)i == CurrentThreadId )
        {
          v2 = (char *)(i + 16);
          goto LABEL_8;
        }
      }
      if ( v1 && (v10 = wil::details::ProcessHeapAlloc(0, 0x38uLL, v6), (v11 = (signed __int64)v10) != 0) )
      {
        *(_DWORD *)v10 = CurrentThreadId;
        v10[1] = 0LL;
        v2 = (char *)(v10 + 2);
        *((_WORD *)v10 + 8) = 40;
        *((_DWORD *)v10 + 5) = 0;
        v10[3] = 0LL;
        *((_DWORD *)v10 + 8) = 0;
        v10[5] = 0LL;
        *((_DWORD *)v10 + 12) = 0;
        do
        {
          v12 = *(_QWORD *)(v4 + 8 * v7 + 8);
          *(_QWORD *)(v11 + 8) = v12;
        }
        while ( v12 != _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 8 * v7 + 8), v11, v12) );
      }
      else
      {
        v2 = 0LL;
      }
LABEL_8:
      if ( v2 && !*((_QWORD *)v2 + 1) )
        *((_QWORD *)v2 + 1) = v4 + 4;
    }
  }
  return (struct wil::details_abi::ThreadLocalData *)v2;
}

/*
 * XREFs of ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18001263C
 * Callers:
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18000A7E0 (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x180004094 (-SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x1800041B0 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?GetLastError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@J@Z @ 0x1800122F0 (-GetLastError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@J@Z.c)
 *     ?RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x1800123F8 (-RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z.c)
 *     memset_0 @ 0x18004B744 (memset_0.c)
 */

void __fastcall wil::details::ReportFeatureError(
        wil::details *this,
        wil::ThreadErrorContext *a2,
        struct wil::ThreadErrorContext *a3,
        const struct wil::FailureInfo *a4)
{
  int v6; // edi
  wil::details *v7; // rcx
  const struct DiagnosticsInfo *v8; // r9
  DWORD CurrentThreadId; // eax
  wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  unsigned int v11[14]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+58h] [rbp-70h]
  int v13; // [rsp+60h] [rbp-68h]
  __int64 v14; // [rsp+A8h] [rbp-20h]

  v6 = (int)this;
  if ( !wil::ThreadErrorContext::GetLastError(a2, (struct wil::FailureInfo *)v11, (int)this) )
  {
    memset_0(v11, 0, 0x98uLL);
    v13 = *((unsigned __int16 *)a4 + 12);
    v12 = *((_QWORD *)a4 + 1);
    v14 = *(_QWORD *)a4;
    v11[2] = v6;
    CurrentThreadId = GetCurrentThreadId();
    if ( `wil::SetLastError'::`2'::lastThread != CurrentThreadId )
    {
      if ( _InterlockedIncrement(&`wil::SetLastError'::`5'::depth) < 4 )
      {
        `wil::SetLastError'::`2'::lastThread = CurrentThreadId;
        ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(0LL);
        if ( ThreadLocalDataCache )
          wil::details_abi::ThreadLocalData::SetLastError(ThreadLocalDataCache, (const struct wil::FailureInfo *)v11);
        `wil::SetLastError'::`2'::lastThread = 0;
      }
      _InterlockedDecrement(&`wil::SetLastError'::`5'::depth);
    }
    wil::ThreadErrorContext::GetLastError(a2, (struct wil::FailureInfo *)v11, v6);
  }
  wil::details::RecordFeatureError(v7, (__int64)v11, a4, v8);
}

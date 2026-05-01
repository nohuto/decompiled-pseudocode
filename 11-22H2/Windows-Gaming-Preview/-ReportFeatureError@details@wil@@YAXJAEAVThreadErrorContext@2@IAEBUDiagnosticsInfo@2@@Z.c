/*
 * XREFs of ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x1800127D8
 * Callers:
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18000A91C (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x18000409C (-SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x1800041A0 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?GetLastError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@J@Z @ 0x1800124D0 (-GetLastError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@J@Z.c)
 *     ??0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x1800125D8 (--0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z.c)
 *     __security_check_cookie @ 0x18004B4D0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004C634 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ReportFeatureError(
        wil::details *this,
        wil::ThreadErrorContext *a2,
        struct wil::ThreadErrorContext *a3,
        __int64 a4)
{
  int v6; // edi
  void *v7; // r9
  DWORD CurrentThreadId; // eax
  wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  _BYTE v10[8]; // [rsp+20h] [rbp-E0h] BYREF
  int v11; // [rsp+28h] [rbp-D8h]
  __int64 v12; // [rsp+58h] [rbp-A8h]
  int v13; // [rsp+60h] [rbp-A0h]
  struct DiagnosticsInfo v14; // [rsp+A8h] [rbp-58h]
  _BYTE v15[400]; // [rsp+C0h] [rbp-40h] BYREF

  v6 = (int)this;
  if ( !wil::ThreadErrorContext::GetLastError(a2, (struct wil::FailureInfo *)v10, (int)this) )
  {
    memset_0(v10, 0, 0x98uLL);
    v13 = *(unsigned __int16 *)(a4 + 24);
    v12 = *(_QWORD *)(a4 + 8);
    v14 = *(struct DiagnosticsInfo *)a4;
    v11 = v6;
    CurrentThreadId = GetCurrentThreadId();
    if ( `wil::SetLastError'::`2'::lastThread != CurrentThreadId )
    {
      if ( _InterlockedIncrement(&`wil::SetLastError'::`5'::depth) < 4 )
      {
        `wil::SetLastError'::`2'::lastThread = CurrentThreadId;
        ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(0LL);
        if ( ThreadLocalDataCache )
          wil::details_abi::ThreadLocalData::SetLastError(ThreadLocalDataCache, (const struct wil::FailureInfo *)v10);
        `wil::SetLastError'::`2'::lastThread = 0;
      }
      _InterlockedDecrement(&`wil::SetLastError'::`5'::depth);
    }
    wil::ThreadErrorContext::GetLastError(a2, (struct wil::FailureInfo *)v10, v6);
  }
  wil::details::StagingFailureInformation::StagingFailureInformation(
    (wil::details::StagingFailureInformation *)v15,
    (const struct wil::FailureInfo *)v10,
    (const struct DiagnosticsInfo *)a4,
    v7);
  if ( g_wil_details_internalRecordFeatureError )
  {
    g_wil_details_internalRecordFeatureError(11973136LL, v15);
  }
  else if ( g_wil_details_apiRecordFeatureError )
  {
    g_wil_details_apiRecordFeatureError(11973136LL, v15);
  }
}

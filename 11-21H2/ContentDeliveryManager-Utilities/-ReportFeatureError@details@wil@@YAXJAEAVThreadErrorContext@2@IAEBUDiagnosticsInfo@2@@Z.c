/*
 * XREFs of ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180043970
 * Callers:
 *     ?LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x18003ACC0 (-LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x18003B0E0 (-LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU-$IAsyncOperation@_.c)
 *     ?StartProductInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE00@Z @ 0x180090630 (-StartProductInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE00@Z.c)
 *     ?StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z @ 0x180090860 (-StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z.c)
 *     ?UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x1800909B0 (-UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_STATE_NAME@@PEBEIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800EC4C4 (-RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_S.c)
 * Callees:
 *     memset_0 @ 0x18002245D (memset_0.c)
 *     ?GetLastError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IJ@Z @ 0x180036290 (-GetLastError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IJ@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180038F68 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x18003FC10 (-RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z.c)
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x1800455BC (-SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z.c)
 */

void __fastcall wil::details::ReportFeatureError(
        wil::details *this,
        __int64 a2,
        struct wil::ThreadErrorContext *a3,
        const struct wil::FailureInfo *a4)
{
  unsigned int v5; // ebp
  int v7; // esi
  const struct DiagnosticsInfo *v8; // r9
  DWORD CurrentThreadId; // eax
  wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  unsigned int v11[14]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+58h] [rbp-70h]
  int v13; // [rsp+60h] [rbp-68h]
  __int64 v14; // [rsp+A8h] [rbp-20h]

  v5 = (unsigned int)a3;
  v7 = (int)this;
  if ( !*(_QWORD *)a2
    || !wil::details_abi::ThreadLocalData::GetLastError(
          *(wil::details_abi::ThreadLocalData **)a2,
          (struct wil::FailureInfo *)v11,
          *(_DWORD *)(a2 + 8),
          (int)this) )
  {
    memset_0(v11, 0, 0x98uLL);
    v13 = *((unsigned __int16 *)a4 + 12);
    v12 = *((_QWORD *)a4 + 1);
    v14 = *(_QWORD *)a4;
    v11[2] = v7;
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
    if ( *(_QWORD *)a2 )
      wil::details_abi::ThreadLocalData::GetLastError(
        *(wil::details_abi::ThreadLocalData **)a2,
        (struct wil::FailureInfo *)v11,
        *(_DWORD *)(a2 + 8),
        v7);
  }
  wil::details::RecordFeatureError((wil::details *)v5, (__int64)v11, a4, v8);
}

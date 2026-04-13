/*
 * XREFs of ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18003E2A0
 * Callers:
 *     ?LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180038790 (-LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x180038A90 (-LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU-$IAsyncOperation@_.c)
 *     ?StartProductInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE00@Z @ 0x180084290 (-StartProductInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE00@Z.c)
 *     ?StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z @ 0x180084410 (-StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z.c)
 *     ?UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180084710 (-UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_STATE_NAME@@PEBEIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800D351C (-RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_S.c)
 * Callees:
 *     memset_0 @ 0x180022C6D (memset_0.c)
 *     ?GetLastError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IJ@Z @ 0x180035210 (-GetLastError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IJ@Z.c)
 *     ?RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x18003B644 (-RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z.c)
 *     ?SetLastError@wil@@YAXAEBUFailureInfo@1@@Z @ 0x18004053C (-SetLastError@wil@@YAXAEBUFailureInfo@1@@Z.c)
 */

void __fastcall wil::details::ReportFeatureError(
        wil::details *this,
        __int64 a2,
        struct wil::ThreadErrorContext *a3,
        __int64 a4)
{
  unsigned int v5; // r14d
  int v7; // ebp
  struct DiagnosticsInfo *v8; // r9
  const struct wil::FailureInfo *v9; // rdx
  unsigned int v10[14]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v11; // [rsp+58h] [rbp-70h]
  int v12; // [rsp+60h] [rbp-68h]
  struct DiagnosticsInfo v13; // [rsp+A8h] [rbp-20h]

  v5 = (unsigned int)a3;
  v7 = (int)this;
  if ( !*(_QWORD *)a2
    || !wil::details_abi::ThreadLocalData::GetLastError(
          *(wil::details_abi::ThreadLocalData **)a2,
          (struct wil::FailureInfo *)v10,
          *(_DWORD *)(a2 + 8),
          (int)this) )
  {
    memset_0(v10, 0, 0x98uLL);
    v12 = *(unsigned __int16 *)(a4 + 24);
    v11 = *(_QWORD *)(a4 + 8);
    v13 = *(struct DiagnosticsInfo *)a4;
    v10[2] = v7;
    wil::SetLastError((wil *)v10, v9);
    if ( *(_QWORD *)a2 )
      wil::details_abi::ThreadLocalData::GetLastError(
        *(wil::details_abi::ThreadLocalData **)a2,
        (struct wil::FailureInfo *)v10,
        *(_DWORD *)(a2 + 8),
        v7);
  }
  wil::details::RecordFeatureError(
    (wil::details *)v5,
    (const struct wil::FailureInfo *)v10,
    (const struct DiagnosticsInfo *)a4,
    v8);
}

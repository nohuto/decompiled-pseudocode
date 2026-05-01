/*
 * XREFs of ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180364EF4
 * Callers:
 *     ?OnShellReady@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800A6424 (-OnShellReady@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?Start@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJXZ @ 0x1800D9F10 (-Start@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJXZ.c)
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800F0618 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 *     ?Close@CToastCenterExperienceManager@@UEAAJXZ @ 0x180168660 (-Close@CToastCenterExperienceManager@@UEAAJXZ.c)
 *     ?RaiseToastPeekRegionClickedEvent@CToastCenterExperienceManager@@AEAAJXZ @ 0x180364BEC (-RaiseToastPeekRegionClickedEvent@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJPEAVICortanaWNFNotification@23@_N@Z @ 0x1803ADA50 (-SubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJPEAVICortanaWNFNotification@23@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetLastError@wil@@YAXAEBUFailureInfo@1@@Z @ 0x1802D9488 (-SetLastError@wil@@YAXAEBUFailureInfo@1@@Z.c)
 *     ??0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x180316F70 (--0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z.c)
 *     ?GetLastError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IJ@Z @ 0x1803180F8 (-GetLastError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IJ@Z.c)
 */

void __fastcall wil::details::ReportFeatureError(
        wil::details *this,
        __int64 a2,
        struct wil::ThreadErrorContext *a3,
        __int64 a4)
{
  unsigned int v5; // r14d
  int v7; // esi
  void *v8; // r9
  const struct wil::FailureInfo *v9; // rdx
  _BYTE v10[8]; // [rsp+20h] [rbp-E0h] BYREF
  int v11; // [rsp+28h] [rbp-D8h]
  __int64 v12; // [rsp+58h] [rbp-A8h]
  int v13; // [rsp+60h] [rbp-A0h]
  struct DiagnosticsInfo v14; // [rsp+A8h] [rbp-58h]
  struct FEATURE_ERROR v15[3]; // [rsp+C0h] [rbp-40h] BYREF

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
    v13 = *(unsigned __int16 *)(a4 + 24);
    v12 = *(_QWORD *)(a4 + 8);
    v14 = *(struct DiagnosticsInfo *)a4;
    v11 = v7;
    wil::SetLastError((wil *)v10, v9);
    if ( *(_QWORD *)a2 )
      wil::details_abi::ThreadLocalData::GetLastError(
        *(wil::details_abi::ThreadLocalData **)a2,
        (struct wil::FailureInfo *)v10,
        *(_DWORD *)(a2 + 8),
        v7);
  }
  wil::details::StagingFailureInformation::StagingFailureInformation(
    (struct DiagnosticsInfo *)v15,
    (const struct wil::FailureInfo *)v10,
    (const struct DiagnosticsInfo *)a4,
    v8);
  if ( g_wil_details_internalRecordFeatureError )
  {
    g_wil_details_internalRecordFeatureError(v5, v15);
  }
  else if ( g_wil_details_apiRecordFeatureError )
  {
    g_wil_details_apiRecordFeatureError(v5, v15);
  }
}

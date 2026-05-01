/*
 * XREFs of ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x1804394F4
 * Callers:
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800770B4 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 *     ?OnShellReady@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800E562C (-OnShellReady@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?Close@CToastCenterExperienceManager@@UEAAJXZ @ 0x180143A70 (-Close@CToastCenterExperienceManager@@UEAAJXZ.c)
 *     winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeAsync$_ResumeCoro$1 @ 0x18025CD20 (winrt--Windows--Internal--Shell--implementation--DiscoverabilityManager--InitializeAsync$_Resume.c)
 *     ?Start@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJXZ @ 0x1802D63F0 (-Start@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJXZ.c)
 *     ?RaiseToastPeekRegionClickedEvent@CToastCenterExperienceManager@@AEAAJXZ @ 0x1804391D8 (-RaiseToastPeekRegionClickedEvent@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJPEAVICortanaWNFNotification@23@_N@Z @ 0x180488D10 (-SubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJPEAVICortanaWNFNotification@23@_N@Z.c)
 * Callees:
 *     ?SetLastError@wil@@YAXAEBUFailureInfo@1@@Z @ 0x1800BBE94 (-SetLastError@wil@@YAXAEBUFailureInfo@1@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x1803E5DF4 (--0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z.c)
 *     ?GetLastError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IJ@Z @ 0x1803E6D2C (-GetLastError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IJ@Z.c)
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
  struct DiagnosticsInfo v15[50]; // [rsp+C0h] [rbp-40h] BYREF

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
    v15,
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

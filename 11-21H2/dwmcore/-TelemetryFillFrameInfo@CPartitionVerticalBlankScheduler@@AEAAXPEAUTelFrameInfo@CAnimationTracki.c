/*
 * XREFs of ?TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x180079298
 * Callers:
 *     ?TelemetryBeginAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBG@Z @ 0x180017EB0 (-TelemetryBeginAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJIPEBUDCOMPOSITION_TELEME.c)
 *     ?TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAXI_KPEBU_GUID@@@Z @ 0x180076F80 (-TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAXI_KPEBU_GUID@@@Z.c)
 *     ?TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJI_KPEBU_GUID@@@Z @ 0x180077130 (-TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJI_KPEBU_GUID@@@Z.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18007A020 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18007C008 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VISwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVISwapChain@@@Z @ 0x1800793D8 (--0-$com_ptr_t@VISwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVISwapChain@@@Z.c)
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x1800B2FA8 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TelemetryFillFrameInfo(
        CPartitionVerticalBlankScheduler *this,
        struct CAnimationTracking::TelFrameInfo *a2,
        struct CFrameInfo *a3)
{
  struct CFrameInfo *v3; // rbx
  struct CComposition *v5; // rax
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v3 = a3;
  if ( !a3 )
  {
    v3 = (struct CFrameInfo *)*((_QWORD *)this + 564);
    if ( !*(_QWORD *)v3 )
      v3 = (struct CFrameInfo *)*((_QWORD *)this + 565);
  }
  v5 = g_pComposition;
  *(_BYTE *)a2 = 0;
  if ( *(_BYTE *)(*((_QWORD *)v5 + 27) + 577LL) )
  {
    PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 8)
                                                                                                  + 216LL));
    if ( PrimaryMonitorTarget )
    {
      v7 = (*(__int64 (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)PrimaryMonitorTarget + 152LL))(PrimaryMonitorTarget);
      wil::com_ptr_t<ISwapChain,wil::err_returncode_policy>::com_ptr_t<ISwapChain,wil::err_returncode_policy>(&v9, v7);
      if ( v9 )
      {
        v8 = *(int *)(*(_QWORD *)(v9 + 8) + 12LL) + v9 + 8;
        if ( !*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8) + 1509) )
          *(_BYTE *)a2 = 1;
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v9);
    }
  }
  *((_BYTE *)a2 + 1) = *((_BYTE *)v3 + 153);
  *((_QWORD *)a2 + 1) = *(_QWORD *)v3;
  *((_QWORD *)a2 + 2) = 10000000 * (*((_QWORD *)v3 + 32) / g_qpcFrequency.QuadPart)
                      + (unsigned __int64)(10000000 * (*((_QWORD *)v3 + 32) % g_qpcFrequency.QuadPart))
                      / g_qpcFrequency.QuadPart;
}

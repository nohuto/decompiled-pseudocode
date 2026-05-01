/*
 * XREFs of ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18002326C
 * Callers:
 *     ?StopActivity@PresentWindow@CFramePresentationTelemetry@@MEAAXXZ @ 0x18001FDD0 (-StopActivity@PresentWindow@CFramePresentationTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@SetViewPosition@CImmersiveAppTelemetry@@MEAAXXZ @ 0x180021E80 (-StopActivity@SetViewPosition@CImmersiveAppTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ReconcileApplicationViewState@CFramePresentationTelemetry@@MEAAXXZ @ 0x180023010 (-StopActivity@ReconcileApplicationViewState@CFramePresentationTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@UnpresentWindow@CFramePresentationTelemetry@@MEAAXXZ @ 0x180064790 (-StopActivity@UnpresentWindow@CFramePresentationTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ProcessNewWindow@CImmersiveAppTelemetry@@MEAAXXZ @ 0x180064880 (-StopActivity@ProcessNewWindow@CImmersiveAppTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@LoadQuirksForPackage@CAppManagerTelemetry@@MEAAXXZ @ 0x180064970 (-StopActivity@LoadQuirksForPackage@CAppManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@Initialization@CFramePresentationTelemetry@@MEAAXXZ @ 0x180064A60 (-StopActivity@Initialization@CFramePresentationTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@MEAAXXZ @ 0x180064B50 (-StopActivity@GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@DeleteWindow@CImmersiveAppTelemetry@@MEAAXXZ @ 0x180064C40 (-StopActivity@DeleteWindow@CImmersiveAppTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@AddWindowToGlom@CAppManagerTelemetry@@MEAAXXZ @ 0x180064D30 (-StopActivity@AddWindowToGlom@CAppManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@OnShellHookMessage@IamTraceLogging@@MEAAXXZ @ 0x180128B30 (-StopActivity@OnShellHookMessage@IamTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@CloseHungApp@CAppManagerTelemetry@@MEAAXXZ @ 0x1803A0D60 (-StopActivity@CloseHungApp@CAppManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@HandleApplicationRequestActivation@CAppManagerTelemetry@@MEAAXXZ @ 0x1803A1080 (-StopActivity@HandleApplicationRequestActivation@CAppManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ConsolidateView@CAppViewManagerTelemetry@@MEAAXXZ @ 0x1803B2BB0 (-StopActivity@ConsolidateView@CAppViewManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PrepareToSwitchAsyncWorker@CAppViewManagerTelemetry@@MEAAXXZ @ 0x1803B3AE0 (-StopActivity@PrepareToSwitchAsyncWorker@CAppViewManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PrepareToSwitchHelper@CAppViewManagerTelemetry@@MEAAXXZ @ 0x1803B3E00 (-StopActivity@PrepareToSwitchHelper@CAppViewManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ShowViewAsyncWorker@CAppViewManagerTelemetry@@MEAAXXZ @ 0x1803B4120 (-StopActivity@ShowViewAsyncWorker@CAppViewManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@SplitView@CAppViewManagerTelemetry@@MEAAXXZ @ 0x1803B4440 (-StopActivity@SplitView@CAppViewManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@SwitchAsyncWorker@CAppViewManagerTelemetry@@MEAAXXZ @ 0x1803B4760 (-StopActivity@SwitchAsyncWorker@CAppViewManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@WindowProvided@CAppViewManagerTelemetry@@MEAAXXZ @ 0x1803B4A80 (-StopActivity@WindowProvided@CAppViewManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@SetApplicationWindow@CImmersiveAppTelemetry@@MEAAXXZ @ 0x1803C4BE0 (-StopActivity@SetApplicationWindow@CImmersiveAppTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@SetPendingApplicationWindow@CImmersiveAppTelemetry@@MEAAXXZ @ 0x1803C4F00 (-StopActivity@SetPendingApplicationWindow@CImmersiveAppTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800232B4 (-LockExclusive@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 */

void __fastcall wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rcx
  RTL_SRWLOCK *v3; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(a1, &v3);
  v2 = v3;
  **(_DWORD **)(a1 + 48) = 2;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}

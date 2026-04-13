/*
 * XREFs of ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18005EB88
 * Callers:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x180051EE0 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?StartActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG0I@Z @ 0x18005E910 (-StartActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEB.c)
 *     ?StartActivity@LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG@Z @ 0x18005EA28 (-StartActivity@LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG@Z.c)
 *     ?StartActivity@SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXW4TriggerId@Triggers@4@@Z @ 0x18005EAD8 (-StartActivity@SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@.c)
 *     ?StartActivity@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXXZ @ 0x18006A7F0 (-StartActivity@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Backgro.c)
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180075EF4 (-EnsureWatchingCurrentThread@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDel.c)
 *     ?StartActivity@ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG00@Z @ 0x180077194 (-StartActivity@ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryM.c)
 *     ?StartActivity@DiagTrackRuleSetHandlerAddRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_WIPEBD@Z @ 0x1800A2420 (-StartActivity@DiagTrackRuleSetHandlerAddRule@ContentDeliveryManagerTelemetry@Background@Content.c)
 *     ?StartActivity@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_WIPEBD@Z @ 0x1800A24FC (-StartActivity@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@Cont.c)
 *     ?StartActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAAXXZ @ 0x1800A7830 (-StartActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEB_W@Z @ 0x1800CC364 (-StartActivity@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEB_W@Z.c)
 * Callees:
 *     memset_0 @ 0x180022C6D (memset_0.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180035340 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180042338 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

void __fastcall wil::details::ThreadFailureCallbackHolder::StartWatching(
        wil::details::ThreadFailureCallbackHolder *this)
{
  const struct wil::FailureInfo *v2; // rdx
  _QWORD *Local; // rax
  _BYTE v4[168]; // [rsp+20h] [rbp-A8h] BYREF

  if ( *((_DWORD *)this + 6) )
  {
    memset_0(v4, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v4, v2);
  }
  if ( wil::details::g_pThreadFailureCallbacks )
  {
    Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                        (__int64)this,
                        1);
    *(_QWORD *)this = Local;
    if ( Local )
    {
      *((_QWORD *)this + 2) = *Local;
      *Local = this;
      *((_DWORD *)this + 6) = GetCurrentThreadId();
    }
  }
  else
  {
    *(_QWORD *)this = 0LL;
  }
}

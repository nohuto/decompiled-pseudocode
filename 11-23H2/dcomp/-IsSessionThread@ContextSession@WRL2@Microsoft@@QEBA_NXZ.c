/*
 * XREFs of ?IsSessionThread@ContextSession@WRL2@Microsoft@@QEBA_NXZ @ 0x18006B72C
 * Callers:
 *     ?GetCommitBatch@CompositorCommon@Composition@UI@Windows@@QEAAJW4CompositionBatchTypes@234@PEAPEAVCompositionCommitBatch@234@@Z @ 0x180002CBC (-GetCommitBatch@CompositorCommon@Composition@UI@Windows@@QEAAJW4CompositionBatchTypes@234@PEAPEA.c)
 *     ?DeferredPostDestroy_NoLock@ContextRuntimeClass@WRL2@Microsoft@@CAJPEAX@Z @ 0x180028060 (-DeferredPostDestroy_NoLock@ContextRuntimeClass@WRL2@Microsoft@@CAJPEAX@Z.c)
 *     ?UpdateDeferredNotifications_Callback@CompositionIsland@Composition@UI@Windows@@AEAAX_N@Z @ 0x18006B610 (-UpdateDeferredNotifications_Callback@CompositionIsland@Composition@UI@Windows@@AEAAX_N@Z.c)
 *     ?add_AutomationProviderRequested@Api@CompositionIsland@Composition@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandAutomationProviderRequestedEventArgs@234@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x18006B6A0 (-add_AutomationProviderRequested@Api@CompositionIsland@Composition@UI@Windows@@UEAAJPEAU-$ITyped.c)
 *     ?Close@ContextRuntimeClass@WRL2@Microsoft@@IEAAJ_N@Z @ 0x1800877D0 (-Close@ContextRuntimeClass@WRL2@Microsoft@@IEAAJ_N@Z.c)
 *     ?CreateTargetForCoreWindow@Compositor@Composition@UI@Windows@@QEAAJPEAPEAVCompositionTarget@234@@Z @ 0x18010F780 (-CreateTargetForCoreWindow@Compositor@Composition@UI@Windows@@QEAAJPEAPEAVCompositionTarget@234@.c)
 * Callees:
 *     <none>
 */

bool __fastcall Microsoft::WRL2::ContextSession::IsSessionThread(Microsoft::WRL2::ContextSession *this)
{
  return GetCurrentThreadId() == *((_DWORD *)this + 26);
}

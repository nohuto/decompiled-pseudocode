/*
 * XREFs of ??1?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1802E62D8
 * Callers:
 *     ??1CalculateSecondaryViews@JointResizeTelemetry@@QEAA@XZ @ 0x1802E6A84 (--1CalculateSecondaryViews@JointResizeTelemetry@@QEAA@XZ.c)
 *     ??1ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAA@XZ @ 0x1805B8774 (--1ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ??1CreateSnapId@CSnapComponentTelemetry@@QEAA@XZ @ 0x18065F328 (--1CreateSnapId@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ??1GetAndDeleteSnapId@CSnapComponentTelemetry@@QEAA@XZ @ 0x18065F380 (--1GetAndDeleteSnapId@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ??1OnArrangementReset@WindowDragInputProviderTelemetry@@QEAA@XZ @ 0x18068AD38 (--1OnArrangementReset@WindowDragInputProviderTelemetry@@QEAA@XZ.c)
 *     ??1OnGetArrangementRects@WindowDragInputProviderTelemetry@@QEAA@XZ @ 0x18068AD64 (--1OnGetArrangementRects@WindowDragInputProviderTelemetry@@QEAA@XZ.c)
 *     ??1SnapFlyoutInstance_GetDisplayRegion@SnapFlyoutTelemetry@@QEAA@XZ @ 0x18068E6C8 (--1SnapFlyoutInstance_GetDisplayRegion@SnapFlyoutTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1802E659C (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag__ea_1802E659C.c)
 *     ??1?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1805B85D8 (--1-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@_ea_1805B85D8.c)
 */

void __fastcall wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 312);
  wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}

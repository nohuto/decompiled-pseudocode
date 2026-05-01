/*
 * XREFs of ??1?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180110120
 * Callers:
 *     ??1InitializePosition@ShellPositionerTelemetry@@QEAA@XZ @ 0x180016B48 (--1InitializePosition@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ??1ActivationRequested@ShellPositionerTelemetry@@QEAA@XZ @ 0x180016D2C (--1ActivationRequested@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ??1CreateXamlApplication_WASDK@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x18002EE8C (--1CreateXamlApplication_WASDK@XamlExplorerHostTelemetry@@QEAA@XZ.c)
 *     ??1FrameworkViewTypeChanged@ShellPositionerTelemetry@@QEAA@XZ @ 0x18005F97C (--1FrameworkViewTypeChanged@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ??1CreateXamlApplication@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x18010F040 (--1CreateXamlApplication@XamlExplorerHostTelemetry@@QEAA@XZ.c)
 *     ??1XamlLaunchedOnThread@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x180110044 (--1XamlLaunchedOnThread@XamlExplorerHostTelemetry@@QEAA@XZ.c)
 *     ??1InitializeSnapFlyoutHost@CSnapComponentTelemetry@@QEAA@XZ @ 0x1801110BC (--1InitializeSnapFlyoutHost@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ??1OnGetWindowArrangementRects@CSnapComponentTelemetry@@QEAA@XZ @ 0x1802E8E48 (--1OnGetWindowArrangementRects@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ??1ProcessView@CSnapComponentTelemetry@@QEAA@XZ @ 0x1802E91D8 (--1ProcessView@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ??1ExternalDragHandoff@MultitaskingViewTelemetry@@QEAA@XZ @ 0x180576C3C (--1ExternalDragHandoff@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ??1ExternalDragDetected@MultitaskingViewTelemetry@@QEAA@XZ @ 0x18058F1A8 (--1ExternalDragDetected@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ??1InitializePositionWithShowCommand@ShellPositionerTelemetry@@QEAA@XZ @ 0x1805A26E0 (--1InitializePositionWithShowCommand@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ??1PresentationRequested@ShellPositionerTelemetry@@QEAA@XZ @ 0x1805A270C (--1PresentationRequested@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ??1ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAA@XZ @ 0x1805B86D4 (--1ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ??1ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAA@XZ @ 0x1805B8700 (--1ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ??1ShowWindowAttempted@TabletModeTraceLogging@@QEAA@XZ @ 0x1805B87A0 (--1ShowWindowAttempted@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ??1TMPControlGained@TabletModeTraceLogging@@QEAA@XZ @ 0x1805B87CC (--1TMPControlGained@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ??1TMPControlLost@TabletModeTraceLogging@@QEAA@XZ @ 0x1805B87F8 (--1TMPControlLost@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ??1EnumSnappedWindows@CSnapComponentTelemetry@@QEAA@XZ @ 0x180666FA4 (--1EnumSnappedWindows@CSnapComponentTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ??1?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180110160 (--1-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@_ea_180110160.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1801B2D5C (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag__ea_1801B2D5C.c)
 */

void __fastcall wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 312);
  wil::ActivityBase<WindowManagementLogging,1,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}

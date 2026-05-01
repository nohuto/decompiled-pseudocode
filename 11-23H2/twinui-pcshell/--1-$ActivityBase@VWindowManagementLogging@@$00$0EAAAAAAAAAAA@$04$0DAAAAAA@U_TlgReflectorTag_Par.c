/*
 * XREFs of ??1?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18003B654
 * Callers:
 *     ??1VirtualDesktopViewMovedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x18003A7B4 (--1VirtualDesktopViewMovedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ??1JointResize@JointResizeTelemetry@@QEAA@XZ @ 0x180145330 (--1JointResize@JointResizeTelemetry@@QEAA@XZ.c)
 *     ??1VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x18014591C (--1VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ??1VAPositioner_ResizeViewActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1805AB07C (--1VAPositioner_ResizeViewActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ??1VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180600444 (--1VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ??1VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180600470 (--1VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ??1VirtualDesktopSetNameActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180600520 (--1VirtualDesktopSetNameActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ??1VirtualDesktopSetWallpaperActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x18060054C (--1VirtualDesktopSetWallpaperActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ??1VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180600578 (--1VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ??1VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180613180 (--1VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ??1VirtualDesktopPinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x1806131AC (--1VirtualDesktopPinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ??1VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x1806131D8 (--1VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ??1VirtualDesktopUnpinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180613204 (--1VirtualDesktopUnpinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ??1WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAA@XZ @ 0x18063A9E4 (--1WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ??1?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18003B694 (--1-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@_ea_18003B694.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180073AD8 (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag__ea_180073AD8.c)
 */

void __fastcall wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 312);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}

/*
 * XREFs of ??4?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802E6AB0
 * Callers:
 *     ??4JointResize@JointResizeTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805E16A8 (--4JointResize@JointResizeTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAAEAV012@$$QEAV012@@Z @ 0x18060AED4 (--4VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAAEAV012@$$QEAV012@@.c)
 *     ??4WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x18063AA10 (--4WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 * Callees:
 *     ??4?$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV012@$$QEAV012@@Z @ 0x18002ADE8 (--4-$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activity.c)
 *     ?SetWatching@ThreadFailureCallbackHolder@details@wil@@QEAAX_N@Z @ 0x180038B28 (-SetWatching@ThreadFailureCallbackHolder@details@wil@@QEAAX_N@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180073AD8 (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag__ea_180073AD8.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

_QWORD *__fastcall wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::operator=(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  _QWORD *v6; // r15
  _QWORD *v7; // r14

  v4 = a2 + 56;
  v5 = (__int64)(a1 + 7);
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LauncherTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>::operator=(
    (__int64)(a1 + 7),
    a2 + 56);
  v6 = (_QWORD *)(a2 + 312);
  v7 = a1 + 39;
  if ( a1 + 39 != (_QWORD *)(a2 + 312) )
  {
    wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset((volatile signed __int32 **)a1 + 39);
    *v7 = *v6;
    *v6 = 0LL;
  }
  if ( *v7 )
    v5 = *v7 + 8LL;
  a1[6] = v5;
  a1[5] = v5 + 40;
  wil::details::ThreadFailureCallbackHolder::SetWatching(
    (wil::details::ThreadFailureCallbackHolder *)(a1 + 1),
    *(_DWORD *)(a2 + 32) != 0);
  *(_QWORD *)(a2 + 48) = v4;
  if ( *(_DWORD *)(a2 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 8));
  return a1;
}

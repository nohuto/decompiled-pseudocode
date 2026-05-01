/*
 * XREFs of ??1?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800C4164
 * Callers:
 *     ??1FrameworkViewTypeChanged@ShellPositionerTelemetry@@QEAA@XZ @ 0x18002B2A8 (--1FrameworkViewTypeChanged@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ??1InitializePositionWithShowCommand@ShellPositionerTelemetry@@QEAA@XZ @ 0x1800C3CC4 (--1InitializePositionWithShowCommand@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ??1InitializePosition@ShellPositionerTelemetry@@QEAA@XZ @ 0x1800C3E30 (--1InitializePosition@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ?ActivationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800C3E60 (-ActivationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ??1InitializeSnapFlyoutHost@CSnapComponentTelemetry@@QEAA@XZ @ 0x180171ABC (--1InitializeSnapFlyoutHost@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ??1ExternalDragHandoff@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1804BC0B4 (--1ExternalDragHandoff@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ??1ExternalDragDetected@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1804D73E4 (--1ExternalDragDetected@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ??1ActivationRequested@ShellPositionerTelemetry@@QEAA@XZ @ 0x1804EA624 (--1ActivationRequested@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ??1PresentationRequested@ShellPositionerTelemetry@@QEAA@XZ @ 0x1804EA67C (--1PresentationRequested@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ??1ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAA@XZ @ 0x1804FFF18 (--1ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ??1ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAA@XZ @ 0x1804FFF44 (--1ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ??1ShowWindowAttempted@TabletModeTraceLogging@@QEAA@XZ @ 0x1804FFFE4 (--1ShowWindowAttempted@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ??1TMPControlGained@TabletModeTraceLogging@@QEAA@XZ @ 0x180500010 (--1TMPControlGained@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ??1TMPControlLost@TabletModeTraceLogging@@QEAA@XZ @ 0x18050003C (--1TMPControlLost@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ??1OnGetWindowArrangementRects@CSnapComponentTelemetry@@QEAA@XZ @ 0x180591D30 (--1OnGetWindowArrangementRects@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ??1EnumSnappedWindows@CSnapComponentTelemetry@@QEAA@XZ @ 0x180598B6C (--1EnumSnappedWindows@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ??1ProcessView@CSnapComponentTelemetry@@QEAA@XZ @ 0x180598B98 (--1ProcessView@CSnapComponentTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1802DEE4C (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ??1?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1804BBFDC (--1-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@_ea_1804BBFDC.c)
 */

void __fastcall wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rcx
  void *v4; // rbx
  HANDLE ProcessHeap; // rax
  char *v6; // rbx
  void *v7; // rbx
  HANDLE v8; // rax
  _QWORD *v9; // rax

  v2 = *(volatile signed __int32 **)(a1 + 312);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v6 = *(char **)(a1 + 312);
      if ( v6 )
      {
        wil::ActivityBase<WindowManagementLogging,1,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>(v6 + 8);
        operator delete(v6, 0x108uLL);
      }
    }
    *(_QWORD *)(a1 + 312) = 0LL;
  }
  v3 = *(volatile signed __int32 **)(a1 + 288);
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3, 0xFFFFFFFF) == 1 )
    {
      v4 = *(void **)(a1 + 288);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v4);
    }
    *(_QWORD *)(a1 + 288) = 0LL;
    *(_QWORD *)(a1 + 296) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 120) )
  {
    v7 = *(void **)(a1 + 112);
    v8 = GetProcessHeap();
    HeapFree(v8, 0, v7);
    *(_BYTE *)(a1 + 120) = 0;
  }
  *(_QWORD *)(a1 + 112) = 0LL;
  if ( *(_DWORD *)(a1 + 56) == 1 )
  {
    *(_DWORD *)(a1 + 56) = 2;
    v9 = wil::details::static_lazy<WindowManagementLogging>::get(
           (__int64)v3,
           _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    _tlgWriteActivityAutoStop<0,5>(v9[1], a1 + 64);
  }
  *(_DWORD *)(a1 + 56) = 3;
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}

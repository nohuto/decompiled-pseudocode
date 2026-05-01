/*
 * XREFs of ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800529E8
 * Callers:
 *     ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1800525BC (-_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCo.c)
 *     ?StartActivity@FSMSetSystemOverlaysMode@FullScreenManagerTelemetry@@QEAAXPEAUIImmersiveApplication@@W4FULL_SCREEN_OVERLAYS@@@Z @ 0x1803235D4 (-StartActivity@FSMSetSystemOverlaysMode@FullScreenManagerTelemetry@@QEAAXPEAUIImmersiveApplicati.c)
 *     ?StartActivity@DragSwitchItem@MultitaskingViewTelemetry@@QEAAXXZ @ 0x1804D85A0 (-StartActivity@DragSwitchItem@MultitaskingViewTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@WindowArrangementMouseProcessingCritical@CSnapComponentTelemetry@@QEAAXXZ @ 0x180596630 (-StartActivity@WindowArrangementMouseProcessingCritical@CSnapComponentTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@WindowArrangementMouseProcessingRelaxed@CSnapComponentTelemetry@@QEAAXXZ @ 0x1805966DC (-StartActivity@WindowArrangementMouseProcessingRelaxed@CSnapComponentTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@SnapAssistProcessing@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18059CF20 (-StartActivity@SnapAssistProcessing@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@W4WINDOW.c)
 *     ?StartActivity@SnapAssistTabletModeProcessing@CSnapComponentTelemetry@@QEAAXXZ @ 0x18059D23C (-StartActivity@SnapAssistTabletModeProcessing@CSnapComponentTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAXXZ @ 0x1805AA5C0 (-StartActivity@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@WindowArrangementHotkeyProcessing@CSnapComponentTelemetry@@QEAAXXZ @ 0x1805AA66C (-StartActivity@WindowArrangementHotkeyProcessing@CSnapComponentTelemetry@@QEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000F0FC (-LockExclusive@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  _DWORD *v4; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    (__int64)&v6);
  v2 = *(_QWORD *)(a1 + 48);
  v4 = *(_DWORD **)(wil::details::static_lazy<WindowManagementLogging>::get(
                      v3,
                      _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v4 > 5u && (unsigned __int8)tlgKeywordOn(v4, 0x200000000000LL) )
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  else
    *(_OWORD *)(v2 + 8) = 0LL;
  *(_DWORD *)v2 = 1;
  return wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v6);
}

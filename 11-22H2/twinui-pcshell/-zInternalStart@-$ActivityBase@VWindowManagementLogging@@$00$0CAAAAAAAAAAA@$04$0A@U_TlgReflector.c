/*
 * XREFs of ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18004C234
 * Callers:
 *     ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x18004B610 (-_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCo.c)
 *     ?StartActivity@DragSwitchItem@MultitaskingViewTelemetry@@QEAAXXZ @ 0x1805903D4 (-StartActivity@DragSwitchItem@MultitaskingViewTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@SnapAssistProcessing@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18066BDB8 (-StartActivity@SnapAssistProcessing@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@W4WINDOW.c)
 *     ?StartActivity@SnapAssistTabletModeProcessing@CSnapComponentTelemetry@@QEAAXXZ @ 0x18066C0D0 (-StartActivity@SnapAssistTabletModeProcessing@CSnapComponentTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAXXZ @ 0x1806771A0 (-StartActivity@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@WindowArrangementHotkeyProcessing@CSnapComponentTelemetry@@QEAAXXZ @ 0x180677244 (-StartActivity@WindowArrangementHotkeyProcessing@CSnapComponentTelemetry@@QEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800B0834 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 */

void __fastcall wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  _DWORD *v4; // rcx
  RTL_SRWLOCK *v5; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v2 = *(_QWORD *)(a1 + 48);
  v4 = *(_DWORD **)(wil::details::static_lazy<WindowManagementLogging>::get(
                      v3,
                      _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v4 > 5u && (unsigned __int8)tlgKeywordOn(v4, 0x200000000000LL) )
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  else
    *(_OWORD *)(v2 + 8) = 0LL;
  v5 = SRWLock;
  *(_DWORD *)v2 = 1;
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
}

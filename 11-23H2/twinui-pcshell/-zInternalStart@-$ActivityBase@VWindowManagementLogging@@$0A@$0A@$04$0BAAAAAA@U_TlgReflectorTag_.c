/*
 * XREFs of ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1805E6174
 * Callers:
 *     ??$?0$$V@CalculateSecondaryViews@JointResizeTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1805DFF28 (--$-0$$V@CalculateSecondaryViews@JointResizeTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 *     ??$?0AEAH@GetAndDeleteSnapId@CSnapComponentTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@AEAH@Z @ 0x18065CB4C (--$-0AEAH@GetAndDeleteSnapId@CSnapComponentTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@AEA.c)
 *     ?StartActivity@CreateSnapId@CSnapComponentTelemetry@@QEAAXAEBURect@Foundation@Windows@@@Z @ 0x180663AB8 (-StartActivity@CreateSnapId@CSnapComponentTelemetry@@QEAAXAEBURect@Foundation@Windows@@@Z.c)
 *     ?StartActivity@OnArrangementReset@WindowDragInputProviderTelemetry@@QEAAXAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x18068BF84 (-StartActivity@OnArrangementReset@WindowDragInputProviderTelemetry@@QEAAXAEBUPoint@Foundation@Wi.c)
 *     ?StartActivity@OnGetArrangementRects@WindowDragInputProviderTelemetry@@QEAAXAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x18068C058 (-StartActivity@OnGetArrangementRects@WindowDragInputProviderTelemetry@@QEAAXAEBUPoint@Foundation.c)
 *     ?StartActivity@SnapFlyoutInstance_GetDisplayRegion@SnapFlyoutTelemetry@@QEAAXPEAUHMONITOR__@@AEBURect@Foundation@Windows@winrt@@@Z @ 0x18069185C (-StartActivity@SnapFlyoutInstance_GetDisplayRegion@SnapFlyoutTelemetry@@QEAAXPEAUHMONITOR__@@AEB.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?LockExclusive@?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1802D0954 (-LockExclusive@-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04.c)
 */

void __fastcall wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  RTL_SRWLOCK *v4; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v2 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                    v3,
                    (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1] <= 5u )
    *(_OWORD *)(v2 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  v4 = SRWLock;
  *(_DWORD *)v2 = 1;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}

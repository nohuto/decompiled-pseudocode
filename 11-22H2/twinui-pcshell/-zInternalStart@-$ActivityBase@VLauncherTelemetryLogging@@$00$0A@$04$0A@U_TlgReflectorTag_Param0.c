/*
 * XREFs of ?zInternalStart@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800F4BC0
 * Callers:
 *     ??$?0$$V@PerformDelayedInitialization@StartWindowTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1800F3A90 (--$-0$$V@PerformDelayedInitialization@StartWindowTelemetry@@AEAA@U-$integral_constant@D$0A@@wist.c)
 *     ??$?0$$V@UnsubscribeFromServices@StartWindowTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1800F57B4 (--$-0$$V@UnsubscribeFromServices@StartWindowTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 *     ??$?0$$V@SubscribeToServices@StartWindowTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180105328 (--$-0$$V@SubscribeToServices@StartWindowTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 *     ??$?0$$V@CreateHoldingTankWindow@StartWindowTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180503128 (--$-0$$V@CreateHoldingTankWindow@StartWindowTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 *     ??$?0$$V@DestroyHoldingTankWindow@StartWindowTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1805031D8 (--$-0$$V@DestroyHoldingTankWindow@StartWindowTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800B0834 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?get@?$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6AXXZ@Z @ 0x1800BC6C8 (-get@-$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6.c)
 */

void __fastcall wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  RTL_SRWLOCK *v4; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v2 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)wil::details::static_lazy<LauncherTelemetryLogging>::get(
                    v3,
                    (void (__cdecl *)())_lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_)[1] <= 5u )
    *(_OWORD *)(v2 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  v4 = SRWLock;
  *(_DWORD *)v2 = 1;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}

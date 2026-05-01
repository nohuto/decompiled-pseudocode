/*
 * XREFs of ?zInternalStart@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800C5A90
 * Callers:
 *     ?GetMonitor@XamlLauncher@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x1800C5880 (-GetMonitor@XamlLauncher@@UEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?StartActivity@PerformDelayedInitialization@StartWindowTelemetry@@QEAAXXZ @ 0x1800C8204 (-StartActivity@PerformDelayedInitialization@StartWindowTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@SubscribeToServices@StartWindowTelemetry@@QEAAXXZ @ 0x1800C829C (-StartActivity@SubscribeToServices@StartWindowTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@UnsubscribeFromServices@StartWindowTelemetry@@QEAAXXZ @ 0x18015D46C (-StartActivity@UnsubscribeFromServices@StartWindowTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@CreateHoldingTankWindow@StartWindowTelemetry@@QEAAXXZ @ 0x18044D5E8 (-StartActivity@CreateHoldingTankWindow@StartWindowTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@DestroyHoldingTankWindow@StartWindowTelemetry@@QEAAXXZ @ 0x18044D680 (-StartActivity@DestroyHoldingTankWindow@StartWindowTelemetry@@QEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800730FC (-LockExclusive@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?get@?$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6AXXZ@Z @ 0x1800C5AFC (-get@-$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6.c)
 */

void __fastcall wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v2 = *(_QWORD *)(a1 + 48);
  if ( **(_DWORD **)(wil::details::static_lazy<LauncherTelemetryLogging>::get(
                       v3,
                       _lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_,
                       v4)
                   + 8) <= 5u )
    *(_OWORD *)(v2 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  *(_DWORD *)v2 = 1;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}

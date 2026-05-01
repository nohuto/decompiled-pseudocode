/*
 * XREFs of ?zInternalStop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180046C44
 * Callers:
 *     ?StopActivity@LauncherInvokeActivity@CommonStartTelemetry@@MEAAXXZ @ 0x180046970 (-StopActivity@LauncherInvokeActivity@CommonStartTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@Reactivate@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x18004C910 (-StopActivity@Reactivate@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@CortanaLauncherInvokeActivity@StartWindowTelemetry@@MEAAXXZ @ 0x18044C100 (-StopActivity@CortanaLauncherInvokeActivity@StartWindowTelemetry@@MEAAXXZ.c)
 *     ?Stop@LauncherTipContextMenuExecuteShutdownCommand@LauncherTipContextMenuTelemetry@@QEAAXI@Z @ 0x1805DA3F8 (-Stop@LauncherTipContextMenuExecuteShutdownCommand@LauncherTipContextMenuTelemetry@@QEAAXI@Z.c)
 *     ?StopActivity@LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@MEAAXXZ @ 0x1805DA660 (-StopActivity@LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@LauncherTipContextMenuExecuteShutdownCommand@LauncherTipContextMenuTelemetry@@MEAAXXZ @ 0x1805DA8A0 (-StopActivity@LauncherTipContextMenuExecuteShutdownCommand@LauncherTipContextMenuTelemetry@@MEAA.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180046DD0 (-LockExclusive@-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflector.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 */

__int64 __fastcall wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(
        __int64 a1)
{
  char v3; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &v3);
  **(_DWORD **)(a1 + 48) = 2;
  return wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v3);
}

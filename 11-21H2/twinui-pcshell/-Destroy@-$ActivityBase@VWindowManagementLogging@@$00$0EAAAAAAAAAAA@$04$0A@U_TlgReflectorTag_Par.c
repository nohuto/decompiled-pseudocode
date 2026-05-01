/*
 * XREFs of ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18000F3F8
 * Callers:
 *     ??1DismissMultitaskingView@MultitaskingViewTelemetry@@QEAA@XZ @ 0x18000F330 (--1DismissMultitaskingView@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ??1FSMEnterFullScreenForView@FullScreenManagerTelemetry@@QEAA@XZ @ 0x180321C08 (--1FSMEnterFullScreenForView@FullScreenManagerTelemetry@@QEAA@XZ.c)
 *     ??1FSMExitFullScreenForView@FullScreenManagerTelemetry@@QEAA@XZ @ 0x180321C34 (--1FSMExitFullScreenForView@FullScreenManagerTelemetry@@QEAA@XZ.c)
 *     ??1ShowAltTab@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1804A15AC (--1ShowAltTab@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ??1ShowSnapAssist@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1804A3878 (--1ShowSnapAssist@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ??1ShowPPIAllUpView@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1804A5894 (--1ShowPPIAllUpView@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ??1ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAA@XZ @ 0x1804EA650 (--1ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAA@XZ.c)
 *     ??1TMChangeHandler@ShellPositionerTelemetry@@QEAA@XZ @ 0x1804EA6A8 (--1TMChangeHandler@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ??1AppToAppSwitch@TabletModeTelemetry@@QEAA@XZ @ 0x1804FFEEC (--1AppToAppSwitch@TabletModeTelemetry@@QEAA@XZ.c)
 *     ??1WindowArrangementView_Show@TabletModeTelemetry@@QEAA@XZ @ 0x18050AB78 (--1WindowArrangementView_Show@TabletModeTelemetry@@QEAA@XZ.c)
 *     ??1TMAppArrange@TabletModeTelemetry@@QEAA@XZ @ 0x180518550 (--1TMAppArrange@TabletModeTelemetry@@QEAA@XZ.c)
 *     ??1TMAppResize@TabletModeTelemetry@@QEAA@XZ @ 0x18051DFD4 (--1TMAppResize@TabletModeTelemetry@@QEAA@XZ.c)
 *     ??1OnSnappingCancelled@CSnapComponentTelemetry@@QEAA@XZ @ 0x180591D5C (--1OnSnappingCancelled@CSnapComponentTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000F0FC (-LockExclusive@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180044398 (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProvi.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetStopResult@?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x180323004 (-SetStopResult@-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsP_ea_180323004.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(
        _QWORD *a1)
{
  char v2; // si
  _QWORD *v3; // rdi
  _DWORD *v4; // rcx
  int v5; // eax
  __int64 v6; // rdx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 1;
  v3 = a1 + 39;
  if ( !a1[39] )
    goto LABEL_2;
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    (__int64)&v7);
  if ( !*v3 || *(_DWORD *)*v3 != 1 )
  {
    v2 = 0;
    wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v3);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v7);
  if ( v2 )
  {
LABEL_2:
    v4 = (_DWORD *)a1[6];
    if ( *v4 == 1 )
    {
      v5 = v4[22];
      v7 = v5;
      v6 = 2147942974LL;
      if ( v5 < 0 )
        v6 = (unsigned int)v5;
      wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v4,
        v6,
        &v7);
      (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    }
  }
}

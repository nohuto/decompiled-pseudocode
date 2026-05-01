/*
 * XREFs of ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180052854
 * Callers:
 *     ??1CreateMultitaskingViewHost@MultitaskingViewTelemetry@@QEAA@XZ @ 0x18005278C (--1CreateMultitaskingViewHost@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ??1FSMSetSystemOverlaysMode@FullScreenManagerTelemetry@@QEAA@XZ @ 0x180321C60 (--1FSMSetSystemOverlaysMode@FullScreenManagerTelemetry@@QEAA@XZ.c)
 *     ??1DragSwitchItem@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1804D7360 (--1DragSwitchItem@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ??1WindowArrangementMouseProcessingCritical@CSnapComponentTelemetry@@QEAA@XZ @ 0x180591EB8 (--1WindowArrangementMouseProcessingCritical@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ??1WindowArrangementMouseProcessingRelaxed@CSnapComponentTelemetry@@QEAA@XZ @ 0x180591EE4 (--1WindowArrangementMouseProcessingRelaxed@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ??1SnapAssistProcessing@CSnapComponentTelemetry@@QEAA@XZ @ 0x18059B770 (--1SnapAssistProcessing@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ??1SnapAssistTabletModeProcessing@CSnapComponentTelemetry@@QEAA@XZ @ 0x18059B79C (--1SnapAssistTabletModeProcessing@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ??1WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAA@XZ @ 0x1805A90AC (--1WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ??1WindowArrangementHotkeyProcessing@CSnapComponentTelemetry@@QEAA@XZ @ 0x1805A90D8 (--1WindowArrangementHotkeyProcessing@CSnapComponentTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000F0FC (-LockExclusive@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800443C4 (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag__ea_1800443C4.c)
 *     ?SetStopResult@?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800529A4 (-SetStopResult@-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(
        volatile signed __int32 **a1)
{
  char v2; // si
  volatile signed __int32 **v3; // rdi
  volatile signed __int32 *v4; // rcx
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
  if ( !*v3 || **v3 != 1 )
  {
    v2 = 0;
    wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v3);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v7);
  if ( v2 )
  {
LABEL_2:
    v4 = a1[6];
    if ( *v4 == 1 )
    {
      v5 = *((_DWORD *)v4 + 22);
      v7 = v5;
      v6 = 2147942974LL;
      if ( v5 < 0 )
        v6 = (unsigned int)v5;
      wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v4,
        v6,
        &v7);
      (*((void (__fastcall **)(volatile signed __int32 **))*a1 + 1))(a1);
    }
  }
}

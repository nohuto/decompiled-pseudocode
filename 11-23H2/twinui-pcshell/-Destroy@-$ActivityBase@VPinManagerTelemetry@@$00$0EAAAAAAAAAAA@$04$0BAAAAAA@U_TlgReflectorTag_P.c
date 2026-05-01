/*
 * XREFs of ?Destroy@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1806A0C64
 * Callers:
 *     ??1PinManagerIsItemPinned@PinManagerTelemetry@@QEAA@XZ @ 0x18069ECA0 (--1PinManagerIsItemPinned@PinManagerTelemetry@@QEAA@XZ.c)
 *     ??1PinManagerIsPinAllowed@PinManagerTelemetry@@QEAA@XZ @ 0x18069ECCC (--1PinManagerIsPinAllowed@PinManagerTelemetry@@QEAA@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?LockExclusive@?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1802D0954 (-LockExclusive@-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04.c)
 *     ?SetUnhandledException@?$ActivityData@VPinManagerTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAJXZ @ 0x1806A5788 (-SetUnhandledException@-$ActivityData@VPinManagerTelemetry@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?reset@?$shared_object@V?$ActivityData@VPinManagerTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1806AA124 (-reset@-$shared_object@V-$ActivityData@VPinManagerTelemetry@@U_TlgReflectorTag_Param0IsProviderT.c)
 */

void __fastcall wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(
        __int64 a1)
{
  _QWORD *v1; // rdi
  char v3; // si
  PSRWLOCK SRWLock; // [rsp+20h] [rbp-18h] BYREF

  v1 = (_QWORD *)(a1 + 312);
  v3 = 1;
  if ( !*(_QWORD *)(a1 + 312) )
    goto LABEL_8;
  SRWLock = 0LL;
  wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  if ( !*v1 || *(_DWORD *)*v1 != 1 )
  {
    v3 = 0;
    wil::details::shared_object<wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<PinManagerTelemetry,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v3 )
  {
LABEL_8:
    if ( **(_DWORD **)(a1 + 48) == 1 )
    {
      wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<PinManagerTelemetry,_TlgReflectorTag_Param0IsProviderType>::SetUnhandledException();
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    }
  }
}

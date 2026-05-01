/*
 * XREFs of ?Destroy@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007BC88
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_829df63d4f4da6954880c71339f9350f___::_scalar_deleting_destructor_ @ 0x18007B310 (CAsyncCallbackWithLambda__lambda_829df63d4f4da6954880c71339f9350f___--_scalar_deleting_destructo.c)
 *     _lambda_4181134c5161f261fff3e61f273c9fd8_::__lambda_4181134c5161f261fff3e61f273c9fd8_ @ 0x18007B4F8 (_lambda_4181134c5161f261fff3e61f273c9fd8_--__lambda_4181134c5161f261fff3e61f273c9fd8_.c)
 *     ??1RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAA@XZ @ 0x18030FC3C (--1RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAA@XZ.c)
 * Callees:
 *     ?reset@?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180130774 (-reset@-$shared_object@V-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Para.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetStopResult@?$ActivityData@VHolographicPositionerProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x18022A4D4 (-SetStopResult@-$ActivityData@VHolographicPositionerProvider@@U_TlgReflectorTag_Param0IsProvider.c)
 */

void __fastcall wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(
        _QWORD *a1)
{
  char v2; // bp
  _QWORD *v3; // rdi
  RTL_SRWLOCK *v4; // rbx
  RTL_SRWLOCK *v5; // rbx
  _DWORD *v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = 1;
  v3 = a1 + 39;
  v4 = (RTL_SRWLOCK *)a1[39];
  if ( !v4 )
    goto LABEL_7;
  v5 = v4 + 32;
  AcquireSRWLockExclusive(v5);
  if ( !*v3 || *(_DWORD *)*v3 != 1 )
  {
    v2 = 0;
    wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v3);
  }
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  if ( v2 )
  {
LABEL_7:
    v6 = (_DWORD *)a1[6];
    if ( *v6 == 1 )
    {
      v7 = v6[22];
      v9 = v7;
      v8 = 2147942974LL;
      if ( v7 < 0 )
        v8 = (unsigned int)v7;
      wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicPositionerProvider,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v6,
        v8,
        &v9);
      (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    }
  }
}

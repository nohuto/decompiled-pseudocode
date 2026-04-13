/*
 * XREFs of ??1ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18007E3F4
 * Callers:
 *     _lambda_64334da26fc4dbc2a9fcd40835aea43a_::operator() @ 0x18007EE70 (_lambda_64334da26fc4dbc2a9fcd40835aea43a_--operator().c)
 *     __lambda_64334da26fc4dbc2a9fcd40835aea43a_::operator()_::_1_::dtor$3 @ 0x1800F181A (__lambda_64334da26fc4dbc2a9fcd40835aea43a_--operator()_--_1_--dtor$3.c)
 * Callees:
 *     memset_0 @ 0x18002245D (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1800474D8 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800603B8 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     ??1?$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18007D8AC (--1-$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@_ea_18007D8AC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity::~ActionInvokedActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity *this)
{
  char v2; // si
  volatile signed __int32 *v3; // rcx
  void *v4; // rdi
  _DWORD *v5; // rcx
  int v6; // eax
  int v7; // edx
  const struct wil::FailureInfo *v8; // rdx
  _BYTE v9[160]; // [rsp+20h] [rbp-A8h] BYREF
  PSRWLOCK SRWLock; // [rsp+D0h] [rbp+8h] BYREF

  *(_QWORD *)this = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity::`vftable';
  v2 = 1;
  if ( !*((_QWORD *)this + 39) )
    goto LABEL_12;
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v3 = (volatile signed __int32 *)*((_QWORD *)this + 39);
  if ( !v3 || *v3 != 1 )
  {
    v2 = 0;
    if ( v3 )
    {
      if ( _InterlockedExchangeAdd(v3, 0xFFFFFFFF) == 1 )
      {
        v4 = (void *)*((_QWORD *)this + 39);
        if ( v4 )
        {
          wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v4 + 8);
          operator delete(v4);
        }
      }
      *((_QWORD *)this + 39) = 0LL;
    }
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v2 )
  {
LABEL_12:
    v5 = (_DWORD *)*((_QWORD *)this + 6);
    if ( *v5 == 1 )
    {
      v6 = -2147024322;
      if ( (int)v5[22] < 0 )
        v6 = v5[22];
      v7 = v5[18];
      if ( v7 < 1 )
      {
        memset_0(v9, 0, 0x98uLL);
        wil::details::WilFailFast((wil::details *)v9, v8);
      }
      if ( (int)v5[19] >= 0 )
        v5[19] = v6;
      v5[18] = v7 - 1;
      (*(void (__fastcall **)(ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity *))(*(_QWORD *)this + 8LL))(this);
    }
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

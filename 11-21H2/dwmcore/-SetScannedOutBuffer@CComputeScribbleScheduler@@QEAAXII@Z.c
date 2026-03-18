/*
 * XREFs of ?SetScannedOutBuffer@CComputeScribbleScheduler@@QEAAXII@Z @ 0x1801EA998
 * Callers:
 *     ?PreRender@CComputeScribbleRenderer@@QEAAJXZ @ 0x1801E46C8 (-PreRender@CComputeScribbleRenderer@@QEAAJXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002890C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 */

void __fastcall CComputeScribbleScheduler::SetScannedOutBuffer(RTL_SRWLOCK *this, int a2, int a3)
{
  RTL_SRWLOCK *v3; // rbx
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = this + 11;
  AcquireSRWLockExclusive(this + 11);
  v7 = v3;
  LODWORD(this[22].Ptr) = a3 - a2;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v7);
}

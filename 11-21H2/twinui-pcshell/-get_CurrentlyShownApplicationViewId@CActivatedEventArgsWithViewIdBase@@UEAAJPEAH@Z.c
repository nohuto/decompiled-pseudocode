/*
 * XREFs of ?get_CurrentlyShownApplicationViewId@CActivatedEventArgsWithViewIdBase@@UEAAJPEAH@Z @ 0x18017BA20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActivatedEventArgsWithViewIdBase::get_CurrentlyShownApplicationViewId(RTL_SRWLOCK *this, int *a2)
{
  RTL_SRWLOCK *v4; // rbx
  RTL_SRWLOCK *v6; // [rsp+30h] [rbp+8h] BYREF

  v4 = this + 7;
  AcquireSRWLockShared(this + 7);
  v6 = v4;
  *a2 = (int)this[-7].Ptr;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v6);
  return 0LL;
}

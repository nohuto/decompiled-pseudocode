/*
 * XREFs of ?GetOpacity@CHolographicExclusiveMode@@UEAAMXZ @ 0x180298990
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18017777C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 */

float __fastcall CHolographicExclusiveMode::GetOpacity(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbx
  float v3; // xmm6_4
  RTL_SRWLOCK *v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = this + 2;
  AcquireSRWLockShared(this + 2);
  v3 = *((float *)&this[4].Ptr + 1);
  v5 = v1;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v5);
  return v3;
}

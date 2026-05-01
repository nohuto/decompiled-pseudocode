/*
 * XREFs of ?FindBufferItem@CAppLayout@@UEAAJPEAPEAUIAppLayoutItem@@PEAI@Z @ 0x180616800
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?_FindBufferItem@CAppLayout@@AEAAJPEAPEAUIAppLayoutItem@@PEAI@Z @ 0x1806187C8 (-_FindBufferItem@CAppLayout@@AEAAJPEAPEAUIAppLayoutItem@@PEAI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::FindBufferItem(RTL_SRWLOCK *this, struct IAppLayoutItem **a2, unsigned int *a3)
{
  RTL_SRWLOCK *v6; // rbx
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF

  v6 = this + 2;
  AcquireSRWLockShared(this + 2);
  v8 = v6;
  LODWORD(v6) = CAppLayout::_FindBufferItem((CAppLayout *)&this[-5], a2, a3);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v8);
  return (unsigned int)v6;
}

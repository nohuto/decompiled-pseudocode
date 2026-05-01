/*
 * XREFs of ?IsEmpty@CAppLayout@@UEAAHXZ @ 0x180617200
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::IsEmpty(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rbx
  unsigned int v3; // ebx
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = this + 2;
  AcquireSRWLockShared(this + 2);
  v5 = v2;
  v3 = 0;
  if ( !this[9].Ptr
    || this[9].Ptr == (PVOID)1
    && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)this[8].Ptr + 24LL))(*(_QWORD *)this[8].Ptr) == 4 )
  {
    v3 = 1;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v5);
  return v3;
}

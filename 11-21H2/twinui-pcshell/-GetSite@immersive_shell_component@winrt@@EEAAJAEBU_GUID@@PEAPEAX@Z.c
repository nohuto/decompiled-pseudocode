/*
 * XREFs of ?GetSite@immersive_shell_component@winrt@@EEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803B5800
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     _guard_dispatch_icall_nop @ 0x1801EAD20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::immersive_shell_component::GetSite(RTL_SRWLOCK *this, const struct _GUID *a2, void **a3)
{
  RTL_SRWLOCK *v6; // rbx
  PVOID Ptr; // rcx
  int v8; // ebx
  RTL_SRWLOCK *v10; // [rsp+30h] [rbp+8h] BYREF

  v6 = this + 10;
  AcquireSRWLockShared(this + 10);
  v10 = v6;
  Ptr = this[9].Ptr;
  if ( Ptr )
  {
    v8 = (*(__int64 (__fastcall **)(PVOID, const struct _GUID *, void **))(*(_QWORD *)Ptr + 24LL))(Ptr, a2, a3);
    if ( v8 < 0 )
      goto LABEL_6;
  }
  else
  {
    *a3 = 0LL;
  }
  v8 = 0;
LABEL_6:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v10);
  return (unsigned int)v8;
}

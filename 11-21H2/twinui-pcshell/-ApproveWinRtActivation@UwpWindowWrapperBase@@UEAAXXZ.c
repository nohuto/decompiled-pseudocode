/*
 * XREFs of ?ApproveWinRtActivation@UwpWindowWrapperBase@@UEAAXXZ @ 0x180414040
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ @ 0x180414714 (-CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UwpWindowWrapperBase::ApproveWinRtActivation(UwpWindowWrapperBase *this)
{
  char *v2; // rdi
  RTL_SRWLOCK *v3; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 32) + 208LL))(*((_QWORD *)this + 32), &v3);
  *((_BYTE *)this + 548) = 0;
  v2 = (char *)this - 16;
  if ( *((_DWORD *)this + 68) )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 224LL))((char *)this - 16);
  UwpWindowWrapperBase::CommitImportanceVector((UwpWindowWrapperBase *)((char *)this - 16));
  (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 248LL))((char *)this - 16);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v3);
}

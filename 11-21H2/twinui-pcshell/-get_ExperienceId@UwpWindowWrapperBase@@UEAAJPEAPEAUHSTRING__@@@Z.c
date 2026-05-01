/*
 * XREFs of ?get_ExperienceId@UwpWindowWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180419200
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_55513a40ec08ffda6c307612d9945504___ @ 0x18040FAA8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_55513a40ec08ffda6c307612d9945504.c)
 */

__int64 __fastcall UwpWindowWrapperBase::get_ExperienceId(UwpWindowWrapperBase *this, HSTRING *a2)
{
  UwpWindowWrapperBase *v2; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  RTL_SRWLOCK *v7; // [rsp+40h] [rbp+8h] BYREF
  HSTRING *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v2 = this;
  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 33) + 216LL))(*((_QWORD *)this + 33), &v7);
  *(_QWORD *)&v6 = (char *)v2 - 8;
  *((_QWORD *)&v6 + 1) = &v8;
  CurrentThreadId = GetCurrentThreadId();
  LODWORD(v2) = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_55513a40ec08ffda6c307612d9945504___(
                  v4,
                  CurrentThreadId,
                  &v6);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v7);
  return (unsigned int)v2;
}

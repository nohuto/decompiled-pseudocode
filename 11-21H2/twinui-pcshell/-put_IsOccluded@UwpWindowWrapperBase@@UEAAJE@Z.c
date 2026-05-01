/*
 * XREFs of ?put_IsOccluded@UwpWindowWrapperBase@@UEAAJE@Z @ 0x18041A0D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_d3ff8420f9d0990347eff683fb5dd9d1___ @ 0x180410934 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_d3ff8420f9d0990347eff683fb5dd9d1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowWrapperBase::put_IsOccluded(UwpWindowWrapperBase *this, char a2)
{
  __int64 v3; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v5; // ecx
  int v6; // eax
  const char *v7; // r9
  __int64 result; // rax
  int v9[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v11; // [rsp+40h] [rbp+8h] BYREF
  char v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v3 = *((_QWORD *)this + 33);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 208LL))(v3);
    if ( (v12 != 0) != *((_BYTE *)this + 161) )
    {
      *(_QWORD *)v9 = (char *)this - 8;
      *(_QWORD *)&v9[2] = &v12;
      CurrentThreadId = GetCurrentThreadId();
      v6 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_d3ff8420f9d0990347eff683fb5dd9d1___(
             v5,
             CurrentThreadId,
             v9);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x4D5,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)v6,
          v9[0]);
      *((_BYTE *)this + 161) = v12 != 0;
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4DC,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v7);
  }
  return result;
}

/*
 * XREFs of ?SetIsDismissed@UwpWindowWrapper@@UEAAJE@Z @ 0x1804063D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_e1da1a01acfdad050dadd380e5e9c153___ @ 0x180404FA0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_e1da1a01acfdad050dadd380e5e9c153.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowWrapper::SetIsDismissed(UwpWindowWrapper *this, char a2)
{
  __int64 v4; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // ecx
  int v7; // eax
  const char *v8; // r9
  __int64 result; // rax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v12; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v13; // [rsp+40h] [rbp+18h] BYREF

  v4 = *((_QWORD *)this - 39);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 208LL))(v4);
    if ( a2 != *((_BYTE *)this + 32) )
    {
      *((_BYTE *)this + 32) = a2;
      if ( *((_QWORD *)this - 38) )
      {
        if ( a2 )
        {
          v12 = (char *)this - 592;
          CurrentThreadId = GetCurrentThreadId();
          v7 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_e1da1a01acfdad050dadd380e5e9c153___(
                 v6,
                 CurrentThreadId,
                 &v12);
          if ( v7 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x4D,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
              (const char *)(unsigned int)v7,
              v10);
        }
      }
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v13);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x52,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
                           v8);
  }
  return result;
}

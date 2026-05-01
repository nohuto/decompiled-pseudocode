/*
 * XREFs of ?SetIsDismissed@WindowWrapper@@UEAAJE@Z @ 0x18002D1B0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_e8838413ede5bd20b829d342239a0037___ @ 0x18002D258 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_e8838413ede5bd20b829d342239a0037.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapper::SetIsDismissed(WindowWrapper *this, char a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v5; // rcx
  int v6; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v10; // [rsp+30h] [rbp+8h] BYREF
  char v11; // [rsp+40h] [rbp+18h] BYREF

  (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this - 39) + 200LL))(*((_QWORD *)this - 39), &v11);
  if ( a2 != *((_BYTE *)this + 40) )
  {
    *((_BYTE *)this + 40) = a2;
    if ( *((_QWORD *)this - 38) )
    {
      if ( a2 )
      {
        v10 = (char *)this - 600;
        CurrentThreadId = GetCurrentThreadId();
        v6 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_e8838413ede5bd20b829d342239a0037___(
               v5,
               CurrentThreadId,
               &v10);
        if ( v6 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x4B,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
            (const char *)(unsigned int)v6,
            v8);
      }
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v11);
  return 0LL;
}

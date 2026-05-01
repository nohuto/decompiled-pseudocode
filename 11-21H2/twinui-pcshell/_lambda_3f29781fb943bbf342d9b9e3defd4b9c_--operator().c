/*
 * XREFs of _lambda_3f29781fb943bbf342d9b9e3defd4b9c_::operator() @ 0x18012F7D8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_3f29781fb943bbf342d9b9e3defd4b9c___::Run @ 0x18012F7B0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_3f29781fb943bbf342d9b9e3defd4b9c___--.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x180090920 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 *     ??$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z @ 0x18012F8E4 (--$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_3f29781fb943bbf342d9b9e3defd4b9c_::operator()(__int64 *a1)
{
  __int64 v2; // rcx
  const char *v3; // r9
  __int64 v4; // rcx
  int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v8; // [rsp+40h] [rbp+8h] BYREF
  bool v9; // [rsp+48h] [rbp+10h] BYREF
  int v10; // [rsp+50h] [rbp+18h] BYREF
  RTL_SRWLOCK *v11; // [rsp+58h] [rbp+20h] BYREF

  try
  {
    (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**(_QWORD **)(*a1 + 280) + 200LL))(*(_QWORD *)(*a1 + 280), &v11);
    LOBYTE(v8) = 1;
    v2 = *a1;
    v9 = (*(_DWORD *)(*a1 + 180) & 0x40) != 0;
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v2 + 16) + 288LL))(v2 + 16);
    ViewManagerInteropTraceLogging::ViewPriorityChanged<unsigned int,bool,bool>(&v10, &v9, &v8);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x823,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v3);
  }
  v4 = *a1;
  v5 = *(_DWORD *)(*a1 + 180) & 0x40;
  *(_DWORD *)(v4 + 180) = *(_DWORD *)(*a1 + 180) | 0xC0;
  if ( (*(_WORD *)(v4 + 252) & 0xC0) != 0xC0 )
  {
    *(_WORD *)(v4 + 252) |= 0xC0u;
    WindowWrapperBase::CommitImportanceVector((WindowWrapperBase *)v4);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v11);
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(*a1 + 280) + 232LL))(*(_QWORD *)(*a1 + 280), v5 != 0);
  return 0LL;
}

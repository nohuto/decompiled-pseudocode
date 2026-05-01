/*
 * XREFs of _lambda_16fabc5b2bb972ab3fdf76682bec0a78_::operator() @ 0x18012F698
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_16fabc5b2bb972ab3fdf76682bec0a78___::Run @ 0x18012F670 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_16fabc5b2bb972ab3fdf76682bec0a78___--.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x180090920 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 *     ??$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z @ 0x18012F8E4 (--$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_16fabc5b2bb972ab3fdf76682bec0a78_::operator()(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v5; // edi
  unsigned int v6; // edx
  __int16 v7; // ax
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v11; // [rsp+40h] [rbp+8h] BYREF
  bool v12; // [rsp+48h] [rbp+10h] BYREF
  int v13; // [rsp+50h] [rbp+18h] BYREF
  RTL_SRWLOCK *v14; // [rsp+58h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(*a1 + 280);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 200LL))(v2);
    v11 = 0;
    v3 = *a1;
    v12 = (*(_DWORD *)(*a1 + 180) & 0x40) != 0;
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 16) + 288LL))(v3 + 16);
    ViewManagerInteropTraceLogging::ViewPriorityChanged<unsigned int,bool,bool>(&v13, &v12, &v11);
    v4 = *a1;
    v5 = *(_DWORD *)(*a1 + 180) & 0x40;
    v6 = *(_DWORD *)(*a1 + 180) & 0xFFFFFFBF;
    *(_DWORD *)(v4 + 180) = v6;
    v7 = *(_WORD *)(v4 + 252);
    if ( (v7 & 0x40) != 0 && (v7 & 0x80u) != 0 && (v6 & 0x100) == 0 )
    {
      *(_WORD *)(v4 + 252) = v7 & 0xFFBF;
      WindowWrapperBase::CommitImportanceVector((WindowWrapperBase *)v4);
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v14);
    if ( v5 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 280) + 240LL))(*(_QWORD *)(*a1 + 280));
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x851,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v8);
  }
  return 0LL;
}

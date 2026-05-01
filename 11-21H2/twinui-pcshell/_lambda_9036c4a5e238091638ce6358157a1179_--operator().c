/*
 * XREFs of _lambda_9036c4a5e238091638ce6358157a1179_::operator() @ 0x1804123A4
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9036c4a5e238091638ce6358157a1179___::Run @ 0x1804169B0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_9036c4a5e238091638ce6358157a1179___--.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z @ 0x18012F8E4 (--$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ @ 0x180414714 (-CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_9036c4a5e238091638ce6358157a1179_::operator()(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int *v4; // rax
  __int64 v5; // rcx
  int v6; // edi
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+8h] BYREF
  bool v11; // [rsp+48h] [rbp+10h] BYREF
  char v12; // [rsp+50h] [rbp+18h] BYREF
  RTL_SRWLOCK *v13; // [rsp+58h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(*a1 + 272);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 208LL))(v2);
    LOBYTE(v10) = 1;
    v3 = *a1;
    v11 = (*(_DWORD *)(*a1 + 172) & 0x40) != 0;
    v4 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(v3 + 16) + 288LL))(v3 + 16, &v12);
    ViewManagerInteropTraceLogging::ViewPriorityChanged<unsigned int,bool,bool>(v4, (char *)&v11, (char *)&v10);
    v5 = *a1;
    v6 = *(_DWORD *)(*a1 + 172) & 0x40;
    *(_DWORD *)(v5 + 172) = *(_DWORD *)(*a1 + 172) | 0xC0;
    if ( (*(_WORD *)(v5 + 244) & 0xC0) != 0xC0 )
    {
      *(_WORD *)(v5 + 244) |= 0xC0u;
      UwpWindowWrapperBase::CommitImportanceVector((UwpWindowWrapperBase *)v5);
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v13);
    (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(*a1 + 272) + 240LL))(*(_QWORD *)(*a1 + 272), v6 != 0);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x8B9,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v7);
  }
  return 0LL;
}

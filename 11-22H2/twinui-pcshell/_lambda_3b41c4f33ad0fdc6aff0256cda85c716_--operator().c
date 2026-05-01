/*
 * XREFs of _lambda_3b41c4f33ad0fdc6aff0256cda85c716_::operator() @ 0x1804E63CC
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_3b41c4f33ad0fdc6aff0256cda85c716___::Run @ 0x1804EBAE0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_3b41c4f33ad0fdc6aff0256cda85c716___--.c)
 * Callees:
 *     ??$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z @ 0x18017DE98 (--$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x1804E96C4 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_3b41c4f33ad0fdc6aff0256cda85c716_::operator()(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v5; // esi
  unsigned int v6; // ebx
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+8h] BYREF
  bool v11; // [rsp+48h] [rbp+10h] BYREF
  int v12; // [rsp+50h] [rbp+18h] BYREF
  PSRWLOCK SRWLock; // [rsp+58h] [rbp+20h]

  v2 = *(_QWORD *)(*a1 + 280);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 200LL))(v2);
    LOBYTE(v10) = 1;
    v3 = *a1;
    v11 = (*(_DWORD *)(*a1 + 180) & 0x40) != 0;
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 16) + 288LL))(v3 + 16);
    ViewManagerInteropTraceLogging::ViewPriorityChanged<unsigned int,bool,bool>(&v12, (char *)&v11, (char *)&v10);
    v4 = *a1;
    v5 = *(_DWORD *)(*a1 + 180) & 0x40;
    *(_DWORD *)(v4 + 180) = *(_DWORD *)(*a1 + 180) | 0xC0;
    if ( (*(_WORD *)(v4 + 252) & 0xC0) != 0xC0 )
    {
      *(_WORD *)(v4 + 252) |= 0xC0u;
      WindowWrapperBase::CommitImportanceVector((WindowWrapperBase *)v4);
    }
    v6 = 0;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    LOBYTE(v6) = v5 != 0;
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 280) + 232LL))(*(_QWORD *)(*a1 + 280), v6);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x82C,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v7);
  }
  return 0LL;
}

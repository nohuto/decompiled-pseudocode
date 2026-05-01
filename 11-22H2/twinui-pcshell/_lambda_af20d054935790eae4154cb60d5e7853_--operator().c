/*
 * XREFs of _lambda_af20d054935790eae4154cb60d5e7853_::operator() @ 0x1801F8744
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_af20d054935790eae4154cb60d5e7853___::Run @ 0x1801F99B0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_af20d054935790eae4154cb60d5e7853___--.c)
 * Callees:
 *     ?CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ @ 0x1800C2CB4 (-CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800D246C (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z @ 0x18017DE98 (--$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_af20d054935790eae4154cb60d5e7853_::operator()(__int64 *a1)
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

  v2 = *(_QWORD *)(*a1 + 280);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 208LL))(v2);
    LOBYTE(v10) = 1;
    v3 = *a1;
    v11 = (*(_DWORD *)(*a1 + 180) & 0x40) != 0;
    v4 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(v3 + 16) + 288LL))(v3 + 16, &v12);
    ViewManagerInteropTraceLogging::ViewPriorityChanged<unsigned int,bool,bool>(v4, (char *)&v11, (char *)&v10);
    v5 = *a1;
    v6 = *(_DWORD *)(*a1 + 180) & 0x40;
    *(_DWORD *)(v5 + 180) = *(_DWORD *)(*a1 + 180) | 0xC0;
    if ( (*(_WORD *)(v5 + 252) & 0xC0) != 0xC0 )
    {
      *(_WORD *)(v5 + 252) |= 0xC0u;
      UwpWindowWrapperBase::CommitImportanceVector((UwpWindowWrapperBase *)v5);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v13);
    (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(*a1 + 280) + 240LL))(*(_QWORD *)(*a1 + 280), v6 != 0);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x8D3,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v7);
  }
  return 0LL;
}

/*
 * XREFs of _lambda_4122309344e4e7c73731f8f4010899dc_::operator() @ 0x18030D658
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4122309344e4e7c73731f8f4010899dc___::Run @ 0x18030D990 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4122309344e4e7c73731f8f4010899dc___--Run.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall lambda_4122309344e4e7c73731f8f4010899dc_::operator()(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rax
  int v4; // eax
  RTL_SRWLOCK *v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(v3 + 60) = *(_DWORD *)(a1 + 24);
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 120) + 160LL))(*(_QWORD *)(v3 + 120));
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6ED,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
        (const char *)(unsigned int)v4);
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 8) + 212LL);
  ReleaseSRWLockExclusive(v5);
}

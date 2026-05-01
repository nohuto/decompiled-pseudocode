/*
 * XREFs of _lambda_5dab257c522e08d01cbef6f530503167_::operator() @ 0x18015DB98
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d59b2ed99ba916e2db13f1aaa48dcee4___::Run @ 0x18015DB10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d59b2ed99ba916e2db13f1aaa48dcee4___--Run.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall lambda_5dab257c522e08d01cbef6f530503167_::operator()(_QWORD *a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*a1 + 120LL) + 80LL))(
         *(_QWORD *)(*a1 + 120LL),
         *a1 + 152LL);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x64D,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)(unsigned int)v2);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 224LL))(*a1);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
}

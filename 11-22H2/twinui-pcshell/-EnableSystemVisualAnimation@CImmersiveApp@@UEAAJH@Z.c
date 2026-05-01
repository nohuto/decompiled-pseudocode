/*
 * XREFs of ?EnableSystemVisualAnimation@CImmersiveApp@@UEAAJH@Z @ 0x1803C08D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::EnableSystemVisualAnimation(CImmersiveApp *this, int a2)
{
  RTL_SRWLOCK *v4; // rbx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = (*(__int64 (__fastcall **)(_QWORD, bool))(**((_QWORD **)this + 42) + 72LL))(*((_QWORD *)this + 42), a2 == 1);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x9DC,
      (int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)(unsigned int)v5);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}

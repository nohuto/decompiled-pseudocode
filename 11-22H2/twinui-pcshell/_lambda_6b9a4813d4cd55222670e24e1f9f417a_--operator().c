/*
 * XREFs of _lambda_6b9a4813d4cd55222670e24e1f9f417a_::operator() @ 0x1804E6C70
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6b9a4813d4cd55222670e24e1f9f417a___::Run @ 0x1804EBC00 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_6b9a4813d4cd55222670e24e1f9f417a___--.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ @ 0x1802D9002 (-PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ.c)
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x1804E96C4 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_6b9a4813d4cd55222670e24e1f9f417a_::operator()(__int64 a1)
{
  int v2; // edi
  int v3; // ebx
  char v4; // r15
  __int64 v5; // rcx
  const char *v6; // r9
  __int64 v7; // rcx
  HWND v8; // r14
  int v9; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+40h] [rbp+8h]

  v2 = **(_DWORD **)a1;
  v3 = 4;
  if ( v2 == 5 )
  {
    v4 = 1;
    v2 = 4;
  }
  else
  {
    v4 = 0;
  }
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 280LL);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 200LL))(v5);
    v7 = *(_QWORD *)(a1 + 8);
    v8 = (HWND)*(int *)(v7 + 296);
    v9 = *(_DWORD *)(v7 + 480);
    if ( v2 != v9 )
    {
      if ( !v9 )
      {
        if ( SRWLock )
          ReleaseSRWLockExclusive(SRWLock);
        return 2147947423LL;
      }
      *(_DWORD *)(v7 + 480) = v2;
      if ( (*(_BYTE *)(v7 + 356) & 4) == 0 )
      {
        if ( (unsigned int)(v2 - 4) > 1 )
          v3 = 2;
        if ( v3 != ((*(unsigned __int16 *)(v7 + 252) >> 1) & 7) )
        {
          *(_WORD *)(v7 + 252) = *(_WORD *)(v7 + 252) & 0xFFF1 | (2 * v3);
          WindowWrapperBase::CommitImportanceVector((WindowWrapperBase *)v7);
        }
      }
      WindowWrapperBase::PushDesiredNavigationLevelToDerivedClass(*(WindowWrapperBase **)(a1 + 8));
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    if ( v4 && v8 )
      SetForegroundWindow(v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x353,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v6);
  }
  return result;
}

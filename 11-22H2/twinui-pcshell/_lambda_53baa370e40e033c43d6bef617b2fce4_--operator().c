/*
 * XREFs of _lambda_53baa370e40e033c43d6bef617b2fce4_::operator() @ 0x1800A05E8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_53baa370e40e033c43d6bef617b2fce4___::Run @ 0x1800A05C0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_53baa370e40e033c43d6bef617b2fce4___--.c)
 * Callees:
 *     ?PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ @ 0x1800A06F0 (-PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ?CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ @ 0x1800C2CB4 (-CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_53baa370e40e033c43d6bef617b2fce4_::operator()(__int64 a1)
{
  int v2; // edi
  int v3; // ebx
  char v4; // r15
  __int64 v5; // rcx
  HWND v6; // r14
  int v7; // eax
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

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
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 280LL) + 208LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 280LL),
    &SRWLock);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = (HWND)*(int *)(v5 + 296);
  v7 = *(_DWORD *)(v5 + 480);
  if ( v2 == v7 )
  {
LABEL_11:
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    if ( v4 )
    {
      if ( v6 )
        SetForegroundWindow(v6);
    }
    return 0LL;
  }
  if ( v7 )
  {
    *(_DWORD *)(v5 + 480) = v2;
    if ( (*(_BYTE *)(v5 + 356) & 4) == 0 )
    {
      if ( (unsigned int)(v2 - 4) > 1 )
        v3 = 2;
      if ( v3 != ((*(unsigned __int16 *)(v5 + 252) >> 1) & 7) )
      {
        *(_WORD *)(v5 + 252) = *(_WORD *)(v5 + 252) & 0xFFF1 | (2 * v3);
        UwpWindowWrapperBase::CommitImportanceVector((UwpWindowWrapperBase *)v5);
      }
    }
    UwpWindowWrapperBase::PushDesiredNavigationLevelToDerivedClass(*(UwpWindowWrapperBase **)(a1 + 8));
    goto LABEL_11;
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 2147947423LL;
}

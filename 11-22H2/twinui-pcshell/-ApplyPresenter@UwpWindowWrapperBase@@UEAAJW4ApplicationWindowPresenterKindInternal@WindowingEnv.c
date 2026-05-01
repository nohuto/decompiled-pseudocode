/*
 * XREFs of ?ApplyPresenter@UwpWindowWrapperBase@@UEAAJW4ApplicationWindowPresenterKindInternal@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Z @ 0x1804F0AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBamoEnabled@@YA_NXZ @ 0x1800D2E84 (-IsBamoEnabled@@YA_NXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_b623b03caf8d64c68043fdf6e26afe88___ @ 0x1801F6ED0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_b623b03caf8d64c68043fdf6e26afe88.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowWrapperBase::ApplyPresenter(_QWORD **a1, int a2)
{
  DWORD CurrentThreadId; // eax
  unsigned int v5; // ecx
  int v6; // eax
  int v7[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v9; // [rsp+48h] [rbp+10h] BYREF
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+18h] BYREF

  v9 = a2;
  if ( IsBamoEnabled() && ((unsigned int (__fastcall *)(_QWORD **))(*a1)[28])(a1) != 1 )
    return 0LL;
  (*(void (__fastcall **)(_QWORD *, PSRWLOCK *))(*a1[33] + 208LL))(a1[33], &SRWLock);
  *(_QWORD *)v7 = a1 - 2;
  *(_QWORD *)&v7[2] = &v9;
  CurrentThreadId = GetCurrentThreadId();
  v6 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_b623b03caf8d64c68043fdf6e26afe88___(
         v5,
         CurrentThreadId,
         (__int128 *)v7);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x58C,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v6,
      v7[0]);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}

/*
 * XREFs of ?HandlePresentationReadinessChange@WindowWrapperBase@@UEAAX_K@Z @ 0x1804EA710
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HandleShellHook@WindowReadyState@@QEAAX_K@Z @ 0x1802D978A (-HandleShellHook@WindowReadyState@@QEAAX_K@Z.c)
 */

void __fastcall WindowWrapperBase::HandlePresentationReadinessChange(WindowWrapperBase *this)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 33) + 200LL))(*((_QWORD *)this + 33), &SRWLock);
  WindowReadyState::HandleShellHook((WindowWrapperBase *)((char *)this + 344));
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}

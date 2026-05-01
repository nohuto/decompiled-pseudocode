/*
 * XREFs of ?HandlePresentationReadinessChange@UwpWindowWrapperBase@@UEAAX_K@Z @ 0x1800A00C0
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleShellHook@UwpWindowReadyState@@QEAAX_K@Z @ 0x1800A0130 (-HandleShellHook@UwpWindowReadyState@@QEAAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall UwpWindowWrapperBase::HandlePresentationReadinessChange(
        UwpWindowWrapperBase *this,
        unsigned __int64 a2)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 33) + 208LL))(*((_QWORD *)this + 33), &SRWLock);
  UwpWindowReadyState::HandleShellHook((UwpWindowWrapperBase *)((char *)this + 344), a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}

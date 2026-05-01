/*
 * XREFs of ?ChangeIsTitleBarVisible@UwpWindowWrapperBase@@UEAAJE@Z @ 0x1804F0CD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UwpWindowWrapperBase::ChangeIsTitleBarVisible(UwpWindowWrapperBase *this, char a2)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 34) + 208LL))(*((_QWORD *)this + 34), &SRWLock);
  *((_BYTE *)this + 470) = a2 != 0;
  *((_BYTE *)this + 469) = 1;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}

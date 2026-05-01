/*
 * XREFs of ?SetWindowBand@WindowWrapperBase@@UEAAJK@Z @ 0x1804ECFE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PushZbidToWindow@WindowWrapperBase@@AEAAXW4ZBID@@@Z @ 0x1804EB144 (-PushZbidToWindow@WindowWrapperBase@@AEAAXW4ZBID@@@Z.c)
 */

__int64 __fastcall WindowWrapperBase::SetWindowBand(WindowWrapperBase *this, unsigned int a2)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 35) + 200LL))(*((_QWORD *)this + 35), &SRWLock);
  WindowWrapperBase::PushZbidToWindow((__int64)this, a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}

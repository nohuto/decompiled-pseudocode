/*
 * XREFs of ?BeginWinRtActivation@WindowWrapperBase@@UEAAXXZ @ 0x1804E92C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapperBase::BeginWinRtActivation(WindowWrapperBase *this)
{
  RTL_SRWLOCK *v2; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 33) + 200LL))(*((_QWORD *)this + 33), &SRWLock);
  v2 = SRWLock;
  *((_BYTE *)this + 556) = 1;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}

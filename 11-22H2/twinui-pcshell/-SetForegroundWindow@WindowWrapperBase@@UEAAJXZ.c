/*
 * XREFs of ?SetForegroundWindow@WindowWrapperBase@@UEAAJXZ @ 0x1802D92D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::SetForegroundWindow(WindowWrapperBase *this)
{
  HWND v2; // rbx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 35) + 208LL))(*((_QWORD *)this + 35), &SRWLock);
  v2 = (HWND)*((int *)this + 74);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  if ( SetForegroundWindow(v2) )
    return 0LL;
  if ( v2 )
    return IsWindow(v2) ? -2147467259 : -2147023496;
  return 2147500035LL;
}

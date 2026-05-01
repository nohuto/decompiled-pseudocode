/*
 * XREFs of ?get_PointerActivationPolicy@WindowWrapperBase@@UEAAJPEAW4PointerActivationPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804EE8A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::get_PointerActivationPolicy(
        WindowWrapperBase *this,
        enum Windows::Internal::Shell::ViewManagerInterop::PointerActivationPolicy *a2)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 34) + 208LL))(*((_QWORD *)this + 34), &SRWLock);
  *(_DWORD *)a2 = *((_DWORD *)this + 56);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}

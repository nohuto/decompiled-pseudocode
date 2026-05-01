/*
 * XREFs of ?get_NavigationLevel@UwpWindowWrapperBase@@UEAAJPEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180188BC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UwpWindowWrapperBase::get_NavigationLevel(
        UwpWindowWrapperBase *this,
        enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel *a2)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 34) + 216LL))(*((_QWORD *)this + 34), &SRWLock);
  *(_DWORD *)a2 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 1) + 144LL))((char *)this - 8);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}

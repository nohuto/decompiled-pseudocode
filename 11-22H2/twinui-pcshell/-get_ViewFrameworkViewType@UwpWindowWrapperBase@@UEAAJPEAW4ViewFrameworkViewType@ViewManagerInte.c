/*
 * XREFs of ?get_ViewFrameworkViewType@UwpWindowWrapperBase@@UEAAJPEAW4ViewFrameworkViewType@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804F3120
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UwpWindowWrapperBase::get_ViewFrameworkViewType(
        UwpWindowWrapperBase *this,
        enum Windows::Internal::Shell::ViewManagerInterop::ViewFrameworkViewType *a2)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 34) + 216LL))(*((_QWORD *)this + 34), &SRWLock);
  *(_DWORD *)a2 = *((_DWORD *)this + 115);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}

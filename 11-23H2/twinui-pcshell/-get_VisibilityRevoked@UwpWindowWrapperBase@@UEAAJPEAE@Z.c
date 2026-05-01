/*
 * XREFs of ?get_VisibilityRevoked@UwpWindowWrapperBase@@UEAAJPEAE@Z @ 0x1804F3190
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UwpWindowWrapperBase::get_VisibilityRevoked(UwpWindowWrapperBase *this, bool *a2)
{
  int v4; // eax
  bool v5; // al
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 32) + 216LL))(*((_QWORD *)this + 32), &SRWLock);
  v4 = *((_DWORD *)this + 39);
  v5 = (v4 & 0x18) != 0 && (v4 & 0x20) == 0;
  *a2 = v5;
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}

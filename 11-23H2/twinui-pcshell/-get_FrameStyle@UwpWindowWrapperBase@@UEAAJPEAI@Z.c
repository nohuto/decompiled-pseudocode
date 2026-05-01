/*
 * XREFs of ?get_FrameStyle@UwpWindowWrapperBase@@UEAAJPEAI@Z @ 0x1804F2720
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UwpWindowWrapperBase::get_FrameStyle(UwpWindowWrapperBase *this, unsigned int *a2)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 34) + 216LL))(*((_QWORD *)this + 34), &SRWLock);
  *a2 = *((_DWORD *)this + 116);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}

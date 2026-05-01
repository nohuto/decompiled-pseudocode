/*
 * XREFs of ?put_FrameStyle@UwpWindowWrapperBase@@UEAAJI@Z @ 0x1804F3350
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UwpWindowWrapperBase::put_FrameStyle(UwpWindowWrapperBase *this, int a2)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 34) + 208LL))(*((_QWORD *)this + 34), &SRWLock);
  *((_DWORD *)this + 116) = a2;
  *((_BYTE *)this + 468) = 1;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}

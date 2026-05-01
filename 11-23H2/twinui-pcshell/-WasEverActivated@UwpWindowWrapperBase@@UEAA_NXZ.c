/*
 * XREFs of ?WasEverActivated@UwpWindowWrapperBase@@UEAA_NXZ @ 0x1801A0C80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall UwpWindowWrapperBase::WasEverActivated(UwpWindowWrapperBase *this)
{
  char v2; // bl
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 33) + 216LL))(*((_QWORD *)this + 33), &SRWLock);
  v2 = *((_BYTE *)this + 558);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v2;
}

/*
 * XREFs of ?get_ClientWindowReadyForPresentation@WindowWrapperBase@@UEAAJPEAE@Z @ 0x1800225A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapperBase::get_ClientWindowReadyForPresentation(WindowWrapperBase *this, bool *a2)
{
  bool v4; // al
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 30) + 208LL))(*((_QWORD *)this + 30), &SRWLock);
  v4 = *((_QWORD *)this + 40) && !*((_DWORD *)this + 82);
  *a2 = v4;
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}

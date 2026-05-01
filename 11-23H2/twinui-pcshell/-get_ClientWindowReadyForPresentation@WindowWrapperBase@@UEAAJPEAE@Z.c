/*
 * XREFs of ?get_ClientWindowReadyForPresentation@WindowWrapperBase@@UEAAJPEAE@Z @ 0x1804EDFD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsReadyForPresentation@WindowReadyState@@QEAA_NXZ @ 0x1804EF5E8 (-IsReadyForPresentation@WindowReadyState@@QEAA_NXZ.c)
 */

__int64 __fastcall WindowWrapperBase::get_ClientWindowReadyForPresentation(
        WindowWrapperBase *this,
        unsigned __int8 *a2)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 30) + 208LL))(*((_QWORD *)this + 30), &SRWLock);
  *a2 = WindowReadyState::IsReadyForPresentation((WindowWrapperBase *)((char *)this + 320));
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}

/*
 * XREFs of ?get_ClientWindowReadyForPresentation@UwpWindowWrapperBase@@UEAAJPEAE@Z @ 0x18004FE80
 * Callers:
 *     <none>
 * Callees:
 *     ?IsReadyForPresentation@UwpWindowReadyState@@QEAA_NXZ @ 0x1800A05A0 (-IsReadyForPresentation@UwpWindowReadyState@@QEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UwpWindowWrapperBase::get_ClientWindowReadyForPresentation(
        UwpWindowWrapperBase *this,
        unsigned __int8 *a2)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 29) + 216LL))(*((_QWORD *)this + 29), &SRWLock);
  *a2 = UwpWindowReadyState::IsReadyForPresentation((UwpWindowWrapperBase *)((char *)this + 312));
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}

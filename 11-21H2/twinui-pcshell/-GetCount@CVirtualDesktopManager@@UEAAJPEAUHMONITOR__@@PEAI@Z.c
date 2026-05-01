/*
 * XREFs of ?GetCount@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAI@Z @ 0x1805455D0
 * Callers:
 *     ?GetCount@CVirtualDesktopManager@@WBA@EAAJPEAUHMONITOR__@@PEAI@Z @ 0x18020C9C0 (-GetCount@CVirtualDesktopManager@@WBA@EAAJPEAUHMONITOR__@@PEAI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopManager::GetCount(CVirtualDesktopManager *this, HMONITOR a2, unsigned int *a3)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 19) + 24LL))(*((_QWORD *)this + 19), &SRWLock);
  *a3 = (*(__int64 (__fastcall **)(_QWORD, HMONITOR))(**((_QWORD **)this + 11) + 24LL))(*((_QWORD *)this + 11), a2);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}

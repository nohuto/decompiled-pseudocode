/*
 * XREFs of ?GetCurrentDesktop@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@@Z @ 0x18012FB60
 * Callers:
 *     ?GetCurrentDesktop@CVirtualDesktopManager@@WBA@EAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@@Z @ 0x18020C9E0 (-GetCurrentDesktop@CVirtualDesktopManager@@WBA@EAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@@Z @ 0x18012FBF0 (-GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::GetCurrentDesktop(
        CVirtualDesktopManager *this,
        HMONITOR a2,
        struct IVirtualDesktop **a3)
{
  int CurrentDesktopInternal; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 19) + 24LL))(*((_QWORD *)this + 19), &SRWLock);
  CurrentDesktopInternal = CVirtualDesktopManager::GetCurrentDesktopInternal(this, a2, a3);
  v7 = CurrentDesktopInternal;
  if ( CurrentDesktopInternal < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16C,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)CurrentDesktopInternal);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v7;
}

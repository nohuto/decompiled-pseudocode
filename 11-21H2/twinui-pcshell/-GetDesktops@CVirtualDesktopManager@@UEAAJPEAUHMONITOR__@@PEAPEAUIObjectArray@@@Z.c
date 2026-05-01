/*
 * XREFs of ?GetDesktops@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIObjectArray@@@Z @ 0x1801235F0
 * Callers:
 *     ?GetDesktops@CVirtualDesktopManager@@WBA@EAAJPEAUHMONITOR__@@PEAPEAUIObjectArray@@@Z @ 0x18020CA40 (-GetDesktops@CVirtualDesktopManager@@WBA@EAAJPEAUHMONITOR__@@PEAPEAUIObjectArray@@@Z.c)
 *     ?UpdateWallpaperPathForAllDesktops@CVirtualDesktopManager@@UEAAJPEAUHSTRING__@@@Z @ 0x18054C2B0 (-UpdateWallpaperPathForAllDesktops@CVirtualDesktopManager@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDesktopsInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIObjectArray@@@Z @ 0x180123680 (-GetDesktopsInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIObjectArray@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::GetDesktops(
        CVirtualDesktopManager *this,
        HMONITOR a2,
        struct IObjectArray **a3)
{
  int DesktopsInternal; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 19) + 24LL))(*((_QWORD *)this + 19), &SRWLock);
  DesktopsInternal = CVirtualDesktopManager::GetDesktopsInternal(this, a2, a3);
  v7 = DesktopsInternal;
  if ( DesktopsInternal < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18A,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)DesktopsInternal);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v7;
}

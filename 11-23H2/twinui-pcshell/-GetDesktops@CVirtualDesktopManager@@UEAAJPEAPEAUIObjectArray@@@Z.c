/*
 * XREFs of ?GetDesktops@CVirtualDesktopManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x1801A1130
 * Callers:
 *     ?GetDesktops@CVirtualDesktopManager@@WBA@EAAJPEAPEAUIObjectArray@@@Z @ 0x1802A8930 (-GetDesktops@CVirtualDesktopManager@@WBA@EAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?GetDesktops@CVirtualDesktopManager@@WBI@EAAJPEAPEAUIObjectArray@@@Z @ 0x1802A8950 (-GetDesktops@CVirtualDesktopManager@@WBI@EAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?UpdateWallpaperPathForAllDesktops@CVirtualDesktopManager@@UEAAJPEAUHSTRING__@@@Z @ 0x180607220 (-UpdateWallpaperPathForAllDesktops@CVirtualDesktopManager@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDesktopsInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x1801A11B0 (-GetDesktopsInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIObjectArray@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::GetDesktops(CVirtualDesktopManager *this, struct IObjectArray **a2)
{
  int DesktopsInternal; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 19) + 24LL))(*((_QWORD *)this + 19), &SRWLock);
  DesktopsInternal = CVirtualDesktopManager::GetDesktopsInternal(this, a2);
  v5 = DesktopsInternal;
  if ( DesktopsInternal < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x217,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)DesktopsInternal);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v5;
}

/*
 * XREFs of ?SystemColorsChanged@TabletModeCoverWindow@@AEAAXXZ @ 0x1805DA1D8
 * Callers:
 *     ?v_WndProc@TabletModeCoverWindow@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1800F40E0 (-v_WndProc@TabletModeCoverWindow@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18009FF88 (-IsPPIEdition@@YA_NXZ.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800E15F0 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateWindowOrder@TabletModeCoverWindow@@AEAAJXZ @ 0x1802E6766 (-UpdateWindowOrder@TabletModeCoverWindow@@AEAAJXZ.c)
 *     ?CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ @ 0x1805D95C0 (-CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TabletModeCoverWindow::SystemColorsChanged(TabletModeCoverWindow *this)
{
  int DesktopThumbnail; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v4; // [rsp+38h] [rbp+10h] BYREF

  if ( IsPPIEdition() )
  {
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v4, (RTL_SRWLOCK *)this + 14);
    if ( *((_BYTE *)this + 200) )
    {
      DesktopThumbnail = TabletModeCoverWindow::CreateDesktopThumbnail(this);
      if ( DesktopThumbnail < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1CE,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
          (const char *)(unsigned int)DesktopThumbnail);
        *((_BYTE *)this + 200) = 0;
        ShowWindow(*((HWND *)this + 13), 0);
      }
      TabletModeCoverWindow::UpdateWindowOrder((HWND *)this);
    }
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v4);
  }
}

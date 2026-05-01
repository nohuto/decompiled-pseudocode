/*
 * XREFs of ?SystemColorsChanged@TabletModeCoverWindow@@AEAAXXZ @ 0x180521808
 * Callers:
 *     ?v_WndProc@TabletModeCoverWindow@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180069140 (-v_WndProc@TabletModeCoverWindow@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18009FDA8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800C27AC (-IsPPIEdition@@YA_NXZ.c)
 *     ?UpdateWindowOrder@TabletModeCoverWindow@@AEAAJXZ @ 0x180238076 (-UpdateWindowOrder@TabletModeCoverWindow@@AEAAJXZ.c)
 *     ?CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ @ 0x180520BF0 (-CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ.c)
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
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
          (const char *)(unsigned int)DesktopThumbnail);
        *((_BYTE *)this + 200) = 0;
        ShowWindow(*((HWND *)this + 13), 0);
      }
      TabletModeCoverWindow::UpdateWindowOrder((HWND *)this);
    }
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v4);
  }
}

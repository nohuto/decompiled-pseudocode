/*
 * XREFs of ?TabletModeChanged@TabletModeCoverWindow@@UEAAJ_N@Z @ 0x180069380
 * Callers:
 *     ?InitializeInstance@TabletModeCoverWindow@@AEAAJXZ @ 0x180069214 (-InitializeInstance@TabletModeCoverWindow@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18009FDA8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateWindowOrder@TabletModeCoverWindow@@AEAAJXZ @ 0x180238076 (-UpdateWindowOrder@TabletModeCoverWindow@@AEAAJXZ.c)
 *     ?CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ @ 0x180520BF0 (-CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModeCoverWindow::TabletModeChanged(TabletModeCoverWindow *this, char a2)
{
  int DesktopThumbnail; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v8; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v8, (char *)this + 32);
  *((_BYTE *)this + 120) = a2;
  if ( a2 )
  {
    DesktopThumbnail = TabletModeCoverWindow::CreateDesktopThumbnail((TabletModeCoverWindow *)((char *)this - 80));
    if ( DesktopThumbnail < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x7B,
        (unsigned int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
        (const char *)(unsigned int)DesktopThumbnail,
        v6);
      *((_BYTE *)this + 120) = 0;
      ShowWindow(*((HWND *)this + 3), 0);
    }
    TabletModeCoverWindow::UpdateWindowOrder((TabletModeCoverWindow *)((char *)this - 80));
  }
  else
  {
    ShowWindow(*((HWND *)this + 3), 0);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 6);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 5);
  }
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v8);
  return 0LL;
}

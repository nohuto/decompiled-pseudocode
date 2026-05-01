/*
 * XREFs of ?OnHitTestPartNotifyEvent@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUHitTestPartNotifyEventArgs@3456@@Z @ 0x180238460
 * Callers:
 *     <none>
 * Callees:
 *     ?OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z @ 0x180529764 (-OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z.c)
 *     ?OnArrangedWindowBorderExit@JointResize@@AEAAXXZ @ 0x180529940 (-OnArrangedWindowBorderExit@JointResize@@AEAAXXZ.c)
 */

__int64 __fastcall JointResize::OnHitTestPartNotifyEvent(
        JointResize *this,
        struct Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *a2,
        const struct Windows::Internal::Shell::WindowManagementEvents::HitTestPartNotifyEventArgs *a3)
{
  int v4; // r8d

  v4 = *((_DWORD *)a3 + 2);
  if ( (unsigned int)(v4 - 10) <= 2 || v4 == 15 )
  {
    if ( *((_BYTE *)a3 + 19) && *((_BYTE *)a3 + 17) && (*((_BYTE *)a3 + 12) & 2) == 0 )
      JointResize::OnArrangedWindowBorderEnter(this, *(HWND *)a3, v4);
    else
      JointResize::OnArrangedWindowBorderExit(this);
  }
  return 0LL;
}

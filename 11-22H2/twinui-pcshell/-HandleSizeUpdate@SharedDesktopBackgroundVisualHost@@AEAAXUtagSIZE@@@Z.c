/*
 * XREFs of ?HandleSizeUpdate@SharedDesktopBackgroundVisualHost@@AEAAXUtagSIZE@@@Z @ 0x1806E7AA8
 * Callers:
 *     ?WndProc@SharedDesktopBackgroundVisualHost@@CA_JQEAUHWND__@@I_K_J@Z @ 0x1806EC130 (-WndProc@SharedDesktopBackgroundVisualHost@@CA_JQEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180176D7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??$?RUSharedDesktopBackgroundVisualHost@@USize@Foundation@Windows@winrt@@@?$event@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@USize@Foundation@56@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUSharedDesktopBackgroundVisualHost@@AEBUSize@Foundation@Windows@1@@Z @ 0x1806E566C (--$-RUSharedDesktopBackgroundVisualHost@@USize@Foundation@Windows@winrt@@@-$event@U-$TypedEventH.c)
 *     ?Bounds@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostChildWindow@UIXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x1806E6EFC (-Bounds@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostChildWindow@UIXamlExp.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SharedDesktopBackgroundVisualHost::HandleSizeUpdate(RTL_SRWLOCK *this, struct tagSIZE a2)
{
  LONG cx; // edi
  RTL_SRWLOCK *v4; // rbx
  __int64 *v5; // rbx
  __int128 v6; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v7; // [rsp+50h] [rbp+20h] BYREF
  struct tagSIZE v8; // [rsp+58h] [rbp+28h]
  float v9; // [rsp+60h] [rbp+30h] BYREF
  float cy; // [rsp+64h] [rbp+34h]

  v8 = a2;
  cx = a2.cx;
  v7 = 0LL;
  v4 = this + 22;
  AcquireSRWLockShared(this + 22);
  winrt::Windows::Foundation::IUnknown::operator=(
    (winrt::Windows::Foundation::IUnknown *)&v7,
    (winrt::Windows::Foundation::IUnknown *)&this[32]);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  v5 = v7;
  if ( v7 )
  {
    *(_QWORD *)&v6 = 0LL;
    *((float *)&v6 + 2) = (float)cx;
    *((float *)&v6 + 3) = (float)v8.cy;
    winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostChildWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow>::Bounds(
      &v7,
      &v6);
  }
  v9 = (float)cx;
  cy = (float)v8.cy;
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,winrt::Windows::Foundation::Size>>::operator()<SharedDesktopBackgroundVisualHost,winrt::Windows::Foundation::Size>(
    this + 13,
    (__int64)this,
    (__int64)&v9);
  if ( v5 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
}

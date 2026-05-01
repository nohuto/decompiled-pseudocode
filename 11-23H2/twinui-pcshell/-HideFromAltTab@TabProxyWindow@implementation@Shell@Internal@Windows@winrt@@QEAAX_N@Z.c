/*
 * XREFs of ?HideFromAltTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x180035BE0
 * Callers:
 *     ?SyncTabProxyWindows@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x180034764 (-SyncTabProxyWindows@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXW4AltTabFilter.c)
 *     ?ActivateTabUnderLock@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x1802E7E96 (-ActivateTabUnderLock@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z.c)
 *     ?HideTabProxyWindowFromAltTab@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXUguid@6@_N@Z @ 0x180639F20 (-HideTabProxyWindowFromAltTab@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXUguid.c)
 *     ?ToggleAltTabVisibility@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x18063C630 (-ToggleAltTabVisibility@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ.c)
 * Callees:
 *     ?IconGlyph@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800516C0 (-IconGlyph@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHICON__@@@Z @ 0x18006DEA8 (-reset@-$unique_storage@U-$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1-DestroyIcon@@YAH0@ZU-$int.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ?empty@hstring@winrt@@QEBA_NXZ @ 0x1800B6D04 (-empty@hstring@winrt@@QEBA_NXZ.c)
 *     ?SetAndCreateIconFromGlyphAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x18021B96C (-SetAndCreateIconFromGlyphAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA.c)
 *     ?SetWindowIconAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x18021C544 (-SetWindowIconAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire_and_.c)
 *     ?IconFontFamily@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802E865C (-IconFontFamily@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Inte.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::HideFromAltTab(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *this,
        char a2)
{
  HWND v3; // rcx
  char v4; // di
  char v5; // si
  winrt::hstring *v6; // rax
  winrt::hstring *v7; // rax
  char v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+48h] [rbp+10h] BYREF
  char v10; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0;
  if ( a2 != (*((_BYTE *)this + 184) == 0) )
  {
    v3 = (HWND)*((_QWORD *)this + 4);
    if ( a2 )
    {
      SetPropW(v3, (LPCWSTR)0xA921, HANDLE_FLAG_INHERIT);
      *((_BYTE *)this + 184) = 0;
      SendMessageW(*((HWND *)this + 4), 0x80u, 0LL, 0LL);
      SendMessageW(*((HWND *)this + 4), 0x80u, 1uLL, 0LL);
      wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>::reset(
        (char *)this + 88,
        0LL);
      wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>::reset(
        (char *)this + 96,
        0LL);
      return;
    }
    RemovePropW(v3, (LPCWSTR)0xA921);
    v4 = 1;
    *((_BYTE *)this + 184) = 1;
    v5 = 1;
    v6 = (winrt::hstring *)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::IconGlyph(
                             (char *)this + 48,
                             &v10);
    if ( winrt::hstring::empty(v6)
      || (v5 = 3,
          v7 = (winrt::hstring *)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::IconFontFamily(
                                   (char *)this + 48,
                                   &v8),
          winrt::hstring::empty(v7)) )
    {
      if ( (v5 & 2) == 0 )
        goto LABEL_9;
    }
    else
    {
      v4 = 0;
    }
    winrt::hstring::~hstring((winrt::hstring *)&v8);
LABEL_9:
    winrt::hstring::~hstring((winrt::hstring *)&v10);
    if ( v4 )
      winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync(this, &v9);
    else
      winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync(this, &v9);
  }
}

/*
 * XREFs of ??$find@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIWindowTabHostInternal@Shell@Internal@Windows@@@impl@winrt@@SAPEAXPEBUWindowTabHost@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800D8B20
 * Callers:
 *     ??$find@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIWindowTabHostInternal@Shell@Internal@6@@impl@winrt@@SAPEAXPEBUWindowTabHost@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800D8A00 (--$find@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@-$interf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IImmersiveSettingsCacheNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Windows::Internal::Shell::IWindowTabHostInternal>::find<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // r8
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v8; // rax

  v2 = *a2;
  v3 = **a2 - winrt::impl::guid_v<IImmersiveSettingsCacheNotification>;
  if ( !v3 )
    v3 = v2[1] + 0x7980D6E3B6D67B66LL;
  if ( v3 )
  {
    v4 = *v2 - winrt::impl::guid_v<VirtualDesktopNotificationBase<IVirtualDesktopNotification>>;
    if ( *v2 == winrt::impl::guid_v<VirtualDesktopNotificationBase<IVirtualDesktopNotification>> )
      v4 = v2[1] + 0x21553CBEBAD4A351LL;
    if ( v4 )
    {
      v5 = *v2 - winrt::impl::guid_v<Windows::Internal::Shell::IWindowTabHostInternal>;
      if ( *v2 == winrt::impl::guid_v<Windows::Internal::Shell::IWindowTabHostInternal> )
        v5 = v2[1] + 0x126380C220C1D167LL;
      if ( !v5 )
      {
        v8 = a1 + 24;
        if ( !a1 )
          return 0LL;
        return v8;
      }
      return 0LL;
    }
    if ( !a1 )
      return 0LL;
    return a1 + 16;
  }
  else
  {
    result = a1 + 8;
    if ( !a1 )
      return 0LL;
  }
  return result;
}

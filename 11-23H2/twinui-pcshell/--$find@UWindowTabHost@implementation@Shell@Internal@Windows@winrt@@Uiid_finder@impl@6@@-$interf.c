/*
 * XREFs of ??$find@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIWindowTabHostInternal@Shell@Internal@6@@impl@winrt@@SAPEAXPEBUWindowTabHost@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800D8A00
 * Callers:
 *     ?find_interface@?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800D84E0 (-find_interface@-$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ??$find@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIWindowTabHostInternal@Shell@Internal@Windows@@@impl@winrt@@SAPEAXPEBUWindowTabHost@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800D8B20 (--$find@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@imp_ea_1800D8B20.c)
 */

__int64 __fastcall winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IImmersiveSettingsCacheNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Windows::Internal::Shell::IWindowTabHostInternal>::find<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // rcx

  v3 = *a2;
  v4 = **a2 - winrt::impl::guid_v<IObjectWithSite>;
  if ( !v4 )
    v4 = v3[1] - 0x52733D00AA0029A2LL;
  if ( v4 )
  {
    v5 = *v3 - *(_QWORD *)&winrt::impl::guid_v<IServiceProvider>.Data1;
    if ( *v3 == *(_QWORD *)&winrt::impl::guid_v<IServiceProvider>.Data1 )
      v5 = v3[1] - *(_QWORD *)winrt::impl::guid_v<IServiceProvider>.Data4;
    if ( v5 )
    {
      v6 = *v3 - winrt::impl::guid_v<IImmersiveShellComponent>;
      if ( *v3 == winrt::impl::guid_v<IImmersiveShellComponent> )
        v6 = v3[1] + 0x3BA05710A3855A7ELL;
      if ( v6 )
      {
        if ( (unsigned __int8)winrt::operator==(v3, &winrt::impl::guid_v<IInspectable>) )
        {
          v12 = v8 + 72;
          if ( !v8 )
            return 0LL;
          return v12;
        }
        else if ( !(unsigned __int8)winrt::operator==(v7, &winrt::impl::guid_v<IApplicationViewChangeListener>) )
        {
          return winrt::impl::interface_list<IImmersiveSettingsCacheNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Windows::Internal::Shell::IWindowTabHostInternal>::find<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::impl::iid_finder>(
                   v9,
                   v10);
        }
        return v9;
      }
      if ( a1 )
        return a1 + 64;
    }
    else if ( a1 )
    {
      return a1 + 56;
    }
    return 0LL;
  }
  if ( !a1 )
    return 0LL;
  return a1 + 48;
}

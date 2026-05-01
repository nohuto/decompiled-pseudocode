/*
 * XREFs of ?find_interface@?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800D84E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIWindowTabHostInternal@Shell@Internal@6@@impl@winrt@@SAPEAXPEBUWindowTabHost@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800D8A00 (--$find@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@-$interf.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::Shell::WindowTabHost,winrt::Windows::Internal::Shell::IWindowTabHost,winrt::immersive_shell_component,IApplicationViewChangeListener,IImmersiveSettingsCacheNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,winrt::cloaked<Windows::Internal::Shell::IWindowTabHostInternal>>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  bool v3; // zf
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v8; // rax
  _QWORD *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 - 80;
  v4 = *a2 - *(_QWORD *)&winrt::impl::guid_v<winrt::Windows::Internal::UI::Shell::IWindowTabExtension>.Data1;
  v3 = *a2 == *(_QWORD *)&winrt::impl::guid_v<winrt::Windows::Internal::UI::Shell::IWindowTabExtension>.Data1;
  v9 = a2;
  if ( v3 )
    v4 = a2[1] - *(_QWORD *)winrt::impl::guid_v<winrt::Windows::Internal::UI::Shell::IWindowTabExtension>.Data4;
  if ( !v4 )
  {
    v8 = v2 + 32;
    return v8 & -(__int64)(v2 != 0);
  }
  v5 = *a2 - winrt::impl::guid_v<winrt::Windows::Internal::Shell::IWindowTabHost>;
  if ( *a2 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::IWindowTabHost> )
    v5 = a2[1] - 0x6F2537AA743AABA3LL;
  if ( !v5 )
  {
    v8 = v2 + 40;
    return v8 & -(__int64)(v2 != 0);
  }
  return winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IImmersiveSettingsCacheNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Windows::Internal::Shell::IWindowTabHostInternal>::find<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::impl::iid_finder>(
           v2,
           &v9);
}

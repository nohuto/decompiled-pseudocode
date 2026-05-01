/*
 * XREFs of ?find_interface@?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800F9540
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIWindowTabHostInternal@Shell@Internal@5@@impl@winrt@@SAPEAXPEBUWindowTabHost@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800F95E0 (--$find@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@-$interf.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::Shell::WindowTabHost,winrt::Windows::Internal::Shell::IWindowTabHost,winrt::immersive_shell_component,IApplicationViewChangeListener,IImmersiveSettingsCacheNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,winrt::cloaked<Windows::Internal::Shell::IWindowTabHostInternal>>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r9
  bool v3; // zf
  __int64 v4; // rax
  _QWORD *v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 result; // rax
  _QWORD *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 - 80;
  v4 = *a2 - winrt::impl::guid_v<winrt::Windows::Internal::UI::Shell::IWindowTabExtension>;
  v3 = *a2 == (_QWORD)winrt::impl::guid_v<winrt::Windows::Internal::UI::Shell::IWindowTabExtension>;
  v9 = a2;
  if ( v3 )
    v4 = a2[1] - *((_QWORD *)&winrt::impl::guid_v<winrt::Windows::Internal::UI::Shell::IWindowTabExtension> + 1);
  if ( !v4 )
  {
    if ( a1 != 80 )
      return v2 + 32;
    return 0LL;
  }
  if ( !(unsigned __int8)winrt::operator==(
                           a2,
                           &winrt::impl::guid_v<winrt::Windows::Internal::Shell::IWindowTabHost>,
                           a2,
                           v2) )
  {
    v7 = *v5 - winrt::impl::guid_v<IObjectWithSite>;
    if ( *v5 == winrt::impl::guid_v<IObjectWithSite> )
      v7 = v5[1] - 0x52733D00AA0029A2LL;
    if ( v7 )
      return winrt::impl::interface_list<IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IImmersiveSettingsCacheNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Windows::Internal::Shell::IWindowTabHostInternal>::find<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::impl::iid_finder>(
               v6,
               &v9);
    if ( v6 )
      return v6 + 48;
    return 0LL;
  }
  result = v6 + 40;
  if ( !v6 )
    return 0LL;
  return result;
}

/*
 * XREFs of ??$find@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIWindowTabHostInternal@Shell@Internal@5@@impl@winrt@@SAPEAXPEBUWindowTabHost@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800F95E0
 * Callers:
 *     ?find_interface@?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800F9540 (-find_interface@-$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::impl::interface_list<IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IImmersiveSettingsCacheNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Windows::Internal::Shell::IWindowTabHostInternal>::find<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD **a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx

  v5 = *a2;
  v6 = **a2 - *(_QWORD *)&winrt::impl::guid_v<IServiceProvider>.Data1;
  if ( !v6 )
    v6 = v5[1] - *(_QWORD *)winrt::impl::guid_v<IServiceProvider>.Data4;
  if ( !v6 )
  {
    if ( a1 )
      return a1 + 56;
    return 0LL;
  }
  v7 = *v5 - winrt::impl::guid_v<IImmersiveShellComponent>;
  if ( *v5 == winrt::impl::guid_v<IImmersiveShellComponent> )
    v7 = v5[1] + 0x3BA05710A3855A7ELL;
  if ( v7 )
  {
    if ( (unsigned __int8)winrt::operator==(v5, &winrt::impl::guid_v<IInspectable>, a1, a4) )
    {
      v22 = v9 + 72;
      if ( !v9 )
        return 0LL;
      return v22;
    }
    if ( (unsigned __int8)winrt::operator==(v8, &winrt::impl::guid_v<IApplicationViewChangeListener>, v9, v10) )
      return v12;
    if ( (unsigned __int8)winrt::operator==(v11, &winrt::impl::guid_v<IImmersiveSettingsCacheNotification>, v12, v13) )
    {
      v23 = v15 + 8;
      if ( !v15 )
        return 0LL;
      return v23;
    }
    if ( !(unsigned __int8)winrt::operator==(
                             v14,
                             &winrt::impl::guid_v<VirtualDesktopNotificationBase<IVirtualDesktopNotification>>,
                             v15,
                             v16) )
    {
      if ( (unsigned __int8)winrt::operator==(
                              v17,
                              &winrt::impl::guid_v<Windows::Internal::Shell::IWindowTabHostInternal>,
                              v18,
                              v19) )
      {
        v24 = v20 + 24;
        if ( !v20 )
          return 0LL;
        return v24;
      }
      return 0LL;
    }
    if ( v18 )
      return v18 + 16;
    return 0LL;
  }
  if ( !a1 )
    return 0LL;
  return a1 + 64;
}

/*
 * XREFs of ?find_interface@?$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UITaskGroupHost@34567@UITaskGroupDataModelSingleton@34567@UITaskGroupsComponent@DesktopTaskGroups@4567@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800D7F10
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uiid_finder@impl@7@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UITaskGroupHost@TaskGroups@Shell@Internal@45@UITaskGroupDataModelSingleton@78945@UITaskGroupsComponent@DesktopTaskGroups@8945@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@impl@winrt@@SAPEAXPEBUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800D7E10 (--$find@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uiid_finder.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelSingleton,winrt::Windows::Internal::Shell::DesktopTaskGroups::ITaskGroupsComponent,IApplicationViewChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  bool v3; // zf
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v8; // rax
  _QWORD *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 - 72;
  v4 = *a2 - winrt::impl::guid_v<IObjectWithSite>;
  v3 = *a2 == winrt::impl::guid_v<IObjectWithSite>;
  v9 = a2;
  if ( v3 )
    v4 = a2[1] - 0x52733D00AA0029A2LL;
  if ( !v4 )
  {
    v8 = v2 + 40;
    return v8 & -(__int64)(v2 != 0);
  }
  v5 = *a2 - *(_QWORD *)&winrt::impl::guid_v<IServiceProvider>.Data1;
  if ( *a2 == *(_QWORD *)&winrt::impl::guid_v<IServiceProvider>.Data1 )
    v5 = a2[1] - *(_QWORD *)winrt::impl::guid_v<IServiceProvider>.Data4;
  if ( !v5 )
  {
    v8 = v2 + 48;
    return v8 & -(__int64)(v2 != 0);
  }
  return winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelSingleton,winrt::Windows::Internal::Shell::DesktopTaskGroups::ITaskGroupsComponent,IApplicationViewChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::find<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::impl::iid_finder>(
           v2,
           &v9);
}

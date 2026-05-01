/*
 * XREFs of ?find_interface@?$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UITaskGroupHost@34567@UITaskGroupDataModelSingleton@34567@UITaskGroupsConfiguration@@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800F93C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uiid_finder@impl@7@@?$interface_list@UIInspectable@Foundation@Windows@winrt@@UITaskGroupHost@TaskGroups@Shell@Internal@34@UITaskGroupDataModelSingleton@67834@UITaskGroupsConfiguration@@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@impl@winrt@@SAPEAXPEBUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800F92D0 (--$find@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uiid_finder.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelSingleton,ITaskGroupsConfiguration,IApplicationViewChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r8
  bool v3; // zf
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v9; // rax
  _QWORD *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 - 72;
  v4 = *a2 - winrt::impl::guid_v<IObjectWithSite>;
  v3 = *a2 == winrt::impl::guid_v<IObjectWithSite>;
  v10 = a2;
  if ( v3 )
    v4 = a2[1] - 0x52733D00AA0029A2LL;
  if ( !v4 )
  {
    v9 = v2 + 40;
    return v9 & -(__int64)(v2 != 0);
  }
  v5 = *a2 - *(_QWORD *)&winrt::impl::guid_v<IServiceProvider>.Data1;
  if ( *a2 == *(_QWORD *)&winrt::impl::guid_v<IServiceProvider>.Data1 )
    v5 = a2[1] - *(_QWORD *)winrt::impl::guid_v<IServiceProvider>.Data4;
  if ( !v5 )
  {
    v9 = v2 + 48;
    return v9 & -(__int64)(v2 != 0);
  }
  if ( (unsigned __int8)winrt::operator==(a2, &winrt::impl::guid_v<IImmersiveShellComponent>, v2, a2) )
  {
    v9 = v2 + 56;
    return v9 & -(__int64)(v2 != 0);
  }
  return winrt::impl::interface_list<winrt::Windows::Foundation::IInspectable,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelSingleton,ITaskGroupsConfiguration,IApplicationViewChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::find<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::impl::iid_finder>(
           v2,
           &v10,
           v2,
           v6);
}

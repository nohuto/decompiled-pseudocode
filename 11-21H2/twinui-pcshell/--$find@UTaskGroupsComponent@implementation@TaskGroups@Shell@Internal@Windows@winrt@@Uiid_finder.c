/*
 * XREFs of ??$find@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uiid_finder@impl@7@@?$interface_list@UIInspectable@Foundation@Windows@winrt@@UITaskGroupHost@TaskGroups@Shell@Internal@34@UITaskGroupDataModelSingleton@67834@UITaskGroupsConfiguration@@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@impl@winrt@@SAPEAXPEBUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800F92D0
 * Callers:
 *     ?find_interface@?$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UITaskGroupHost@34567@UITaskGroupDataModelSingleton@34567@UITaskGroupsConfiguration@@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800F93C0 (-find_interface@-$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windo.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Foundation::IInspectable,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelSingleton,ITaskGroupsConfiguration,IApplicationViewChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::find<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  _QWORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // rax

  v4 = a1;
  v5 = *a2;
  v6 = **a2 - winrt::impl::guid_v<IInspectable>;
  if ( !v6 )
    v6 = v5[1] + 0x6FE1EF9A5528A564LL;
  if ( v6 )
  {
    v7 = *v5 - winrt::impl::guid_v<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost>;
    if ( *v5 == (_QWORD)winrt::impl::guid_v<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost> )
      v7 = v5[1] - *((_QWORD *)&winrt::impl::guid_v<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost> + 1);
    if ( v7 )
    {
      v8 = *v5 - winrt::impl::guid_v<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelSingleton>;
      if ( *v5 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelSingleton> )
        v8 = v5[1] - 0x730C22C8A428E8DLL;
      if ( v8 )
      {
        v9 = *v5 - winrt::impl::guid_v<ITaskGroupsConfiguration>;
        if ( *v5 == winrt::impl::guid_v<ITaskGroupsConfiguration> )
          v9 = v5[1] - 0x3B86C90938310B8CLL;
        if ( !v9 )
          return v4;
        v10 = *v5 - winrt::impl::guid_v<IApplicationViewChangeListener>;
        if ( *v5 == winrt::impl::guid_v<IApplicationViewChangeListener> )
          v10 = v5[1] - 0x5C48281337B642A9LL;
        if ( v10 )
        {
          if ( !(unsigned __int8)winrt::operator==(
                                   v5,
                                   &winrt::impl::guid_v<VirtualDesktopNotificationBase<IVirtualDesktopNotification>>,
                                   v4,
                                   a4) )
            return 0LL;
          v12 = v4 + 16;
        }
        else
        {
          v12 = v4 + 8;
        }
      }
      else
      {
        v12 = v4 + 32;
      }
    }
    else
    {
      v12 = v4 + 24;
    }
    return v12 & -(__int64)(v4 != 0);
  }
  return (v4 + 64) & -(__int64)(v4 != 0);
}

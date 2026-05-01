/*
 * XREFs of ??$find@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uiid_finder@impl@7@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UITaskGroupHost@TaskGroups@Shell@Internal@45@UITaskGroupDataModelSingleton@78945@UITaskGroupsComponent@DesktopTaskGroups@8945@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@impl@winrt@@SAPEAXPEBUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800D7E10
 * Callers:
 *     ?find_interface@?$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UITaskGroupHost@34567@UITaskGroupDataModelSingleton@34567@UITaskGroupsComponent@DesktopTaskGroups@4567@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800D7F10 (-find_interface@-$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windo.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelSingleton,winrt::Windows::Internal::Shell::DesktopTaskGroups::ITaskGroupsComponent,IApplicationViewChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::find<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD **a2)
{
  __int64 v2; // r8
  _QWORD *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  v2 = a1;
  v3 = *a2;
  v4 = **a2 - winrt::impl::guid_v<IImmersiveShellComponent>;
  if ( !v4 )
    v4 = v3[1] + 0x3BA05710A3855A7ELL;
  if ( v4 )
  {
    v5 = *v3 - winrt::impl::guid_v<IInspectable>;
    if ( *v3 == winrt::impl::guid_v<IInspectable> )
      v5 = v3[1] + 0x6FE1EF9A5528A564LL;
    if ( v5 )
    {
      v6 = *v3 - winrt::impl::guid_v<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost>;
      if ( *v3 == (_QWORD)winrt::impl::guid_v<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost> )
        v6 = v3[1] - *((_QWORD *)&winrt::impl::guid_v<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost> + 1);
      if ( v6 )
      {
        if ( (unsigned __int8)winrt::operator==(
                                v3,
                                &winrt::impl::guid_v<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelSingleton>) )
        {
          v11 = v2 + 24;
        }
        else if ( (unsigned __int8)winrt::operator==(
                                     v7,
                                     &winrt::impl::guid_v<winrt::Windows::Internal::Shell::DesktopTaskGroups::ITaskGroupsComponent>) )
        {
          v11 = v2 + 32;
        }
        else
        {
          v9 = *v8 - winrt::impl::guid_v<IApplicationViewChangeListener>;
          if ( *v8 == winrt::impl::guid_v<IApplicationViewChangeListener> )
            v9 = v8[1] - 0x5C48281337B642A9LL;
          if ( !v9 )
            return v2;
          v10 = *v8 - winrt::impl::guid_v<VirtualDesktopNotificationBase<IVirtualDesktopNotification>>;
          if ( *v8 == winrt::impl::guid_v<VirtualDesktopNotificationBase<IVirtualDesktopNotification>> )
            v10 = v8[1] + 0x21553CBEBAD4A351LL;
          if ( v10 )
            return 0LL;
          v11 = v2 + 8;
        }
      }
      else
      {
        v11 = v2 + 16;
      }
    }
    else
    {
      v11 = v2 + 64;
    }
    return v11 & -(__int64)(v2 != 0);
  }
  return (v2 + 56) & -(__int64)(v2 != 0);
}

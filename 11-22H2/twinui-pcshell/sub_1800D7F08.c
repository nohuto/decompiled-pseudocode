/*
 * XREFs of sub_1800D7F08 @ 0x1800D7F08
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall sub_1800D7F08()
{
  char v0; // of
  _DWORD *v1; // rdi
  double v2; // st7

  if ( !v0 )
    JUMPOUT(0x1800D7EEBLL);
  *v1 = (int)v2;
  return winrt::implements<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelSingleton,winrt::Windows::Internal::Shell::DesktopTaskGroups::ITaskGroupsComponent,IApplicationViewChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::find_interface();
}

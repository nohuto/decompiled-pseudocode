/*
 * XREFs of ?OnApplicationViewChanged@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800C8150
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??$?RUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@?$event@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@1@AEBUWindowStateChangedEventArgs@45671@@Z @ 0x180153224 (--$-RUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateCh.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::OnApplicationViewChanged(
        __int64 a1,
        ApplicationViewHelpers *a2,
        int a3)
{
  HWND WindowForView; // rax
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v12; // [rsp+20h] [rbp-18h] BYREF
  int v13; // [rsp+24h] [rbp-14h]

  WindowForView = ApplicationViewHelpers::GetWindowForView(a2, a2);
  v12 = (int)WindowForView;
  if ( !a3 )
    goto LABEL_12;
  v6 = a3 - 1;
  if ( !v6 )
    goto LABEL_9;
  v7 = v6 - 1;
  if ( !v7 )
    goto LABEL_9;
  v8 = v7 - 5;
  if ( !v8 )
  {
    v13 = 3;
    goto LABEL_10;
  }
  v9 = v8 - 3;
  if ( !v9 )
  {
LABEL_12:
    if ( !(unsigned int)IsWindowArranged(WindowForView) )
      return 0LL;
    v13 = 0;
    goto LABEL_10;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
LABEL_9:
    v13 = 1;
LABEL_10:
    winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>(
      a1 + 496,
      a1,
      &v12);
    return 0LL;
  }
  if ( v10 == 2 && (unsigned int)IsWindowArranged(WindowForView) )
  {
    v13 = 4;
    goto LABEL_10;
  }
  return 0LL;
}

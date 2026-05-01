/*
 * XREFs of ??_E?$heap_implements@UDesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1801452A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1801452DC (--1DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController>::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController *a1,
        char a2)
{
  winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::~DesktopTaskGroupsSwitchItemController(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x38uLL);
  return a1;
}

/*
 * XREFs of ?OnArrangedWindowJointResizeCompleted@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@AEAAXAEBUIWindowManagementEvents2@WindowManagementEvents@4567@AEBUArrangedWindowJointResizeCompletedEventArgs@94567@@Z @ 0x18058AE20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$?RUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UWindowSnapEventArgs@23456@@?$event@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowSnapEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@1@AEBUWindowSnapEventArgs@45671@@Z @ 0x1805881A8 (--$-RUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UWindowSnapEve.c)
 */

void __fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::OnArrangedWindowJointResizeCompleted(
        RTL_SRWLOCK *this,
        const struct winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *a2,
        const struct winrt::Windows::Internal::Shell::WindowManagementEvents::ArrangedWindowJointResizeCompletedEventArgs *a3)
{
  _DWORD v3[4]; // [rsp+20h] [rbp-28h] BYREF

  v3[0] = *(_DWORD *)a3;
  v3[1] = 2;
  v3[2] = 1;
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowSnapEventArgs>>::operator()<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::Windows::Internal::Shell::TaskGroups::WindowSnapEventArgs>(
    this + 59,
    (__int64)this,
    (__int64)v3);
}

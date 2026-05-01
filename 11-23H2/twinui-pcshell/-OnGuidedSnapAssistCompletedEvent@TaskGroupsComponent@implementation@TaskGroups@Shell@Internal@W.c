/*
 * XREFs of ?OnGuidedSnapAssistCompletedEvent@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@AEAAXAEBUIGuidedSnapAssistController@WindowSnapping@4567@AEBUGuidedSnapAssistCompletedArgs@94567@@Z @ 0x1806493E0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     CoTaskMemFree_0 @ 0x1801C7A7D (CoTaskMemFree_0.c)
 *     ??$?RUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@USnapLayoutEventArgs@23456@@?$event@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@USnapLayoutEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@1@AEBUSnapLayoutEventArgs@45671@@Z @ 0x180645C14 (--$-RUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@USnapLayoutEve.c)
 *     ??$call@AEAV_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@@?$factory_cache_entry@USnapLayoutEventArgs@TaskGroups@Shell@Internal@Windows@winrt@@UISnapLayoutEventArgsFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@@Z @ 0x18064665C (--$call@AEAV_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@@-$factory_cache_entry@USnapLayoutEventAr.c)
 *     ??R_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@QEBA@AEBUISnapLayoutEventArgsFactory@TaskGroups@Shell@Internal@Windows@winrt@@@Z @ 0x180646D90 (--R_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@QEBA@AEBUISnapLayoutEventArgsFactory@TaskGroups@Sh.c)
 *     ?GetUnoccludedSnappedWindowsForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA?AU?$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@7@UWindowId@WindowManagement@ApplicationModel@567@W4UnoccludedWindowsOptions@34567@@Z @ 0x180647B8C (-GetUnoccludedSnappedWindowsForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Intern.c)
 *     ?SnapAssistSnappedWindows@?$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompletedArgs@UIGuidedSnapAssistCompletedArgs@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180649B1C (-SnapAssistSnappedWindows@-$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompl.c)
 *     ?Usage@?$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompletedArgs@UIGuidedSnapAssistCompletedArgs@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18064A0E0 (-Usage@-$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompletedArgs@UIGuidedSn.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::OnGuidedSnapAssistCompletedEvent(
        RTL_SRWLOCK *this,
        const struct winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController *a2,
        const struct winrt::Windows::Internal::Shell::WindowSnapping::GuidedSnapAssistCompletedArgs *a3)
{
  __int64 v5; // rdx
  unsigned int v6; // ebx
  LPVOID pv[3]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v8[2]; // [rsp+38h] [rbp-48h] BYREF
  LPVOID v9; // [rsp+48h] [rbp-38h] BYREF
  unsigned int v10; // [rsp+50h] [rbp-30h]
  __int128 v11; // [rsp+60h] [rbp-20h]
  __int128 v12; // [rsp+70h] [rbp-10h] BYREF
  int v13; // [rsp+A8h] [rbp+28h] BYREF

  if ( (unsigned int)winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompletedArgs<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistCompletedArgs>::Usage(
                       a3,
                       a2) == 2
    || (unsigned int)winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompletedArgs<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistCompletedArgs>::Usage(
                       a3,
                       v5) == 1 )
  {
    v6 = **(_DWORD **)winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompletedArgs<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistCompletedArgs>::SnapAssistSnappedWindows(
                        a3,
                        pv);
    if ( pv[0] )
      CoTaskMemFree_0(pv[0]);
    winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::GetUnoccludedSnappedWindowsForWindow(
      (__int64)this,
      (__int64)&v9,
      v6,
      (const char *)1);
    if ( v10 > 1 )
    {
      *(_QWORD *)&v11 = v9;
      DWORD2(v11) = v10;
      v13 = 0;
      v12 = v11;
      v8[0] = (__int64)&v13;
      v8[1] = (__int64)&v12;
      pv[2] = &qword_1809914E8;
      _InterlockedIncrement64(&qword_1809914E8);
      if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::SnapLayoutEventArgs,winrt::Windows::Internal::Shell::TaskGroups::ISnapLayoutEventArgsFactory> )
      {
        _lambda_06ad3909e536a51ee0f1eb0ad05e39fd_::operator()(
          v8,
          (__int64)pv,
          (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::SnapLayoutEventArgs,winrt::Windows::Internal::Shell::TaskGroups::ISnapLayoutEventArgsFactory>);
        _InterlockedDecrement64(&qword_1809914E8);
      }
      else
      {
        _InterlockedDecrement64(&qword_1809914E8);
        winrt::impl::factory_cache_entry<winrt::Windows::Internal::Shell::TaskGroups::SnapLayoutEventArgs,winrt::Windows::Internal::Shell::TaskGroups::ISnapLayoutEventArgsFactory>::call<_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_ &>(
          (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))v10,
          (__int64)pv,
          (__int64)v8);
      }
      winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::SnapLayoutEventArgs>>::operator()<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::Windows::Internal::Shell::TaskGroups::SnapLayoutEventArgs>(
        this + 65,
        (__int64)this,
        (__int64)pv);
      if ( pv[0] )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)pv);
    }
    if ( v9 )
      CoTaskMemFree_0(v9);
  }
}

/*
 * XREFs of ?RegisterFlyoutWindow@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUIInspectable@Foundation@56@AEBUWindowId@WindowManagement@ApplicationModel@456@AEBUhstring@6@@Z @ 0x1806BF434
 * Callers:
 *     ?RegisterFlyoutWindow@?$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetAndChatManager@3456@@impl@winrt@@UEAAHUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@PEAXPEAPEAX@Z @ 0x1806BF3A0 (-RegisterFlyoutWindow@-$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$shared_ptr@VFlyoutView@@@std@@XZ @ 0x1806B1570 (-EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$share.c)
 *     ?HideMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@@Z @ 0x1806BDE2C (-HideMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@.c)
 */

// Hidden C++ exception states: #wind=2
struct IInspectable __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::RegisterFlyoutWindow(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *this,
        const struct winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId *a2,
        const struct winrt::hstring *a3,
        _QWORD *a4)
{
  __int64 v8; // rbx
  HWND v9; // rdi
  __int64 v11; // [rsp+38h] [rbp-30h] BYREF
  std::_Ref_count_base *v12; // [rsp+40h] [rbp-28h]

  winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::EnsureFlyoutView((__int64)this, &v11);
  v8 = v11;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 48LL))(v11);
  v9 = (HWND)*(int *)a3;
  (*(void (__fastcall **)(__int64, const struct winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId *, HWND, _QWORD *))(*(_QWORD *)v8 + 32LL))(
    v8,
    a2,
    v9,
    a4);
  if ( !*a4 )
    winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::HideMACFlyout(this, v9);
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  return (struct IInspectable)a2;
}

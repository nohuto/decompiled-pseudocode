/*
 * XREFs of ?ShowBar@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180691580
 * Callers:
 *     ?Show@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x180691490 (-Show@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CalculateBarBounds@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AURect@Foundation@67@PEAUHMONITOR__@@AEBUFrameworkElement@Xaml@UI@67@AEBU8967@@Z @ 0x18068EB24 (-CalculateBarBounds@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt.c)
 *     ?FinishShow@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXURect@Foundation@67@@Z @ 0x18068F09C (-FinishShow@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXU.c)
 *     ?View@?$consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension@UISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180692AC0 (-View@-$consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension@UISnapLayoutPickerExtension@Shell.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::ShowBar(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 *v5; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 93) != 2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x181,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyoutinstance.cpp",
      a4);
  v5 = (__int64 *)winrt::impl::consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension<winrt::WindowsUdk::UI::Shell::ISnapLayoutPickerExtension>::View(
                    (char *)this + 288,
                    &v8);
  winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::CalculateBarBounds(
    (__int64)&v6,
    *((_QWORD *)this + 45),
    v5,
    (__int64)this + 344);
  if ( v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::FinishShow((__int64)this, &v6);
}

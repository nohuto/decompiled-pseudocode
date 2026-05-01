/*
 * XREFs of ?OnPointerEntered@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@AEBUPointerRoutedEventArgs@Input@Xaml@UI@67@@Z @ 0x180690DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$?RUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAAXAEBUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@1@@Z @ 0x18068CE18 (--$-RUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@-$event@USn.c)
 *     ??$SnapFlyoutInstance_PointerEntered@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z @ 0x18068D47C (--$SnapFlyoutInstance_PointerEntered@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::OnPointerEntered(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *this,
        const struct IInspectable *a2,
        const struct winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs *a3)
{
  if ( !*((_BYTE *)this + 340) )
  {
    *((_BYTE *)this + 341) = 1;
    SnapFlyoutTelemetry::SnapFlyoutInstance_PointerEntered<unsigned int &>((int *)this + 80);
    winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::operator()<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>(
      (RTL_SRWLOCK *)this + 13,
      (__int64)this);
  }
}

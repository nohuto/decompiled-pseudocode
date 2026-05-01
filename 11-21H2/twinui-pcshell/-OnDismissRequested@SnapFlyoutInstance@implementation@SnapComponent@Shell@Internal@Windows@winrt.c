/*
 * XREFs of ?OnDismissRequested@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@0@Z @ 0x1805BA180
 * Callers:
 *     <none>
 * Callees:
 *     ??$?RUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAAXAEBUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@1@@Z @ 0x1805B6F68 (--$-RUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@-$event@USn.c)
 *     ??$SnapFlyoutInstance_DismissRequested@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z @ 0x1805B726C (--$SnapFlyoutInstance_DismissRequested@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::OnDismissRequested(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *this,
        const struct IInspectable *a2,
        const struct IInspectable *a3)
{
  if ( !*((_BYTE *)this + 300) )
  {
    SnapFlyoutTelemetry::SnapFlyoutInstance_DismissRequested<unsigned int &>((int *)this + 70);
    winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::operator()<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>(
      (RTL_SRWLOCK *)this + 15,
      (__int64)this);
  }
}

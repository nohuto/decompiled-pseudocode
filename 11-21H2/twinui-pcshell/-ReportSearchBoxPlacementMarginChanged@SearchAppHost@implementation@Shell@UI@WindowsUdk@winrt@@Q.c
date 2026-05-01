/*
 * XREFs of ?ReportSearchBoxPlacementMarginChanged@SearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXN@Z @ 0x1801A40D8
 * Callers:
 *     ?WorkAreaMayHaveChanged@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x18038FDD0 (-WorkAreaMayHaveChanged@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ??$?RUSearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@$$T@?$event@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUSearchAppHost@implementation@Shell@UI@WindowsUdk@1@AEB$$T@Z @ 0x1801A36A0 (--$-RUSearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@$$T@-$event@U-$TypedEventHandler@U.c)
 */

void __fastcall winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost::ReportSearchBoxPlacementMarginChanged(
        winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost *this,
        double a2)
{
  *((double *)this + 14) = a2;
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::Windows::Foundation::IInspectable>>::operator()<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,std::nullptr_t>(
    (__int64)this + 88,
    (__int64)this);
}

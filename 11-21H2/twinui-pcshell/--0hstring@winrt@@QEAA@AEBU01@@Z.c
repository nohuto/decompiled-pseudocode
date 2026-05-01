/*
 * XREFs of ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800F2C90
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ccf65d9649214ffd774f2e628ae5cb52___::CTaskWrapper__lambda_ccf65d9649214ffd774f2e628ae5cb52_____lambda_ccf65d9649214ffd774f2e628ae5cb52___ @ 0x180198C14 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ccf65d9649214ffd774f2e628ae5cb52___--CTaskW.c)
 *     _lambda_ccf65d9649214ffd774f2e628ae5cb52_::_lambda_ccf65d9649214ffd774f2e628ae5cb52_ @ 0x18019B34C (_lambda_ccf65d9649214ffd774f2e628ae5cb52_--_lambda_ccf65d9649214ffd774f2e628ae5cb52_.c)
 *     _lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_::_lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_ @ 0x18019B3CC (_lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_--_lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_.c)
 *     _lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_::_lambda_e9972a7fc06ea41c4e23ae797ec0a7d8__0 @ 0x18019B480 (_lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_--_lambda_e9972a7fc06ea41c4e23ae797ec0a7d8__0.c)
 *     ??0SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@QEAA@AEBUhstring@5@AEBW4SearchAppActivationMode@2345@AEBU?$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@5@AEBUDeferralCompletedHandler@9Windows@5@_N0AEBUSearchAppHost@2345@@Z @ 0x1801A4574 (--0SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@QEAA@AEBUhstring@5@AEBW.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5a859347bbbbbb78c34c3a6938b2a83e___::CTaskWrapper__lambda_5a859347bbbbbb78c34c3a6938b2a83e_____lambda_5a859347bbbbbb78c34c3a6938b2a83e___ @ 0x1801A6C6C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5a859347bbbbbb78c34c3a6938b2a83e___--CTaskW.c)
 *     ?ActivateSearch@CUndockedMiniSearchAppExperienceManagerConfig@@UEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1803A1320 (-ActivateSearch@CUndockedMiniSearchAppExperienceManagerConfig@@UEAAXAEBUSearchAppActivatedEventA.c)
 * Callees:
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800F2CB4 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 */

winrt::hstring *__fastcall winrt::hstring::hstring(winrt::hstring *this, winrt::impl **a2)
{
  *(_QWORD *)this = winrt::impl::duplicate_hstring(*a2, (struct winrt::impl::hstring_header *)a2);
  return this;
}

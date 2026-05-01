/*
 * XREFs of ?Empty@GuidHelper@Foundation@Windows@winrt@@SA@XZ @ 0x180636DCC
 * Callers:
 *     ?OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelActiveTabChangedEventArgs@38456@@Z @ 0x180637760 (-OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTa.c)
 * Callees:
 *     ??$call_factory_cast@P6A?AUguid@winrt@@AEBUIGuidHelperStatics@Foundation@Windows@2@@ZUGuidHelper@452@U3452@V_lambda_c3d528fab69363bea486f57b2866680a_@@@impl@winrt@@YA?A_P$$QEAV_lambda_c3d528fab69363bea486f57b2866680a_@@@Z @ 0x180635B2C (--$call_factory_cast@P6A-AUguid@winrt@@AEBUIGuidHelperStatics@Foundation@Windows@2@_ea_180635B2C.c)
 */

void (__fastcall ***__fastcall winrt::Windows::Foundation::GuidHelper::Empty(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *)))(_QWORD, __int64 *, __int64 *)
{
  winrt::impl::call_factory_cast<winrt::guid (*)(winrt::Windows::Foundation::IGuidHelperStatics const &),winrt::Windows::Foundation::GuidHelper,winrt::Windows::Foundation::IGuidHelperStatics,_lambda_c3d528fab69363bea486f57b2866680a_>(a1);
  return a1;
}

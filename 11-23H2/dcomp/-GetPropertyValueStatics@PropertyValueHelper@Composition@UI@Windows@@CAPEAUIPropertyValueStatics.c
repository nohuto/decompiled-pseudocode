/*
 * XREFs of ?GetPropertyValueStatics@PropertyValueHelper@Composition@UI@Windows@@CAPEAUIPropertyValueStatics@Foundation@4@XZ @ 0x18000B6B8
 * Callers:
 *     ??$CreatePropertyValue@P8IPropertyValueStatics@Foundation@Windows@@EAAJMPEAPEAUIInspectable@@@ZM@PropertyValueHelper@Composition@UI@Windows@@CAJP8IPropertyValueStatics@Foundation@3@EAAJMPEAPEAUIInspectable@@@ZPEAPEAUIPropertyValue@53@M@Z @ 0x18000B644 (--$CreatePropertyValue@P8IPropertyValueStatics@Foundation@Windows@@EAAJMPEAPEAUIInspectable@@@ZM.c)
 *     ?GetProperty@Api@SceneLightingEffect@Effects@Composition@UI@Windows@@UEAAJIPEAPEAUIPropertyValue@Foundation@6@@Z @ 0x1800103F0 (-GetProperty@Api@SceneLightingEffect@Effects@Composition@UI@Windows@@UEAAJIPEAPEAUIPropertyValue.c)
 *     ??$CreatePropertyValue@P8IPropertyValueStatics@Foundation@Windows@@EAAJIPEBMPEAPEAUIInspectable@@@ZHPEBM@PropertyValueHelper@Composition@UI@Windows@@CAJP8IPropertyValueStatics@Foundation@3@EAAJIPEBMPEAPEAUIInspectable@@@ZPEAPEAUIPropertyValue@53@H0@Z @ 0x180145FC4 (--$CreatePropertyValue@P8IPropertyValueStatics@Foundation@Windows@@EAAJIPEBMPEAPEAUIInspectable@.c)
 *     ??$CreatePropertyValue@P8IPropertyValueStatics@Foundation@Windows@@EAAJEPEAPEAUIInspectable@@@Z_N@PropertyValueHelper@Composition@UI@Windows@@CAJP8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZPEAPEAUIPropertyValue@53@_N@Z @ 0x18018B60C (--$CreatePropertyValue@P8IPropertyValueStatics@Foundation@Windows@@EAAJEPEAPEAUIInspectable@@@Z_.c)
 *     ??$CreatePropertyValue@P8IPropertyValueStatics@Foundation@Windows@@EAAJPEAUIInspectable@@PEAPEAU4@@ZPEAU4@@PropertyValueHelper@Composition@UI@Windows@@CAJP8IPropertyValueStatics@Foundation@3@EAAJPEAUIInspectable@@PEAPEAU6@@ZPEAPEAUIPropertyValue@53@0@Z @ 0x18018B6B8 (--$CreatePropertyValue@P8IPropertyValueStatics@Foundation@Windows@@EAAJPEAUIInspectable@@PEAPEAU.c)
 *     ??$CreatePropertyValue@P8IPropertyValueStatics@Foundation@Windows@@EAAJUTimeSpan@23@PEAPEAUIInspectable@@@ZU423@@PropertyValueHelper@Composition@UI@Windows@@CAJP8IPropertyValueStatics@Foundation@3@EAAJUTimeSpan@53@PEAPEAUIInspectable@@@ZPEAPEAUIPropertyValue@53@0@Z @ 0x18018B764 (--$CreatePropertyValue@P8IPropertyValueStatics@Foundation@Windows@@EAAJUTimeSpan@23@PEAPEAUIInsp.c)
 * Callees:
 *     ??$init_once_nothrow@V_lambda_fec816bb0b05b80584cec4bf4afa1817_@@@wil@@YAJAEAT_RTL_RUN_ONCE@@V_lambda_fec816bb0b05b80584cec4bf4afa1817_@@PEA_N@Z @ 0x18000B6D4 (--$init_once_nothrow@V_lambda_fec816bb0b05b80584cec4bf4afa1817_@@@wil@@YAJAEAT_RTL_RUN_ONCE@@V_l.c)
 */

struct Windows::Foundation::IPropertyValueStatics *Windows::UI::Composition::PropertyValueHelper::GetPropertyValueStatics(
        void)
{
  wil::init_once_nothrow<_lambda_fec816bb0b05b80584cec4bf4afa1817_>();
  return (struct Windows::Foundation::IPropertyValueStatics *)Windows::UI::Composition::PropertyValueHelper::s_propertyValueFactory;
}

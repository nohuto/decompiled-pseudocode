/*
 * XREFs of ?UpdateEffectiveSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAAXXZ @ 0x18051B9B8
 * Callers:
 *     ?UpdateOrganizationSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAAXXZ @ 0x18051BB78 (-UpdateOrganizationSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAAXXZ.c)
 *     ?UpdateUserSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAA_NW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x18051BD50 (-UpdateUserSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAA_NW4TapInvokeSetti.c)
 * Callees:
 *     ?CalculateEffectiveSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEBA?AW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@XZ @ 0x1801BAC9C (-CalculateEffectiveSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEBA-AW4TapInv.c)
 *     ??$?RUTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@$$T@?$event@U?$TypedEventHandler@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEB$$T@Z @ 0x1805083D4 (--$-RUTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@$$T@-$event@U-$TypedEventHandler@UI.c)
 */

void __fastcall SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::UpdateEffectiveSetting(
        SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting *this)
{
  __int32 v1; // eax
  __int64 v2; // rcx
  __int64 v3; // r9

  v1 = SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::CalculateEffectiveSetting((unsigned int *)this);
  if ( v1 != _InterlockedExchange((volatile __int32 *)(v2 + 64), v1) )
    winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,winrt::Windows::Foundation::IInspectable>>::operator()<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,std::nullptr_t>(
      (RTL_SRWLOCK *)(v2 + 40),
      v3);
}

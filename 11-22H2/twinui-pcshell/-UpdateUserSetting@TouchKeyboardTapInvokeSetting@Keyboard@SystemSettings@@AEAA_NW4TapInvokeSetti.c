/*
 * XREFs of ?UpdateUserSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAA_NW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x18051BD50
 * Callers:
 *     ??R?$__func@V_lambda_919ed0165ca58c719ea15f04406310d9_@@$$A6AXAEBK@Z@__function@wistd@@UEAAXAEBK@Z @ 0x18050D1A0 (--R-$__func@V_lambda_919ed0165ca58c719ea15f04406310d9_@@$$A6AXAEBK@Z@__function@wistd@@UEAAXAEBK.c)
 *     ?SaveUserSetting@?$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAHH@Z @ 0x180515DB0 (-SaveUserSetting@-$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSe.c)
 * Callees:
 *     ?UpdateEffectiveSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAAXXZ @ 0x18051B9B8 (-UpdateEffectiveSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAAXXZ.c)
 */

char __fastcall SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::UpdateUserSetting(
        volatile __int32 *a1,
        __int32 a2)
{
  char v2; // bl

  if ( a2 == _InterlockedExchange(a1 + 17, a2) )
    return 0;
  v2 = 1;
  SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::UpdateEffectiveSetting((SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting *)a1);
  return v2;
}

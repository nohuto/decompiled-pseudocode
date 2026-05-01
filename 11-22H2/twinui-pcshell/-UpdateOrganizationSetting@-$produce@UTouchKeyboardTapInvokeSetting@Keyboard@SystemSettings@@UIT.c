/*
 * XREFs of ?UpdateOrganizationSetting@?$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSettingTester@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAHXZ @ 0x18051BB20
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateOrganizationSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAAXXZ @ 0x18051BB78 (-UpdateOrganizationSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::produce<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester>::UpdateOrganizationSetting(
        __int64 a1)
{
  SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting *v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting *)((a1 - 32) & -(__int64)(a1 != 0));
  try
  {
    SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::UpdateOrganizationSetting(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}

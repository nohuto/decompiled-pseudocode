/*
 * XREFs of ??0TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAA@XZ @ 0x1800A78F0
 * Callers:
 *     ??$make@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@$$V@winrt@@YA?A_PXZ @ 0x1800AB7B8 (--$make@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@$$V@winrt@@YA-A_PXZ.c)
 * Callees:
 *     SystemSettings::Keyboard::LoadPolicy @ 0x1800A2C9C (SystemSettings--Keyboard--LoadPolicy.c)
 *     ?SubscribeEvents@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAAXXZ @ 0x1800A4A18 (-SubscribeEvents@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAAXXZ.c)
 *     SystemSettings::Keyboard::LoadSetting @ 0x1800A7A34 (SystemSettings--Keyboard--LoadSetting.c)
 *     DeviceConvertibilityHelpers::GetDeviceConvertibilityRegistryValue @ 0x1801B969C (DeviceConvertibilityHelpers--GetDeviceConvertibilityRegistryValue.c)
 *     ?CalculateEffectiveSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEBA?AW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@XZ @ 0x1801BAC9C (-CalculateEffectiveSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEBA-AW4TapInv.c)
 *     ?HasConvertibleSlateModeChanged@TabletModeHelpers@@YA_NXZ @ 0x1801BC128 (-HasConvertibleSlateModeChanged@TabletModeHelpers@@YA_NXZ.c)
 */

SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting *__fastcall SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::TouchKeyboardTapInvokeSetting(
        SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting *this)
{
  int DeviceConvertibilityRegistryValue; // eax
  TabletModeHelpers *v3; // rcx
  SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting *v4; // rcx

  *((_QWORD *)this + 2) = &winrt::impl::produce<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting>::`vftable';
  *((_QWORD *)this + 3) = &winrt::impl::produce<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::`vftable';
  *((_QWORD *)this + 4) = &winrt::impl::produce<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)this + 1) = 1LL;
  *(_QWORD *)this = &winrt::impl::heap_implements<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting>::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 1;
  *((_DWORD *)this + 17) = SystemSettings::Keyboard::LoadSetting(-2147483647LL, L"TouchKeyboardTapInvoke");
  *((_DWORD *)this + 18) = SystemSettings::Keyboard::LoadPolicy();
  DeviceConvertibilityRegistryValue = DeviceConvertibilityHelpers::GetDeviceConvertibilityRegistryValue(
                                        -2147483646LL,
                                        L"System\\CurrentControlSet\\Control\\PriorityControl",
                                        L"ConvertibilityEnabled");
  if ( !DeviceConvertibilityRegistryValue )
  {
    if ( (unsigned int)DeviceConvertibilityHelpers::GetDeviceConvertibilityRegistryValue(
                         -2147483647LL,
                         L"SOFTWARE\\Microsoft\\TabletTip\\ConvertibleChassis",
                         L"ConvertibleChassis") == 1 )
      DeviceConvertibilityRegistryValue = 1;
    else
      DeviceConvertibilityRegistryValue = 2 - TabletModeHelpers::HasConvertibleSlateModeChanged(v3);
  }
  *((_DWORD *)this + 19) = DeviceConvertibilityRegistryValue;
  *((_DWORD *)this + 20) = SystemSettings::Keyboard::LoadSetting(-2147483646LL, L"TouchKeyboardTapInvoke");
  *((_DWORD *)this + 21) = SystemSettings::Keyboard::LoadSetting(-2147483647LL, L"EnableDesktopModeAutoInvoke");
  *((_DWORD *)this + 22) = SystemSettings::Keyboard::LoadSetting(-2147483646LL, L"EnableDesktopModeAutoInvoke");
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  _InterlockedExchange(
    (volatile __int32 *)this + 16,
    SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::CalculateEffectiveSetting(this));
  SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::SubscribeEvents(v4);
  return this;
}

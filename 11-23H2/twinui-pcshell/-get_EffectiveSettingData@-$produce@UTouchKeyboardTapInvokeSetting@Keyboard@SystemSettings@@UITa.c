/*
 * XREFs of ?get_EffectiveSettingData@?$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18051D190
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     SystemSettings::Keyboard::ConvertToSettingStringValue @ 0x18050ED30 (SystemSettings--Keyboard--ConvertToSettingStringValue.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::get_EffectiveSettingData(
        __int64 a1,
        volatile signed __int32 **a2)
{
  __int64 v3; // rax
  const unsigned __int16 *v4; // rax
  volatile signed __int32 *v5; // rax
  __int64 result; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF
  volatile signed __int32 *v8; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v3 = a1 + 40;
  if ( !a1 )
    v3 = 64LL;
  v4 = SystemSettings::Keyboard::ConvertToSettingStringValue(*(_DWORD *)v3);
  try
  {
    winrt::hstring::hstring((winrt::hstring *)&v8, v4);
    v5 = v8;
    v8 = 0LL;
    *a2 = v5;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v7);
  }
  return result;
}

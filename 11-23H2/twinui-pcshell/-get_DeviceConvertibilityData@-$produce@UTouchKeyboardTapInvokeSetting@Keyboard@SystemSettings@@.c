/*
 * XREFs of ?get_DeviceConvertibilityData@?$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18051D0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::get_DeviceConvertibilityData(
        __int64 a1,
        volatile signed __int32 **a2)
{
  __int64 v3; // r8
  const unsigned __int16 *v4; // rdx
  volatile signed __int32 *v5; // rax
  __int64 result; // rax
  volatile signed __int32 *v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = a1 + 52;
  if ( !a1 )
    v3 = 76LL;
  if ( *(_DWORD *)v3 )
  {
    switch ( *(_DWORD *)v3 )
    {
      case 1:
        v4 = L"Enabled";
        break;
      case 2:
        v4 = L"ImplicitlyDisabled";
        break;
      case 3:
        v4 = L"ExplicitlyDisabled";
        break;
      default:
        v4 = L"Unknown";
        break;
    }
  }
  else
  {
    v4 = L"Undetermined";
  }
  try
  {
    winrt::hstring::hstring((winrt::hstring *)&v7, v4);
    v5 = v7;
    v7 = 0LL;
    *a2 = v5;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v7);
  }
  return result;
}

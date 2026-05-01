/*
 * XREFs of ?IsHardwareKeyboardAvailable@TabTipAdapterPolicy@KeyboardHosting@@AEBA_NXZ @ 0x18014AB08
 * Callers:
 *     ?GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEAE1PEAW4CoreKeyboardModality@45678@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@8@@Z @ 0x18014A6A0 (-GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Intern.c)
 *     ?HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180532D90 (-HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Sh.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAA_NXZ @ 0x1800D3E20 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAA_NXZ.c)
 */

char __fastcall KeyboardHosting::TabTipAdapterPolicy::IsHardwareKeyboardAvailable(
        KeyboardHosting::TabTipAdapterPolicy *this)
{
  char IsEnabled; // al
  char v3; // r8
  bool v4; // dl
  char result; // al

  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_PATKTI>::GetImpl'::`2'::impl);
  v3 = 0;
  v4 = IsEnabled != 0;
  result = *((_BYTE *)this + 602);
  if ( !v4 )
  {
    if ( result || *((_BYTE *)this + 604) )
      return 1;
    return v3;
  }
  return result;
}

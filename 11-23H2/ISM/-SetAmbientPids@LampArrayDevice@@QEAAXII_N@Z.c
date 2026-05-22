/*
 * XREFs of ?SetAmbientPids@LampArrayDevice@@QEAAXII_N@Z @ 0x18005A824
 * Callers:
 *     _lambda_f101df8c9ba8d1edb157401080fcbaae_::operator() @ 0x180059C5C (_lambda_f101df8c9ba8d1edb157401080fcbaae_--operator().c)
 *     ?UpdateDeviceAmbientProcess@LampArrayRawInputProvider@@AEAAXXZ @ 0x18005A4F8 (-UpdateDeviceAmbientProcess@LampArrayRawInputProvider@@AEAAXXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@wil@@QEAA_NXZ @ 0x1800589B8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@w.c)
 */

void __fastcall LampArrayDevice::SetAmbientPids(LampArrayDevice *this, int a2, int a3, char a4)
{
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_AmbientDeviceLighting>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_AmbientDeviceLighting>::GetImpl'::`2'::impl) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x296,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
      v8);
  *((_DWORD *)this + 54) = a2;
  *((_DWORD *)this + 55) = a3;
  *((_BYTE *)this + 224) = a4;
}

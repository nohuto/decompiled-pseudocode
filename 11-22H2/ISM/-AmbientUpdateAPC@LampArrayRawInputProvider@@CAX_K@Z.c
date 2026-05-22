/*
 * XREFs of ?AmbientUpdateAPC@LampArrayRawInputProvider@@CAX_K@Z @ 0x180062500
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@wil@@QEAA_NXZ @ 0x180059DE0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@w.c)
 *     ?UpdateDeviceAmbientProcess@LampArrayRawInputProvider@@AEAAXXZ @ 0x180062EDC (-UpdateDeviceAmbientProcess@LampArrayRawInputProvider@@AEAAXXZ.c)
 */

void __fastcall LampArrayRawInputProvider::AmbientUpdateAPC(HANDLE *Parameter)
{
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_AmbientDeviceLighting>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_AmbientDeviceLighting>::GetImpl'::`2'::impl) )
  {
    LampArrayRawInputProvider::UpdateDeviceAmbientProcess((LampArrayRawInputProvider *)Parameter);
    SetEvent(Parameter[41]);
  }
}

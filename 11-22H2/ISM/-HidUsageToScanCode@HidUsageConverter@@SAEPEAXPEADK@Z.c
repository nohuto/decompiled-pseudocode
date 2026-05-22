/*
 * XREFs of ?HidUsageToScanCode@HidUsageConverter@@SAEPEAXPEADK@Z @ 0x180103A10
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@wil@@QEAA_NXZ @ 0x180059DE0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@w.c)
 */

BOOLEAN __fastcall HidUsageConverter::HidUsageToScanCode(_BYTE *Context, PCHAR NewScanCodes, ULONG Length)
{
  *(_WORD *)Context = 0;
  if ( Length == 1 )
  {
    *Context = *NewScanCodes;
  }
  else if ( Length == 2
         || wil::details::FeatureImpl<__WilFeatureTraits_Feature_AmbientDeviceLighting>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_AmbientDeviceLighting>::GetImpl'::`2'::impl)
         && Length == 3 )
  {
    Context[1] = *NewScanCodes;
    *Context = NewScanCodes[1];
  }
  return 1;
}

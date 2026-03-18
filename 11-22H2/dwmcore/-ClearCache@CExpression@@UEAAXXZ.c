/*
 * XREFs of ?ClearCache@CExpression@@UEAAXXZ @ 0x18022C300
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1801100E8 (memset_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2460007739@@@details@wil@@QEAA_NXZ @ 0x18011A024 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_2460007739@@@details@wil@@QEAA_NX.c)
 */

void __fastcall CExpression::ClearCache(CExpression *this)
{
  char IsEnabled; // al
  void *v3; // rcx

  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_2460007739>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_2460007739>::GetImpl'::`2'::impl);
  v3 = (void *)*((_QWORD *)this + 45);
  if ( !IsEnabled || v3 )
    memset_0(v3, 0, *((unsigned int *)this + 92));
}

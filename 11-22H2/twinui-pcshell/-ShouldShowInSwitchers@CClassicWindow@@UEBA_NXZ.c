/*
 * XREFs of ?ShouldShowInSwitchers@CClassicWindow@@UEBA_NXZ @ 0x1800D1A80
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAA_NXZ @ 0x1800D1AC0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAA_NX.c)
 */

char __fastcall CClassicWindow::ShouldShowInSwitchers(CClassicWindow *this)
{
  int v1; // ebx
  char IsEnabled; // al
  char v3; // cl
  bool v4; // zf

  v1 = *((_DWORD *)this + 18);
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl);
  v3 = 0;
  if ( IsEnabled )
    v4 = (v1 & 0x13) == 0;
  else
    v4 = (v1 & 3) == 0;
  if ( !v4 && (v1 & 8) == 0 )
    return 1;
  return v3;
}

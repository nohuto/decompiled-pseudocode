/*
 * XREFs of ?s_ShouldShowInSwitchers@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z @ 0x1800D1A44
 * Callers:
 *     ?ShouldHaveAppView@CClassicWindow@@UEBA_NXZ @ 0x1800D1580 (-ShouldHaveAppView@CClassicWindow@@UEBA_NXZ.c)
 *     ?ChangeWindowType@CClassicWindow@@UEAA?AW4WindowChangeFlags@@W42@@Z @ 0x1800D1850 (-ChangeWindowType@CClassicWindow@@UEAA-AW4WindowChangeFlags@@W42@@Z.c)
 *     ?SetOwner@CClassicWindow@@UEAAXPEAUIClassicWindow@@@Z @ 0x1802D0480 (-SetOwner@CClassicWindow@@UEAAXPEAUIClassicWindow@@@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAA_NXZ @ 0x1800D1AC0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAA_NX.c)
 */

char __fastcall CClassicWindow::s_ShouldShowInSwitchers(char a1)
{
  char IsEnabled; // al
  char v3; // dl
  bool v4; // zf

  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl);
  v3 = 0;
  if ( IsEnabled )
    v4 = (a1 & 0x13) == 0;
  else
    v4 = (a1 & 3) == 0;
  if ( !v4 && (a1 & 8) == 0 )
    return 1;
  return v3;
}

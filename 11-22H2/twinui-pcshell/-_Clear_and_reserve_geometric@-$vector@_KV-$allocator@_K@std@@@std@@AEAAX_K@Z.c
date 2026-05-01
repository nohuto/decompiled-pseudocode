/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@_KV?$allocator@_K@std@@@std@@AEAAX_K@Z @ 0x18066D634
 * Callers:
 *     ?SnapAssistCompleted@CSnapAssistControllerBase@@UEAAJW4SnapAssistUsage@WindowSnapping@Shell@Internal@Windows@@IPEA_K@Z @ 0x18066B9B0 (-SnapAssistCompleted@CSnapAssistControllerBase@@UEAAJW4SnapAssistUsage@WindowSnapping@Shell@Inte.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x18022B2D4 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ?_Calculate_growth@?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x180247DC4 (-_Calculate_growth@-$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Win.c)
 */

char *__fastcall std::vector<unsigned __int64>::_Clear_and_reserve_geometric(void **a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi

  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v3 = std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::_Calculate_growth(
         a1,
         a2);
  if ( *a1 )
  {
    std::_Deallocate<16,0>(*a1, ((_BYTE *)a1[2] - (_BYTE *)*a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return std::vector<unsigned __int64>::_Buy_raw(a1, v3);
}

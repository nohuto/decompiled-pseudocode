/*
 * XREFs of ??$?4U?$default_delete@VCSharedCircularQueue@@@std@@$0A@@?$unique_ptr@VCSharedCircularQueue@@U?$default_delete@VCSharedCircularQueue@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F856C
 * Callers:
 *     ?AddTipPoints@CGenericInk@DirectComposition@@UEAAJPEBEII@Z @ 0x1800F85F0 (-AddTipPoints@CGenericInk@DirectComposition@@UEAAJPEBEII@Z.c)
 *     ?CreatePerFrameDataQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z @ 0x1800FC4B4 (-CreatePerFrameDataQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z.c)
 *     ?CreateTipPointsQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z @ 0x1800FC750 (-CreateTipPointsQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z.c)
 *     ?AddTipPoints@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJIIPEBE@Z @ 0x180184EB4 (-AddTipPoints@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJIIPE.c)
 *     ?SetPropertiesForPresentCount@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJI_NIPEBE@Z @ 0x1801853EC (-SetPropertiesForPresentCount@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Wi.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

void **__fastcall std::unique_ptr<CSharedCircularQueue>::operator=<std::default_delete<CSharedCircularQueue>,0>(
        void **a1,
        void **a2)
{
  void *v3; // rax
  void *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      operator delete(v4);
  }
  return a1;
}

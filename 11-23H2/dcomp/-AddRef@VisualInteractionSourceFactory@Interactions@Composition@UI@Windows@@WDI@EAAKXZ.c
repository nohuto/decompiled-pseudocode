/*
 * XREFs of ?AddRef@VisualInteractionSourceFactory@Interactions@Composition@UI@Windows@@WDI@EAAKXZ @ 0x1800AA150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall Windows::UI::Composition::Interactions::VisualInteractionSourceFactory::AddRef(__int64 a1)
{
  return Windows::UI::Composition::Interactions::Internal::EdgyExperienceSourceFactory::AddRef((Windows::UI::Composition::Interactions::Internal::EdgyExperienceSourceFactory *)(a1 - 56));
}

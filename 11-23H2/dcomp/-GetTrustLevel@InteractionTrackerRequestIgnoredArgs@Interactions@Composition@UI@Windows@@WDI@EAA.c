/*
 * XREFs of ?GetTrustLevel@InteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@WDI@EAAJPEAW4TrustLevel@@@Z @ 0x1800A99B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs::GetTrustLevel(
        __int64 a1,
        enum TrustLevel *a2)
{
  return Windows::UI::Composition::Private::CompositionPartnerDebugSettingsStatics::GetTrustLevel(
           (Windows::UI::Composition::Private::CompositionPartnerDebugSettingsStatics *)(a1 - 56),
           a2);
}

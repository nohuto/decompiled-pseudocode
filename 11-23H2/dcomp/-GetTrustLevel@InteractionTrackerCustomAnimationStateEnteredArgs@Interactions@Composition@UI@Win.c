/*
 * XREFs of ?GetTrustLevel@InteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@@WEA@EAAJPEAW4TrustLevel@@@Z @ 0x1800AA770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs::GetTrustLevel(
        __int64 a1,
        enum TrustLevel *a2)
{
  return Windows::UI::Composition::Private::CompositionPartnerDebugSettingsStatics::GetTrustLevel(
           (Windows::UI::Composition::Private::CompositionPartnerDebugSettingsStatics *)(a1 - 64),
           a2);
}

/*
 * XREFs of ?GetTrustLevel@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@WEI@EAAJPEAW4TrustLevel@@@Z @ 0x1800AFAE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs::GetTrustLevel(
        __int64 a1,
        enum TrustLevel *a2)
{
  return Windows::UI::Composition::Private::CompositionPartnerDebugSettingsStatics::GetTrustLevel(
           (Windows::UI::Composition::Private::CompositionPartnerDebugSettingsStatics *)(a1 - 72),
           a2);
}

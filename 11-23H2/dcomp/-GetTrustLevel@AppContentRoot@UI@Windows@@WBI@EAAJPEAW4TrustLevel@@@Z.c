/*
 * XREFs of ?GetTrustLevel@AppContentRoot@UI@Windows@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x1800AD550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::AppContentRoot::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return Windows::UI::Composition::Private::CompositionPartnerDebugSettingsStatics::GetTrustLevel(
           (Windows::UI::Composition::Private::CompositionPartnerDebugSettingsStatics *)(a1 - 24),
           a2);
}

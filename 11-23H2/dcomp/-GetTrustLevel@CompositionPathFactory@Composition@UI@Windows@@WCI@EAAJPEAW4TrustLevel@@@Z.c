/*
 * XREFs of ?GetTrustLevel@CompositionPathFactory@Composition@UI@Windows@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x1800A9970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::CompositionPathFactory::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return Windows::UI::Composition::Private::CompositionPartnerDebugSettingsStatics::GetTrustLevel(
           (Windows::UI::Composition::Private::CompositionPartnerDebugSettingsStatics *)(a1 - 40),
           a2);
}

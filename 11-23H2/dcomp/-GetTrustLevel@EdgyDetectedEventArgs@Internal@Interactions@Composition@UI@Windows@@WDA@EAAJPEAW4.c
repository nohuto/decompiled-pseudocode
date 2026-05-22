/*
 * XREFs of ?GetTrustLevel@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@WDA@EAAJPEAW4TrustLevel@@@Z @ 0x1800A9990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs::GetTrustLevel(
        __int64 a1,
        enum TrustLevel *a2)
{
  return Windows::UI::Composition::Private::CompositionPartnerDebugSettingsStatics::GetTrustLevel(
           (Windows::UI::Composition::Private::CompositionPartnerDebugSettingsStatics *)(a1 - 48),
           a2);
}

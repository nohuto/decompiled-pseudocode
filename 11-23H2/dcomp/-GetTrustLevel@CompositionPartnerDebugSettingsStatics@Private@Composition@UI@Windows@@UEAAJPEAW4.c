/*
 * XREFs of ?GetTrustLevel@CompositionPartnerDebugSettingsStatics@Private@Composition@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z @ 0x18008F310
 * Callers:
 *     ?GetTrustLevel@CompositionPathFactory@Composition@UI@Windows@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x1800A9970 (-GetTrustLevel@CompositionPathFactory@Composition@UI@Windows@@WCI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@WDA@EAAJPEAW4TrustLevel@@@Z @ 0x1800A9990 (-GetTrustLevel@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@WDA@EAAJPEAW4.c)
 *     ?GetTrustLevel@InteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@WDI@EAAJPEAW4TrustLevel@@@Z @ 0x1800A99B0 (-GetTrustLevel@InteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@WDI@EAA.c)
 *     ?GetTrustLevel@InteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@@WEA@EAAJPEAW4TrustLevel@@@Z @ 0x1800AA770 (-GetTrustLevel@InteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Win.c)
 *     ?GetTrustLevel@View@?$HashMap@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@6@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@89Foundation@6@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@89Foundation@6@U?$DefaultLifetimeTraits@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@@89Foundation@6@U?$HashMapOptions@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@6@$0A@$00$0A@@89Foundation@6@@Internal@Collections@Foundation@Windows@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x1800AD530 (-GetTrustLevel@View@-$HashMap@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Wind.c)
 *     ?GetTrustLevel@AppContentRoot@UI@Windows@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x1800AD550 (-GetTrustLevel@AppContentRoot@UI@Windows@@WBI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@WEI@EAAJPEAW4TrustLevel@@@Z @ 0x1800AFAE0 (-GetTrustLevel@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@WE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Private::CompositionPartnerDebugSettingsStatics::GetTrustLevel(
        Windows::UI::Composition::Private::CompositionPartnerDebugSettingsStatics *this,
        enum TrustLevel *a2)
{
  *a2 = BaseTrust;
  return 0LL;
}

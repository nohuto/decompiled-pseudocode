/*
 * XREFs of ?GetTrustLevel@TrayInfoTipAppInfoProvider@SystemTray@@UEAAJPEAW4TrustLevel@@@Z @ 0x180181ED0
 * Callers:
 *     ?GetTrustLevel@?$SimpleVectorView@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$Vector@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x1801EB910 (-GetTrustLevel@-$SimpleVectorView@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@.c)
 *     ?GetTrustLevel@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@WDA@EAAJPEAW4TrustLevel@@@Z @ 0x1801EFAC0 (-GetTrustLevel@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@WDA@EAAJPEAW4.c)
 *     ?GetTrustLevel@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x1801F8150 (-GetTrustLevel@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBI@EAAJPEAW4TrustLev.c)
 *     ?GetTrustLevel@BrokeredViewTabConverterStatics@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x1801F9690 (-GetTrustLevel@BrokeredViewTabConverterStatics@@WCI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CLaunchActivatedEventArgs@@W7EAAJPEAW4TrustLevel@@@Z @ 0x1801F9E40 (-GetTrustLevel@CLaunchActivatedEventArgs@@W7EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@WCA@EAAJPEAW4TrustLevel@@@Z @ 0x18020CF70 (-GetTrustLevel@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@WCA@EAAJPEAW4TrustL.c)
 *     ?GetTrustLevel@CLaunchActivatedEventArgs@@WBAA@EAAJPEAW4TrustLevel@@@Z @ 0x180210A80 (-GetTrustLevel@CLaunchActivatedEventArgs@@WBAA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CLaunchActivatedEventArgs@@WJI@EAAJPEAW4TrustLevel@@@Z @ 0x180210AA0 (-GetTrustLevel@CLaunchActivatedEventArgs@@WJI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CLaunchActivatedEventArgs@@WKA@EAAJPEAW4TrustLevel@@@Z @ 0x180210AC0 (-GetTrustLevel@CLaunchActivatedEventArgs@@WKA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CLaunchActivatedEventArgs@@WKI@EAAJPEAW4TrustLevel@@@Z @ 0x180210AE0 (-GetTrustLevel@CLaunchActivatedEventArgs@@WKI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CLaunchActivatedEventArgs@@WNI@EAAJPEAW4TrustLevel@@@Z @ 0x180210B00 (-GetTrustLevel@CLaunchActivatedEventArgs@@WNI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CLaunchActivatedEventArgs@@WPA@EAAJPEAW4TrustLevel@@@Z @ 0x180210B20 (-GetTrustLevel@CLaunchActivatedEventArgs@@WPA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CLaunchActivatedEventArgs@@WPI@EAAJPEAW4TrustLevel@@@Z @ 0x180210B40 (-GetTrustLevel@CLaunchActivatedEventArgs@@WPI@EAAJPEAW4TrustLevel@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemTray::TrayInfoTipAppInfoProvider::GetTrustLevel(
        SystemTray::TrayInfoTipAppInfoProvider *this,
        enum TrustLevel *a2)
{
  *a2 = BaseTrust;
  return 0LL;
}

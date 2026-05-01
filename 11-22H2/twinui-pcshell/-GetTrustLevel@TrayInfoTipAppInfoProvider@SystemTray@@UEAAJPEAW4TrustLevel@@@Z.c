/*
 * XREFs of ?GetTrustLevel@TrayInfoTipAppInfoProvider@SystemTray@@UEAAJPEAW4TrustLevel@@@Z @ 0x1801BFBF0
 * Callers:
 *     ?GetTrustLevel@View@?$HashMap@PEAUHSTRING__@@PEAU1@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@3456@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U83456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x18028EF40 (-GetTrustLevel@View@-$HashMap@PEAUHSTRING__@@PEAU1@U-$DefaultHash@PEAUHSTRING__@@@Internal@Colle.c)
 *     ?GetTrustLevel@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@WDA@EAAJPEAW4TrustLevel@@@Z @ 0x180293530 (-GetTrustLevel@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@WDA@EAAJPEAW4.c)
 *     ?GetTrustLevel@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x18029B9B0 (-GetTrustLevel@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBI@EAAJPEAW4TrustLev.c)
 *     ?GetTrustLevel@CLaunchActivatedEventArgs@@W7EAAJPEAW4TrustLevel@@@Z @ 0x18029D160 (-GetTrustLevel@CLaunchActivatedEventArgs@@W7EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@WCA@EAAJPEAW4TrustLevel@@@Z @ 0x1802A9080 (-GetTrustLevel@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@WCA@EAAJPEAW4TrustL.c)
 *     ?GetTrustLevel@CLaunchActivatedEventArgs@@WBAA@EAAJPEAW4TrustLevel@@@Z @ 0x1802AD5B0 (-GetTrustLevel@CLaunchActivatedEventArgs@@WBAA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CLaunchActivatedEventArgs@@WJI@EAAJPEAW4TrustLevel@@@Z @ 0x1802AD5D0 (-GetTrustLevel@CLaunchActivatedEventArgs@@WJI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CLaunchActivatedEventArgs@@WKA@EAAJPEAW4TrustLevel@@@Z @ 0x1802AD5F0 (-GetTrustLevel@CLaunchActivatedEventArgs@@WKA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CLaunchActivatedEventArgs@@WKI@EAAJPEAW4TrustLevel@@@Z @ 0x1802AD610 (-GetTrustLevel@CLaunchActivatedEventArgs@@WKI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CLaunchActivatedEventArgs@@WNI@EAAJPEAW4TrustLevel@@@Z @ 0x1802AD630 (-GetTrustLevel@CLaunchActivatedEventArgs@@WNI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CLaunchActivatedEventArgs@@WPA@EAAJPEAW4TrustLevel@@@Z @ 0x1802AD650 (-GetTrustLevel@CLaunchActivatedEventArgs@@WPA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CLaunchActivatedEventArgs@@WPI@EAAJPEAW4TrustLevel@@@Z @ 0x1802AD670 (-GetTrustLevel@CLaunchActivatedEventArgs@@WPI@EAAJPEAW4TrustLevel@@@Z.c)
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

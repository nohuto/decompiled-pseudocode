/*
 * XREFs of ?GetTrustLevel@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAW4TrustLevel@@@Z @ 0x180039180
 * Callers:
 *     ?GetTrustLevel@?$SimpleVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@V?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x180039190 (-GetTrustLevel@-$SimpleVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@Appli.c)
 *     ?GetTrustLevel@ContentDeliveryManagerConfigurationStatics@ContentManagement@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x18004ECB0 (-GetTrustLevel@ContentDeliveryManagerConfigurationStatics@ContentManagement@@WCI@EAAJPEAW4TrustL.c)
 *     ?GetTrustLevel@ContentManagementService@ContentManagement@@WDA@EAAJPEAW4TrustLevel@@@Z @ 0x18004ECD0 (-GetTrustLevel@ContentManagementService@ContentManagement@@WDA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@ContentManagementService@ContentManagement@@WDI@EAAJPEAW4TrustLevel@@@Z @ 0x18004ECF0 (-GetTrustLevel@ContentManagementService@ContentManagement@@WDI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@ContentManagementService@ContentManagement@@WEA@EAAJPEAW4TrustLevel@@@Z @ 0x18004ED10 (-GetTrustLevel@ContentManagementService@ContentManagement@@WEA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@ContentManagementService@ContentManagement@@WEI@EAAJPEAW4TrustLevel@@@Z @ 0x18004ED30 (-GetTrustLevel@ContentManagementService@ContentManagement@@WEI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@ContentManagementService@ContentManagement@@WFA@EAAJPEAW4TrustLevel@@@Z @ 0x18004ED50 (-GetTrustLevel@ContentManagementService@ContentManagement@@WFA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@ContentManagementService@ContentManagement@@WFI@EAAJPEAW4TrustLevel@@@Z @ 0x18004ED70 (-GetTrustLevel@ContentManagementService@ContentManagement@@WFI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@ContentManagementService@ContentManagement@@WGA@EAAJPEAW4TrustLevel@@@Z @ 0x18004ED90 (-GetTrustLevel@ContentManagementService@ContentManagement@@WGA@EAAJPEAW4TrustLevel@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::GetTrustLevel(
        Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *this,
        enum TrustLevel *a2)
{
  *a2 = BaseTrust;
  return 0LL;
}

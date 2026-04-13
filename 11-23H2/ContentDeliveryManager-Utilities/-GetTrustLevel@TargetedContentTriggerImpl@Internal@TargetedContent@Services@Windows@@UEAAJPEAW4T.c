/*
 * XREFs of ?GetTrustLevel@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAW4TrustLevel@@@Z @ 0x180036E10
 * Callers:
 *     ?GetTrustLevel@?$SimpleVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@V?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x180036E20 (-GetTrustLevel@-$SimpleVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@Appli.c)
 *     ?GetTrustLevel@ContentDeliveryManagerConfigurationStatics@ContentManagement@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x18004A230 (-GetTrustLevel@ContentDeliveryManagerConfigurationStatics@ContentManagement@@WCI@EAAJPEAW4TrustL.c)
 *     ?GetTrustLevel@ContentManagementService@ContentManagement@@WDA@EAAJPEAW4TrustLevel@@@Z @ 0x18004A250 (-GetTrustLevel@ContentManagementService@ContentManagement@@WDA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@ContentManagementService@ContentManagement@@WDI@EAAJPEAW4TrustLevel@@@Z @ 0x18004A270 (-GetTrustLevel@ContentManagementService@ContentManagement@@WDI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@ContentManagementService@ContentManagement@@WEA@EAAJPEAW4TrustLevel@@@Z @ 0x18004A290 (-GetTrustLevel@ContentManagementService@ContentManagement@@WEA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@ContentManagementService@ContentManagement@@WEI@EAAJPEAW4TrustLevel@@@Z @ 0x18004A2B0 (-GetTrustLevel@ContentManagementService@ContentManagement@@WEI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@ContentManagementService@ContentManagement@@WFA@EAAJPEAW4TrustLevel@@@Z @ 0x18004A2D0 (-GetTrustLevel@ContentManagementService@ContentManagement@@WFA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@ContentManagementService@ContentManagement@@WFI@EAAJPEAW4TrustLevel@@@Z @ 0x18004A2F0 (-GetTrustLevel@ContentManagementService@ContentManagement@@WFI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@ContentManagementService@ContentManagement@@WGA@EAAJPEAW4TrustLevel@@@Z @ 0x18004A310 (-GetTrustLevel@ContentManagementService@ContentManagement@@WGA@EAAJPEAW4TrustLevel@@@Z.c)
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

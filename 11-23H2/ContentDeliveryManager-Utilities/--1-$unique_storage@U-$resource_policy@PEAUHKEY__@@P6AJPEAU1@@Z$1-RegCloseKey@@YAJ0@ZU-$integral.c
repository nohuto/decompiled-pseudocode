/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C1E8
 * Callers:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18002C104 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 *     ?CreateKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z @ 0x1800308E8 (-CreateKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z.c)
 *     ?DoesKeyExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBGPEA_N@Z @ 0x1800312DC (-DoesKeyExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBGPEA_N@Z.c)
 *     ??$WriteInfo@UHealthEvaluationInfo@details@Health@CreativeFramework@@@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXAEAUHealthInfoHeader@123@AEAUHealthEvaluationInfo@123@AEA_N2PEBG@Z @ 0x18004F1AC (--$WriteInfo@UHealthEvaluationInfo@details@Health@CreativeFramework@@@BaseScenarioEvents@details.c)
 *     ??$WriteInfo@UHealthTrackingInfo@details@Health@CreativeFramework@@@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXAEAUHealthInfoHeader@123@AEAUHealthTrackingInfo@123@AEA_N2PEBG@Z @ 0x18004F2A8 (--$WriteInfo@UHealthTrackingInfo@details@Health@CreativeFramework@@@BaseScenarioEvents@details@H.c)
 *     ??$WriteInfo@UPlacementReportedInfo@details@Health@CreativeFramework@@@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXAEAUHealthInfoHeader@123@AEAUPlacementReportedInfo@123@AEA_N2PEBG@Z @ 0x18004F394 (--$WriteInfo@UPlacementReportedInfo@details@Health@CreativeFramework@@@BaseScenarioEvents@detail.c)
 *     ?GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z @ 0x18005809C (-GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z.c)
 *     ?GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z @ 0x180058DC8 (-GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z.c)
 *     ?GetLockScreenRegistryKeyRoot@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAUHKEY__@@@Z @ 0x180059158 (-GetLockScreenRegistryKeyRoot@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAUH.c)
 *     ?PeekLockScreenRegistryKeys@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAG11PEA_N@Z @ 0x18005B374 (-PeekLockScreenRegistryKeys@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAG11P.c)
 *     ?DeleteLockScreenRegistryKeys@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ @ 0x1800BAF7C (-DeleteLockScreenRegistryKeys@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ.c)
 *     ?GetCurrentUserSidString@Actions@CreativeFramework@@YAJPEAPEA_W@Z @ 0x1800BB334 (-GetCurrentUserSidString@Actions@CreativeFramework@@YAJPEAPEA_W@Z.c)
 *     ?SetLockScreenRegistryKeys@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ @ 0x1800BB838 (-SetLockScreenRegistryKeys@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ.c)
 *     ?DeleteDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEB_WPEA_N@Z @ 0x1800BBF9C (-DeleteDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEB_WPEA_N@Z.c)
 *     ?GetDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEAPEA_W00@Z @ 0x1800BC370 (-GetDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEAPEA_W00@Z.c)
 *     ?SetDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEB_W00@Z @ 0x1800BCC38 (-SetDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEB_W00@Z.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(
        HKEY *a1)
{
  HKEY v1; // rcx
  LSTATUS result; // eax

  v1 = *a1;
  if ( v1 )
    return RegCloseKey(v1);
  return result;
}

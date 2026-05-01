/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@UIWeakReferenceSource@@UIImmersiveLayoutChanges@@UIApplicationFrameEventHandler@@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@UIGameBarWindowManager@GamingOverlay@Internal@Windows@@UIGameBarGameLauncher@GamingOverlay@Internal@Windows@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1803FB554
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveLayoutChanges@@UIApplicationFrameEventHandler@@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@UIGameBarWindowManager@89Windows@@UIGameBarGameLauncher@89Windows@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1803FDD60 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_1803FDD60.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,IImmersiveLayoutChanges,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,Windows::Internal::GamingOverlay::IGameBarGameLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::FillArrayWithIid(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  int v3; // ecx
  __int64 result; // rax

  v3 = *a2;
  *(GUID *)(a3 + 16LL * *a2) = GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 1)) = GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 2)) = GUID_6d5140c1_7436_11ce_8034_00aa006009fa;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 3)) = _uuidof__AUIWeakReferenceSource_Details_Platform__;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 4)) = GUID_6a5e657d_223a_4875_838b_c311ed73523b;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 5)) = GUID_ea5d0de4_770d_4da0_a9f8_d7f9a140ff79;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 6)) = GUID_c44450f0_731e_4fdb_95fe_d031838a5b14;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 7)) = GUID_22d2bed2_535d_5ac7_a0a0_1af47032e0a1;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 8)) = GUID_97c8cb76_a97a_5c93_9b13_bb4bb78f99fd;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 9)) = GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0;
  result = (unsigned int)(v3 + 10);
  *a2 = result;
  return result;
}

/*
 * XREFs of ??$GetImplementedIIDS@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveLayoutChanges@@UIApplicationFrameEventHandler@@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@UIGameBarWindowManager@89Windows@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveLayoutChanges@@UIApplicationFrameEventHandler@@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@UIGameBarWindowManager@89Windows@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@123@PEAKPEAPEAU_GUID@@@Z @ 0x180326680
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveLayoutChanges@@UIApplicationFrameEventHandler@@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@UIGameBarWindowManager@89Windows@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180330880 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_180330880.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::GetImplementedIIDS<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>>(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  GUID *v5; // rax

  *a3 = 0LL;
  *a2 = 0;
  v5 = (GUID *)CoTaskMemAlloc(0xA0uLL);
  if ( !v5 )
    return 2147942414LL;
  *v5 = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
  v5[1] = GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352;
  v5[2] = GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4;
  v5[3] = GUID_6d5140c1_7436_11ce_8034_00aa006009fa;
  v5[4] = _uuidof__AUIWeakReferenceSource_Details_Platform__;
  v5[5] = GUID_6a5e657d_223a_4875_838b_c311ed73523b;
  v5[6] = GUID_ea5d0de4_770d_4da0_a9f8_d7f9a140ff79;
  v5[7] = GUID_c44450f0_731e_4fdb_95fe_d031838a5b14;
  v5[8] = GUID_22d2bed2_535d_5ac7_a0a0_1af47032e0a1;
  v5[9] = GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0;
  *a2 = 10;
  *a3 = v5;
  return 0LL;
}

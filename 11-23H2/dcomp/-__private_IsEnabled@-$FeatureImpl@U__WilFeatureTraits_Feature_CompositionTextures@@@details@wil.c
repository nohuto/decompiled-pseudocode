/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompositionTextures@@@details@wil@@QEAA_NXZ @ 0x18009B8C4
 * Callers:
 *     ?CResorceProxy_SetContent@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIUnknown@@@Z @ 0x180004238 (-CResorceProxy_SetContent@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIUnknown@@@Z.c)
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ?MarshalSurface@CompositionSurfaceBrush@Composition@UI@Windows@@EEAAJPEAVSurfaceBindPoint@234@PEAUICompositionSurface@234@@Z @ 0x1800304E0 (-MarshalSurface@CompositionSurfaceBrush@Composition@UI@Windows@@EEAAJPEAVSurfaceBindPoint@234@PE.c)
 *     ?NotifyUnderlyingContentChange@SurfaceBindPoint@Composition@UI@Windows@@QEAAXXZ @ 0x18004B320 (-NotifyUnderlyingContentChange@SurfaceBindPoint@Composition@UI@Windows@@QEAAXXZ.c)
 *     ?AttachSurface@SurfaceBindPoint@Composition@UI@Windows@@AEAAJPEAUICompositionSurface@234@@Z @ 0x180090AD0 (-AttachSurface@SurfaceBindPoint@Composition@UI@Windows@@AEAAJPEAUICompositionSurface@234@@Z.c)
 *     ?CheckCompositionTextureSupport@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAH@Z @ 0x1800A0810 (-CheckCompositionTextureSupport@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAH@Z.c)
 *     ?CreateCompositionTexture@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDCompositionTexture@@@Z @ 0x1800A08F0 (-CreateCompositionTexture@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDCompositionText.c)
 *     ?CheckCompositionTextureSupport@Compositor@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAH@Z @ 0x1800A2358 (-CheckCompositionTextureSupport@Compositor@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAH@Z.c)
 *     ?CreateCompositionTexture@Compositor@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAPEAUICompositionTexture@234@@Z @ 0x1800A24A8 (-CreateCompositionTexture@Compositor@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAPEAUIComposit.c)
 *     ?GetAvailableSignalValueForLastPresent@CPresentationManager@@UEAA_KXZ @ 0x1800A73E0 (-GetAvailableSignalValueForLastPresent@CPresentationManager@@UEAA_KXZ.c)
 *     ?SetSyncId@CPresentationManager@@UEAAX_K@Z @ 0x1800A76F0 (-SetSyncId@CPresentationManager@@UEAAX_K@Z.c)
 *     ?Present@CPresentationManager@@UEAAJXZ @ 0x1801ADEE0 (-Present@CPresentationManager@@UEAAJXZ.c)
 *     ?PrePresent@CPresentationSurface@@UEAAJPEAPEAUIUnknown@@@Z @ 0x1801B0070 (-PrePresent@CPresentationSurface@@UEAAJPEAPEAUIUnknown@@@Z.c)
 *     ?Present@CSynchronizationContext11Driver@@UEAAJ_KU_LUID@@0PEAXAEAV?$vector@PEAUIUnknown@@V?$allocator@PEAUIUnknown@@@std@@@std@@@Z @ 0x1801B1C90 (-Present@CSynchronizationContext11Driver@@UEAAJ_KU_LUID@@0PEAXAEAV-$vector@PEAUIUnknown@@V-$allo.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CompositionTextures@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18009ADBC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CompositionTextures@@@de.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CompositionTextures@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18009B55C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CompositionTextures@@@details@wil@@QEAAX_.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompositionTextures>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompositionTextures>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompositionTextures>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}

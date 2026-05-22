/*
 * XREFs of ?HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z @ 0x1800244CC
 * Callers:
 *     ?CollectStats@CCompFrameStats@@MEAAX_K@Z @ 0x1800026F0 (-CollectStats@CCompFrameStats@@MEAAX_K@Z.c)
 *     ?WaitForCompletedFrameStats@CCompFrameStats@@IEAA_N_KI@Z @ 0x180002B84 (-WaitForCompletedFrameStats@CCompFrameStats@@IEAA_N_KI@Z.c)
 *     ?FrameTargetData@CCompFrameStats@@UEBA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@PEBUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x180003910 (-FrameTargetData@CCompFrameStats@@UEBA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@PEBUtagCOMPOSITION_TAR.c)
 *     DCompositionGetFrameStatistics @ 0x180006720 (DCompositionGetFrameStatistics.c)
 *     ?CurrentFrameId@CCompFrameStats@@UEBA_KW4COMPOSITION_FRAME_ID_TYPE@@@Z @ 0x180008080 (-CurrentFrameId@CCompFrameStats@@UEBA_KW4COMPOSITION_FRAME_ID_TYPE@@@Z.c)
 *     ?PrimaryTargetId@CCompFrameStats@@UEBAJPEAUtagCOMPOSITION_TARGET_ID@@@Z @ 0x18000A420 (-PrimaryTargetId@CCompFrameStats@@UEBAJPEAUtagCOMPOSITION_TARGET_ID@@@Z.c)
 *     ?IsMultiMon@CCompFrameStats@@UEBA_NXZ @ 0x18000B320 (-IsMultiMon@CCompFrameStats@@UEBA_NXZ.c)
 *     ?SuspendAnimations@KernelChannel@DirectComposition@@UEAAJH@Z @ 0x180012E30 (-SuspendAnimations@KernelChannel@DirectComposition@@UEAAJH@Z.c)
 *     ?OnCommitCompletion@CompositorCommon@Composition@UI@Windows@@AEAAJXZ @ 0x18001C18C (-OnCommitCompletion@CompositorCommon@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?EnsureInitialized@CommentHasher@Composition@UI@Windows@@AEAAXXZ @ 0x1800221F4 (-EnsureInitialized@CommentHasher@Composition@UI@Windows@@AEAAXXZ.c)
 *     DCompositionCreateSharedVisualHandle @ 0x180023FE0 (DCompositionCreateSharedVisualHandle.c)
 *     ?Synchronize@KernelChannel@DirectComposition@@UEAAJPEA_K@Z @ 0x1800243F0 (-Synchronize@KernelChannel@DirectComposition@@UEAAJPEA_K@Z.c)
 *     ?HashData@CommentHasher@Composition@UI@Windows@@AEAA?AU_GUID@@PEBE_K@Z @ 0x180024414 (-HashData@CommentHasher@Composition@UI@Windows@@AEAA-AU_GUID@@PEBE_K@Z.c)
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     DCompositionCreateSharedResourceHandle @ 0x18002B960 (DCompositionCreateSharedResourceHandle.c)
 *     ?RuntimeClassInitialize@VisualTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAX@Z @ 0x18005D944 (-RuntimeClassInitialize@VisualTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAX@Z.c)
 *     ?AreEffectsFast@Api@CompositionCapabilities@Composition@UI@Windows@@UEAAJPEAE@Z @ 0x180066FD0 (-AreEffectsFast@Api@CompositionCapabilities@Composition@UI@Windows@@UEAAJPEAE@Z.c)
 *     ?CreateTargetHelper@CDevice@DirectComposition@@AEAAJPEAUHWND__@@KPEAPEAUIDCompositionTarget@@@Z @ 0x18006A448 (-CreateTargetHelper@CDevice@DirectComposition@@AEAAJPEAUHWND__@@KPEAPEAUIDCompositionTarget@@@Z.c)
 *     ?Create@KernelChannel@DirectComposition@@SAJPEAIPEAPEAXPEAPEAVChannel@2@@Z @ 0x18008338C (-Create@KernelChannel@DirectComposition@@SAJPEAIPEAPEAXPEAPEAVChannel@2@@Z.c)
 *     DCompositionCreateSurfaceHandle @ 0x180088D60 (DCompositionCreateSurfaceHandle.c)
 *     ?TelemetrySetApplicationId@KernelChannel@DirectComposition@@UEAAJ_KPEBX@Z @ 0x18008BE90 (-TelemetrySetApplicationId@KernelChannel@DirectComposition@@UEAAJ_KPEBX@Z.c)
 *     ?CreateAndBindSharedSection@KernelChannel@DirectComposition@@UEAAJI_KPEAPEAX@Z @ 0x18008BF50 (-CreateAndBindSharedSection@KernelChannel@DirectComposition@@UEAAJI_KPEAPEAX@Z.c)
 *     ?GetDeletedResources@KernelChannel@DirectComposition@@UEAAJKPEAPEAXPEAK@Z @ 0x18008C670 (-GetDeletedResources@KernelChannel@DirectComposition@@UEAAJKPEAPEAXPEAK@Z.c)
 *     ?SetChannelConnectionId@KernelChannel@DirectComposition@@UEAAJH_K@Z @ 0x18008CC90 (-SetChannelConnectionId@KernelChannel@DirectComposition@@UEAAJH_K@Z.c)
 *     ?ReleaseAllResources@KernelChannel@DirectComposition@@UEAAJPEAE@Z @ 0x18008DA20 (-ReleaseAllResources@KernelChannel@DirectComposition@@UEAAJPEAE@Z.c)
 *     ?WaitForChannel@KernelChannel@DirectComposition@@UEAAJH@Z @ 0x18008DD10 (-WaitForChannel@KernelChannel@DirectComposition@@UEAAJH@Z.c)
 *     ?SetChannelCommitCompletionEvent@KernelChannel@DirectComposition@@UEAAJPEAXH@Z @ 0x18008E000 (-SetChannelCommitCompletionEvent@KernelChannel@DirectComposition@@UEAAJPEAXH@Z.c)
 *     ?SetDebugCounter@KernelChannel@DirectComposition@@UEAAJH@Z @ 0x18008E330 (-SetDebugCounter@KernelChannel@DirectComposition@@UEAAJH@Z.c)
 *     ?InternalRenderVisual@CDevice@DirectComposition@@QEAAJIIIIIW4DXGI_FORMAT@@PEAPEAX1PEAI@Z @ 0x1800F22CC (-InternalRenderVisual@CDevice@DirectComposition@@QEAAJIIIIIW4DXGI_FORMAT@@PEAPEAX1PEAI@Z.c)
 *     DwmEnableMMCSS @ 0x1800FF440 (DwmEnableMMCSS.c)
 *     DCompositionBoostCompositorClock @ 0x1800FF5A0 (DCompositionBoostCompositorClock.c)
 *     DCompositionGetFrameId @ 0x1800FF670 (DCompositionGetFrameId.c)
 *     DCompositionGetStatistics @ 0x1800FF6A0 (DCompositionGetStatistics.c)
 *     DCompositionGetTargetStatistics @ 0x1800FF6E0 (DCompositionGetTargetStatistics.c)
 *     ?AddCrossDeviceVisualChild@KernelChannel@DirectComposition@@UEAAJIPEAVChannel@2@IH0I@Z @ 0x180100370 (-AddCrossDeviceVisualChild@KernelChannel@DirectComposition@@UEAAJIPEAVChannel@2@IH0I@Z.c)
 *     ?CreateSharedResourceHandle@KernelChannel@DirectComposition@@UEAAJIPEAPEAX@Z @ 0x1801003D0 (-CreateSharedResourceHandle@KernelChannel@DirectComposition@@UEAAJIPEAPEAX@Z.c)
 *     ?GetFrameIdFromBatchId@KernelChannel@DirectComposition@@UEAAJKPEA_K@Z @ 0x180100400 (-GetFrameIdFromBatchId@KernelChannel@DirectComposition@@UEAAJKPEA_K@Z.c)
 *     ?NotifySuperWetInkWork@KernelChannel@DirectComposition@@UEAAJXZ @ 0x180100430 (-NotifySuperWetInkWork@KernelChannel@DirectComposition@@UEAAJXZ.c)
 *     ?RemoveCrossDeviceVisualChild@KernelChannel@DirectComposition@@UEAAJIPEAVChannel@2@I@Z @ 0x180100460 (-RemoveCrossDeviceVisualChild@KernelChannel@DirectComposition@@UEAAJIPEAVChannel@2@I@Z.c)
 *     ?AreEffectsSupported@Api@CompositionCapabilities@Composition@UI@Windows@@UEAAJPEAE@Z @ 0x180160CD0 (-AreEffectsSupported@Api@CompositionCapabilities@Composition@UI@Windows@@UEAAJPEAE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::HRESULTFromNTSTATUS(int a1)
{
  if ( a1 <= -1073741790 )
  {
    switch ( a1 )
    {
      case -1073741790:
        return (unsigned int)-2147024891;
      case -2143420410:
        return (unsigned int)-2003302400;
      case -1073741823:
        return (unsigned int)-2147467259;
      case -1073741822:
        return (unsigned int)-2147467263;
    }
    if ( a1 != -1073741816 )
    {
      if ( a1 != -1073741811 )
      {
        if ( a1 == -1073741801 )
          return (unsigned int)-2147024882;
        goto LABEL_6;
      }
      return (unsigned int)-2147024809;
    }
    return (unsigned int)-2147024890;
  }
  if ( a1 == -1073741788 )
    return (unsigned int)-2147024890;
  if ( a1 == -1073741637 )
    return (unsigned int)-2147024809;
  if ( a1 )
LABEL_6:
    a1 |= 0x10000000u;
  return (unsigned int)a1;
}

/*
 * XREFs of ?ResetSmoother@VIDSCH_VSYNC_SMOOTHER@@QEAAXII@Z @ 0x1C00153C4
 * Callers:
 *     ?VidSchiRecordVSyncTiming@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C000DB70 (-VidSchiRecordVSyncTiming@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C0010400 (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 *     VidSchSetMonitorPowerState @ 0x1C0013640 (VidSchSetMonitorPowerState.c)
 *     ?GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJIPEAI@Z @ 0x1C00346B8 (-GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJIPEAI@Z.c)
 *     ?GetSmoothenedFrameTimeQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_K0PEA_KI@Z @ 0x1C00347E0 (-GetSmoothenedFrameTimeQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_K0PEA_KI@Z.c)
 * Callees:
 *     ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x1C0015408 (-Reset@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 *     McTemplateK0xx_EtwWriteTransfer @ 0x1C0039EF8 (McTemplateK0xx_EtwWriteTransfer.c)
 */

void __fastcall VIDSCH_VSYNC_SMOOTHER::ResetSmoother(VIDSCH_VSYNC_SMOOTHER *this, __int64 a2, __int64 a3)
{
  int v4; // ebx

  v4 = a3;
  if ( (byte_1C0076984 & 1) != 0 )
    McTemplateK0xx_EtwWriteTransfer(this, a2, a3, (unsigned int)a2, (unsigned int)a3);
  *((double *)this + 4) = (double)v4;
  LinearFitT<256>::Reset(this, a2, a3);
}

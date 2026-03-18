/*
 * XREFs of ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00E1440
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0006FD0 (NtGdiDdDDICreateDCFromMemory.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00081A8 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     GreEndGdiRenderingToDxSurface @ 0x1C0009364 (GreEndGdiRenderingToDxSurface.c)
 *     GreBeginGdiRenderingToDxSurface @ 0x1C00097F8 (GreBeginGdiRenderingToDxSurface.c)
 *     NtGdiDdDDIDestroyDCFromMemory @ 0x1C000BD90 (NtGdiDdDDIDestroyDCFromMemory.c)
 *     NtGdiGetMonitorID @ 0x1C0010760 (NtGdiGetMonitorID.c)
 *     GreCreateBitmapFromDxSurface @ 0x1C00140E4 (GreCreateBitmapFromDxSurface.c)
 *     GreRealizeDefaultPalette @ 0x1C001F258 (GreRealizeDefaultPalette.c)
 *     GreGetSystemPaletteUse @ 0x1C001F4AC (GreGetSystemPaletteUse.c)
 *     ?GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x1C002AB30 (-GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK.c)
 *     GreLddmProcessDesktopSwitch @ 0x1C006DB84 (GreLddmProcessDesktopSwitch.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C007A4F0 (GreSetRedirectionSurfaceSignaling.c)
 *     GreEnableEUDC @ 0x1C008A748 (GreEnableEUDC.c)
 *     vCleanupUMWindowlessSprite @ 0x1C00D4A00 (vCleanupUMWindowlessSprite.c)
 *     ?GreSetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV?$umptr_r@E@@PEAJ@Z @ 0x1C00E0D68 (-GreSetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV-$umptr_r@E@@PEAJ@Z.c)
 *     GreAccNotifyWindow @ 0x1C00E110C (GreAccNotifyWindow.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0103ED0 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C01083FC (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C011AC4C (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?bSaveRegion@@YAHAEAVXDCOBJ@@J@Z @ 0x1C011B878 (-bSaveRegion@@YAHAEAVXDCOBJ@@J@Z.c)
 *     GreDxgkPreSessionDisconnected @ 0x1C0130D28 (GreDxgkPreSessionDisconnected.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C0265A70 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C0266060 (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C02661A8 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreHLsurfSetPresentFlags @ 0x1C0267ADC (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C0267C44 (GreHLsurfSetUpdateId.c)
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C026BA54 (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x1C026E65C (-DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C026E9E0 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 *     DxgkEngBltViaGDI @ 0x1C026F280 (DxgkEngBltViaGDI.c)
 *     GreDxDwmShutdown @ 0x1C026FEB0 (GreDxDwmShutdown.c)
 *     ?GreGetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV?$umptr_w@E@@PEAJ@Z @ 0x1C02ADF94 (-GreGetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV-$umptr_w@E@@PEAJ@Z.c)
 *     GreCreateHalftonePalette @ 0x1C02D14F0 (GreCreateHalftonePalette.c)
 *     GreGetSystemPaletteEntries @ 0x1C02D1750 (GreGetSystemPaletteEntries.c)
 *     GreRealizePalette @ 0x1C02D181C (GreRealizePalette.c)
 *     GreSetSystemPaletteUse @ 0x1C02D2184 (GreSetSystemPaletteUse.c)
 *     NtGdiUpdateColors @ 0x1C02D2A60 (NtGdiUpdateColors.c)
 *     ?ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C02D8B7C (-ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 *     ?GreCreateDIBitmapComp@@YAPEAUHBITMAP__@@PEAUHDC__@@HHKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAX@Z @ 0x1C02DDE1C (-GreCreateDIBitmapComp@@YAPEAUHBITMAP__@@PEAUHDC__@@HHKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEA.c)
 *     GreGetBitmapDimension @ 0x1C02DE5FC (GreGetBitmapDimension.c)
 *     GreSetBitmapDimension @ 0x1C02DE71C (GreSetBitmapDimension.c)
 * Callees:
 *     <none>
 */

DYNAMICMODECHANGESHARELOCK *__fastcall DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK(
        DYNAMICMODECHANGESHARELOCK *this)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rbx

  v2 = Gre::Base::Globals(this);
  GreAcquireSemaphoreSharedInternal(*((_QWORD *)v2 + 10));
  EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDynamicModeChange", *((_QWORD *)v2 + 10));
  return this;
}

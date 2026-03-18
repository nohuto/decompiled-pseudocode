/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x18026C098
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1800388E0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z @ 0x1800686F0 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z.c)
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x1800AEC60 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x1800AF4F4 (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?QueryInterface@CGDIBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B2F10 (-QueryInterface@CGDIBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x1800B2FA8 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B3118 (-InternalQueryInterface@-$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800B3EB0 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x1800B4BB0 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x1800BDCA4 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x1800C8140 (-GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?Release@?$CMILRefCountBaseT@VCRenderingEffect@@@@UEAAKXZ @ 0x1800C9F70 (-Release@-$CMILRefCountBaseT@VCRenderingEffect@@@@UEAAKXZ.c)
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@@@UEAAKXZ @ 0x1800CA3B0 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@@@UEAAKXZ.c)
 *     ?AddRef@?$CMILRefCountBaseT@UIMILRefCount@@@@UEAAKXZ @ 0x1800CAA60 (-AddRef@-$CMILRefCountBaseT@UIMILRefCount@@@@UEAAKXZ.c)
 *     ?AddRef@CDxHandleBitmapRealization@@UEAAKXZ @ 0x1800CCB00 (-AddRef@CDxHandleBitmapRealization@@UEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?AddRef@CAtlasBitmapResource@@UEAAKXZ @ 0x1800D3C9C (-AddRef@CAtlasBitmapResource@@UEAAKXZ.c)
 *     ?AddRef@CDrawListEntryBatch@@UEAAKXZ @ 0x1800D5BF0 (-AddRef@CDrawListEntryBatch@@UEAAKXZ.c)
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x1801AD988 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     DebugInspectSysMemSurface_NoOpt @ 0x1802629C0 (DebugInspectSysMemSurface_NoOpt.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x18026BE1C (-MilUnexpectedError@@YAXJPEBG@Z.c)
 *     ??1CHolographicInteropTexture@@MEAA@XZ @ 0x18029AA34 (--1CHolographicInteropTexture@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl
  unsigned int v2; // ebx

  v0 = word_1803D1AB8;
  if ( !(_BYTE)word_1803D1AB8 )
    return 0;
  v1 = HIBYTE(word_1803D1AB8);
  v2 = 1;
  if ( HIBYTE(word_1803D1AB8) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_1803D1AB8, 2u, 0LL) >= 0 )
    {
      v1 = HIBYTE(word_1803D1AB8);
      v0 = word_1803D1AB8;
    }
    else
    {
      v0 = 1;
      word_1803D1AB8 = 257;
      v1 = 1;
    }
  }
  if ( !v0 || v1 )
    return 0;
  return v2;
}

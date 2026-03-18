/*
 * XREFs of ??$QueryInterface@VIAdvancedDirectFlipBitmapRealization@@@IUnknown@@QEAAJPEAPEAVIAdvancedDirectFlipBitmapRealization@@@Z @ 0x1801DA7DC
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@33W4DXGI_MODE_ROTATION@@I_N5@Z @ 0x1801DB3D4 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IUnknown::QueryInterface<IAdvancedDirectFlipBitmapRealization>(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64),
        __int64 a2)
{
  return (**a1)(a1, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, a2);
}

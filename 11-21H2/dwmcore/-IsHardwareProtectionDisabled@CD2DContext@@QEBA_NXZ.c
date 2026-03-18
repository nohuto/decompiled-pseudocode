/*
 * XREFs of ?IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ @ 0x1800BCBA8
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@33W4DXGI_MODE_ROTATION@@I_N5@Z @ 0x1800074D8 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x18007F688 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV?$span@$$CBG$0?0@gsl@@PEAPEAX1@Z @ 0x1800A70B0 (-AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV-$span@$$CBG$0-0@gsl@@PEAPEAX1@Z.c)
 *     ?HardwareProtectionRequired@CDeviceManager@@QEBA_NU_LUID@@@Z @ 0x1800BCB34 (-HardwareProtectionRequired@CDeviceManager@@QEBA_NU_LUID@@@Z.c)
 *     ?RemoveHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x1802792E8 (-RemoveHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CD2DContext::IsHardwareProtectionDisabled(CD2DContext *this)
{
  char result; // al

  result = 0;
  if ( *((_BYTE *)this + 436) || byte_1803D75E8 )
    return 1;
  return result;
}

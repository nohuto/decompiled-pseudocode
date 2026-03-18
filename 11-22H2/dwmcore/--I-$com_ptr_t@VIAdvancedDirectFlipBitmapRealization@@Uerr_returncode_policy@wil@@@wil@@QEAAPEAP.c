/*
 * XREFs of ??I?$com_ptr_t@VIAdvancedDirectFlipBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAVIAdvancedDirectFlipBitmapRealization@@XZ @ 0x1801DB6F8
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@33W4DXGI_MODE_ROTATION@@I_N5@Z @ 0x1801DB8A4 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<IAdvancedDirectFlipBitmapRealization,wil::err_returncode_policy>::operator&(
        __int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *a1;
  *a1 = 0LL;
  if ( v2 )
  {
    v3 = *(int *)(*(_QWORD *)(v2 + 8) + 4LL) + v2 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return a1;
}

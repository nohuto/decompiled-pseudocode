/*
 * XREFs of ?IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ @ 0x1800B3EA0
 * Callers:
 *     ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x1800809F0 (-ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUMilRec.c)
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ @ 0x1800A3694 (-MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z @ 0x1800A3740 (-RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z.c)
 *     ?TranslateRenderTargetInfo@CBackdropVisualImage@@QEBA_NPEAVRenderTargetInfo@@@Z @ 0x1800B3E34 (-TranslateRenderTargetInfo@CBackdropVisualImage@@QEBA_NPEAVRenderTargetInfo@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CCachedVisualImage::CCachedTarget::IsValid(CCachedVisualImage::CCachedTarget *this)
{
  int (__fastcall ***v1)(_QWORD); // rcx

  v1 = (int (__fastcall ***)(_QWORD))(*((_QWORD *)this + 1)
                                    + 8LL
                                    + *(int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) + 8LL));
  return (**v1)(v1) >= 0;
}

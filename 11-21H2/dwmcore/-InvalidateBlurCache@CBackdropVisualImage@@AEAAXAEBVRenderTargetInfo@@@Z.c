/*
 * XREFs of ?InvalidateBlurCache@CBackdropVisualImage@@AEAAXAEBVRenderTargetInfo@@@Z @ 0x180058E54
 * Callers:
 *     ?OnCachedTargetInvalidated@CBackdropVisualImage@@EEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z @ 0x180058E20 (-OnCachedTargetInvalidated@CBackdropVisualImage@@EEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z.c)
 *     ?InvalidateAllBlurCaches@CBackdropVisualImage@@AEAAXXZ @ 0x1800D40B4 (-InvalidateAllBlurCaches@CBackdropVisualImage@@AEAAXXZ.c)
 * Callees:
 *     ?last@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x180058FA8 (-last@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x180058FE0 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCach.c)
 *     ?erase@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCBlurredBackdropCache@@@2@V?$basic_iterator@QEAVCBlurredBackdropCache@@@2@@Z @ 0x180059378 (-erase@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCac.c)
 *     ?InvalidateCachedBlur@CBlurredBackdropCache@@QEAA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@@Z @ 0x18005945C (-InvalidateCachedBlur@CBlurredBackdropCache@@QEAA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInf.c)
 */

void __fastcall CBackdropVisualImage::InvalidateBlurCache(
        CBackdropVisualImage *this,
        const struct RenderTargetInfo *a2)
{
  char *v2; // rdi
  CBlurredBackdropCache **v5; // rbx
  CBlurredBackdropCache **v6; // [rsp+40h] [rbp+8h] BYREF
  char v7; // [rsp+50h] [rbp+18h] BYREF

  v2 = (char *)this + 1904;
  v5 = (CBlurredBackdropCache **)detail::pointer_buffer_impl<CBlurredBackdropCache *>::first((char *)this + 1904);
  while ( v5 != (CBlurredBackdropCache **)detail::pointer_buffer_impl<CBlurredBackdropCache *>::last(v2) )
  {
    if ( CBlurredBackdropCache::InvalidateCachedBlur(*v5, this, a2) )
    {
      v6 = v5;
      v5 = *(CBlurredBackdropCache ***)detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::erase(
                                         v2,
                                         &v7,
                                         &v6);
    }
    else
    {
      ++v5;
    }
  }
}

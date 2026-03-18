/*
 * XREFs of ?erase@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCBlurredBackdropCache@@@2@V?$basic_iterator@QEAVCBlurredBackdropCache@@@2@@Z @ 0x1800A6FF8
 * Callers:
 *     ?InvalidateBlurCache@CBackdropVisualImage@@AEAAXAEBVRenderTargetInfo@@@Z @ 0x1800A9DF0 (-InvalidateBlurCache@CBackdropVisualImage@@AEAAXAEBVRenderTargetInfo@@@Z.c)
 *     ??1CBlurredBackdropCache@@QEAA@XZ @ 0x1800F123C (--1CBlurredBackdropCache@@QEAA@XZ.c)
 * Callees:
 *     ?clear_region@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800A708C (-clear_region@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBack.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x1800A9EA4 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCach.c)
 */

__int64 *__fastcall detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::erase(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 *result; // rax

  v3 = *a3;
  v6 = (v3 - ((__int64 (*)(void))detail::pointer_buffer_impl<CBlurredBackdropCache *>::first)()) >> 3;
  detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::clear_region(
    a1,
    v6,
    1LL);
  v7 = detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1) + 8 * v6;
  result = a2;
  *a2 = v7;
  return result;
}

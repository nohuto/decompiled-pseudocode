/*
 * XREFs of ??1?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEAA@XZ @ 0x180025764
 * Callers:
 *     ??1CBackdropVisualImage@@UEAA@XZ @ 0x180025780 (--1CBackdropVisualImage@@UEAA@XZ.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x1800A9EA4 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCach.c)
 */

void __fastcall detail::pointer_buffer_impl<CBlurredBackdropCache *>::~pointer_buffer_impl<CBlurredBackdropCache *>(
        _BYTE *a1)
{
  __int64 v1; // rax

  if ( (*a1 & 3) == 1 )
  {
    v1 = detail::pointer_buffer_impl<CBlurredBackdropCache *>::first();
    operator delete((void *)(v1 - 16));
  }
}

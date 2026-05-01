/*
 * XREFs of __tailMerge_ext_ms_win_dwmapi_ext_l1_1_0_dll @ 0x1801CC65F
 * Callers:
 *     __imp_load_DwmGetWindowAttribute @ 0x1801CC653 (__imp_load_DwmGetWindowAttribute.c)
 *     __imp_load_DwmpEndTransitionRequest @ 0x1801CC6DE (__imp_load_DwmpEndTransitionRequest.c)
 *     __imp_load_DwmpEndAnimationClock @ 0x1801CC6F0 (__imp_load_DwmpEndAnimationClock.c)
 *     __imp_load_DwmpBeginTransitionRequest @ 0x1801CC702 (__imp_load_DwmpBeginTransitionRequest.c)
 *     __imp_load_DwmpTransitionWindow @ 0x1801CC714 (__imp_load_DwmpTransitionWindow.c)
 *     __imp_load_DwmpTransitionWindowWithRects @ 0x1801CC726 (__imp_load_DwmpTransitionWindowWithRects.c)
 *     __imp_load_DwmpBeginTransitionRequestWithGUID @ 0x1801CC738 (__imp_load_DwmpBeginTransitionRequestWithGUID.c)
 *     __imp_load_DwmUnregisterThumbnail @ 0x1801CC74A (__imp_load_DwmUnregisterThumbnail.c)
 *     __imp_load_DwmpUpdateAccentBlurRect @ 0x1801CC75C (__imp_load_DwmpUpdateAccentBlurRect.c)
 *     __imp_load_DwmpCreateSharedThumbnailVisual @ 0x1801CC76E (__imp_load_DwmpCreateSharedThumbnailVisual.c)
 *     __imp_load_DwmSetWindowAttribute @ 0x1801CC780 (__imp_load_DwmSetWindowAttribute.c)
 *     __imp_load_DwmpQueryWindowThumbnailSourceSize @ 0x1801CC792 (__imp_load_DwmpQueryWindowThumbnailSourceSize.c)
 *     __imp_load_DwmpTransitionBitmap @ 0x1801CC7A4 (__imp_load_DwmpTransitionBitmap.c)
 *     __imp_load_DwmShowContact @ 0x1801CC7B6 (__imp_load_DwmShowContact.c)
 *     __imp_load_DwmSetIconicThumbnail @ 0x1801CC7C8 (__imp_load_DwmSetIconicThumbnail.c)
 *     __imp_load_DwmInvalidateIconicBitmaps @ 0x1801CC7DA (__imp_load_DwmInvalidateIconicBitmaps.c)
 *     __imp_load_DwmSetIconicLivePreviewBitmap @ 0x1801CC7EC (__imp_load_DwmSetIconicLivePreviewBitmap.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801865D0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_dwmapi_ext_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_dwmapi_ext_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}

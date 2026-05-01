/*
 * XREFs of __tailMerge_ext_ms_win_dwmapi_ext_l1_1_0_dll @ 0x18018D547
 * Callers:
 *     __imp_load_DwmGetWindowAttribute @ 0x18018D53B (__imp_load_DwmGetWindowAttribute.c)
 *     __imp_load_DwmpEndTransitionRequest @ 0x18018D5C6 (__imp_load_DwmpEndTransitionRequest.c)
 *     __imp_load_DwmpEndAnimationClock @ 0x18018D5D8 (__imp_load_DwmpEndAnimationClock.c)
 *     __imp_load_DwmpBeginTransitionRequest @ 0x18018D5EA (__imp_load_DwmpBeginTransitionRequest.c)
 *     __imp_load_DwmpTransitionWindow @ 0x18018D5FC (__imp_load_DwmpTransitionWindow.c)
 *     __imp_load_DwmpTransitionWindowWithRects @ 0x18018D60E (__imp_load_DwmpTransitionWindowWithRects.c)
 *     __imp_load_DwmpBeginTransitionRequestWithGUID @ 0x18018D620 (__imp_load_DwmpBeginTransitionRequestWithGUID.c)
 *     __imp_load_DwmUnregisterThumbnail @ 0x18018D6BD (__imp_load_DwmUnregisterThumbnail.c)
 *     __imp_load_DwmpUpdateAccentBlurRect @ 0x18018D6CF (__imp_load_DwmpUpdateAccentBlurRect.c)
 *     __imp_load_DwmpCreateSharedThumbnailVisual @ 0x18018D6E1 (__imp_load_DwmpCreateSharedThumbnailVisual.c)
 *     __imp_load_DwmSetWindowAttribute @ 0x18018D6F3 (__imp_load_DwmSetWindowAttribute.c)
 *     __imp_load_DwmpQueryWindowThumbnailSourceSize @ 0x18018D705 (__imp_load_DwmpQueryWindowThumbnailSourceSize.c)
 *     __imp_load_DwmpTransitionBitmap @ 0x18018D717 (__imp_load_DwmpTransitionBitmap.c)
 *     __imp_load_DwmShowContact @ 0x18018D729 (__imp_load_DwmShowContact.c)
 *     __imp_load_DwmSetIconicThumbnail @ 0x18018D73B (__imp_load_DwmSetIconicThumbnail.c)
 *     __imp_load_DwmInvalidateIconicBitmaps @ 0x18018D74D (__imp_load_DwmInvalidateIconicBitmaps.c)
 *     __imp_load_DwmSetIconicLivePreviewBitmap @ 0x18018D75F (__imp_load_DwmSetIconicLivePreviewBitmap.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18014D660 (__delayLoadHelper2.c)
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

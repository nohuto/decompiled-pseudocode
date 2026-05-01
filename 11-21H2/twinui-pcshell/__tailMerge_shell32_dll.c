/*
 * XREFs of __tailMerge_shell32_dll @ 0x18018BF81
 * Callers:
 *     __imp_load_ShellExecuteW @ 0x18018BF75 (__imp_load_ShellExecuteW.c)
 *     __imp_load_SHAppBarMessage @ 0x18018C000 (__imp_load_SHAppBarMessage.c)
 *     __imp_load_SHCreateItemInKnownFolder @ 0x18018C012 (__imp_load_SHCreateItemInKnownFolder.c)
 *     __imp_load_SHGetImageList @ 0x18018C024 (__imp_load_SHGetImageList.c)
 *     __imp_load_ShellExecuteExW @ 0x18018C036 (__imp_load_ShellExecuteExW.c)
 *     __imp_load_SHEvaluateSystemCommandTemplate @ 0x18018C048 (__imp_load_SHEvaluateSystemCommandTemplate.c)
 *     __imp_load_SHGetPropertyStoreForWindow @ 0x18018C05A (__imp_load_SHGetPropertyStoreForWindow.c)
 *     __imp_load_SHCreateItemFromRelativeName @ 0x18018C06C (__imp_load_SHCreateItemFromRelativeName.c)
 *     __imp_load_SHFileOperationW @ 0x18018C07E (__imp_load_SHFileOperationW.c)
 *     __imp_load_?UpdateWallpaperTransition@@YAJW4WALLPAPER_TRANSITION_TYPE@@_J@Z @ 0x18018E782 (__imp_load_-UpdateWallpaperTransition@@YAJW4WALLPAPER_TRANSITION_TYPE@@_J@Z.c)
 *     __imp_load_SHCreateSessionKey @ 0x18018E794 (__imp_load_SHCreateSessionKey.c)
 *     __imp_load_LogoffWindowsDialog @ 0x18018E7A6 (__imp_load_LogoffWindowsDialog.c)
 *     __imp_load_GetThreadFlags @ 0x18018E7B8 (__imp_load_GetThreadFlags.c)
 *     __imp_load_SHGetStockIconInfo @ 0x18018F19E (__imp_load_SHGetStockIconInfo.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18014D660 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_shell32_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_shell32_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}

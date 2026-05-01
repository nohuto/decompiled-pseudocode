/*
 * XREFs of __tailMerge_shell32_dll @ 0x1801CACB5
 * Callers:
 *     __imp_load_ShellExecuteExW @ 0x1801CACA9 (__imp_load_ShellExecuteExW.c)
 *     __imp_load_ShellExecuteW @ 0x1801CAD34 (__imp_load_ShellExecuteW.c)
 *     __imp_load_SHAppBarMessage @ 0x1801CAD46 (__imp_load_SHAppBarMessage.c)
 *     __imp_load_SHCreateItemInKnownFolder @ 0x1801CAD58 (__imp_load_SHCreateItemInKnownFolder.c)
 *     __imp_load_SHGetImageList @ 0x1801CAD6A (__imp_load_SHGetImageList.c)
 *     __imp_load_SHEvaluateSystemCommandTemplate @ 0x1801CAD7C (__imp_load_SHEvaluateSystemCommandTemplate.c)
 *     __imp_load_SHGetPropertyStoreForWindow @ 0x1801CAD8E (__imp_load_SHGetPropertyStoreForWindow.c)
 *     __imp_load_SHFileOperationW @ 0x1801CADA0 (__imp_load_SHFileOperationW.c)
 *     __imp_load_SHGetPathFromIDListW @ 0x1801CADB2 (__imp_load_SHGetPathFromIDListW.c)
 *     __imp_load_SHGetLocalizedName @ 0x1801CADD0 (__imp_load_SHGetLocalizedName.c)
 *     __imp_load_SHSetLocalizedName @ 0x1801CADE2 (__imp_load_SHSetLocalizedName.c)
 *     __imp_load_SHCreateItemFromRelativeName @ 0x1801CADF4 (__imp_load_SHCreateItemFromRelativeName.c)
 *     __imp_load_?UpdateWallpaperTransition@@YAJW4WALLPAPER_TRANSITION_TYPE@@_J@Z @ 0x1801CDB5C (__imp_load_-UpdateWallpaperTransition@@YAJW4WALLPAPER_TRANSITION_TYPE@@_J@Z.c)
 *     __imp_load_SHCreateSessionKey @ 0x1801CDB6E (__imp_load_SHCreateSessionKey.c)
 *     __imp_load_LogoffWindowsDialog @ 0x1801CDB80 (__imp_load_LogoffWindowsDialog.c)
 *     __imp_load_GetThreadFlags @ 0x1801CDB92 (__imp_load_GetThreadFlags.c)
 *     __imp_load_ILFree @ 0x1801CDBA4 (__imp_load_ILFree.c)
 *     __imp_load_SHChangeNotify @ 0x1801CDBB6 (__imp_load_SHChangeNotify.c)
 *     __imp_load_SHGetStockIconInfo @ 0x1801CE7F3 (__imp_load_SHGetStockIconInfo.c)
 *     __imp_load_RealDriveType @ 0x1801CE805 (__imp_load_RealDriveType.c)
 *     __imp_load_SHRemoveLocalizedName @ 0x1801CE817 (__imp_load_SHRemoveLocalizedName.c)
 *     __imp_load_PathYetAnotherMakeUniqueName @ 0x1801CE829 (__imp_load_PathYetAnotherMakeUniqueName.c)
 *     __imp_load_SHILCreateFromPath @ 0x1801CE83B (__imp_load_SHILCreateFromPath.c)
 *     __imp_load_SHGetPathFromIDListEx @ 0x1801CE84D (__imp_load_SHGetPathFromIDListEx.c)
 *     __imp_load_MakeDestinationItem @ 0x1801CEECF (__imp_load_MakeDestinationItem.c)
 *     __imp_load_IsProcessAnExplorer @ 0x1801CEEE1 (__imp_load_IsProcessAnExplorer.c)
 *     __imp_load_SHBindToFolderIDListParent @ 0x1801CEEF3 (__imp_load_SHBindToFolderIDListParent.c)
 *     __imp_load_ILCloneFirst @ 0x1801CEF05 (__imp_load_ILCloneFirst.c)
 *     __imp_load_SHCreateItemWithParent @ 0x1801CEF17 (__imp_load_SHCreateItemWithParent.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801865D0 (__delayLoadHelper2.c)
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

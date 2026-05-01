/*
 * XREFs of GetVersionExW_0 @ 0x18018A980
 * Callers:
 *     ?ShouldHideIcons@HideWallpaperIconsObject@@AEAA_NXZ @ 0x1805F374C (-ShouldHideIcons@HideWallpaperIconsObject@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall GetVersionExW_0(LPOSVERSIONINFOW lpVersionInformation)
{
  return GetVersionExW(lpVersionInformation);
}

/*
 * XREFs of ??_GHideWallpaperIconsObject@@UEAAPEAXI@Z @ 0x180749830
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1801C7278 (--3@YAXPEAX@Z.c)
 *     ??1HideWallpaperIconsObject@@UEAA@XZ @ 0x1807497D8 (--1HideWallpaperIconsObject@@UEAA@XZ.c)
 */

HideWallpaperIconsObject *__fastcall HideWallpaperIconsObject::`scalar deleting destructor'(
        HideWallpaperIconsObject *this,
        char a2)
{
  HideWallpaperIconsObject::~HideWallpaperIconsObject(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

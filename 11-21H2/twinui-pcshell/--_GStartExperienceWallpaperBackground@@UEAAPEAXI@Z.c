/*
 * XREFs of ??_GStartExperienceWallpaperBackground@@UEAAPEAXI@Z @ 0x18036E960
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1StartExperienceWallpaperBackground@@UEAA@XZ @ 0x180392348 (--1StartExperienceWallpaperBackground@@UEAA@XZ.c)
 */

StartExperienceWallpaperBackground *__fastcall StartExperienceWallpaperBackground::`scalar deleting destructor'(
        StartExperienceWallpaperBackground *this,
        char a2)
{
  StartExperienceWallpaperBackground::~StartExperienceWallpaperBackground(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

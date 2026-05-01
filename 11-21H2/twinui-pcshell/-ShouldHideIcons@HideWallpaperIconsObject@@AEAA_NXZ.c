/*
 * XREFs of ?ShouldHideIcons@HideWallpaperIconsObject@@AEAA_NXZ @ 0x1805F374C
 * Callers:
 *     ?RuntimeClassInitialize@HideWallpaperIconsObject@@QEAAJXZ @ 0x1805F36D4 (-RuntimeClassInitialize@HideWallpaperIconsObject@@QEAAJXZ.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800E6FEC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     GetVersionExW_0 @ 0x18018A980 (GetVersionExW_0.c)
 *     ?IsSolidColorBackground@HideWallpaperIconsObject@@AEAA_NXZ @ 0x1805F3664 (-IsSolidColorBackground@HideWallpaperIconsObject@@AEAA_NXZ.c)
 */

char __fastcall HideWallpaperIconsObject::ShouldHideIcons(HideWallpaperIconsObject *this)
{
  HideWallpaperIconsObject *v1; // rcx
  char v2; // bl
  unsigned int v4[4]; // [rsp+20h] [rbp-148h] BYREF
  struct _OSVERSIONINFOW VersionInformation; // [rsp+30h] [rbp-138h] BYREF
  char v6; // [rsp+14Ah] [rbp-1Eh]

  VersionInformation.dwOSVersionInfoSize = 284;
  v2 = 1;
  if ( GetVersionExW_0(&VersionInformation)
    && (unsigned __int8)(v6 - 2) <= 1u
    && (SHRegGetDWORD(
          HKEY_LOCAL_MACHINE,
          L"SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Server",
          L"ClientExperienceEnabled",
          v4) < 0
     || !v4[0])
    || HideWallpaperIconsObject::IsSolidColorBackground(v1) )
  {
    return 0;
  }
  return v2;
}

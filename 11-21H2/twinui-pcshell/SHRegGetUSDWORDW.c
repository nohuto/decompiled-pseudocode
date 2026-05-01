/*
 * XREFs of SHRegGetUSDWORDW @ 0x1805E954C
 * Callers:
 *     ?OverlayTitlebarsInTabletMode@TitlebarOverlayHelpers@@YA_NXZ @ 0x180505BE8 (-OverlayTitlebarsInTabletMode@TitlebarOverlayHelpers@@YA_NXZ.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800E6FEC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 */

__int64 SHRegGetUSDWORDW()
{
  LSTATUS DWORD; // eax
  unsigned int v1; // ecx
  unsigned int v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  if ( SHRegGetDWORD(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell",
         L"AllowTitlebarOverlay",
         &v3) >= 0 )
  {
    return v3;
  }
  else
  {
    DWORD = SHRegGetDWORD(
              HKEY_LOCAL_MACHINE,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell",
              L"AllowTitlebarOverlay",
              &v3);
    v1 = v3;
    if ( DWORD < 0 )
      return (unsigned int)-1;
  }
  return v1;
}

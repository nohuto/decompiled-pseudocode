/*
 * XREFs of ??$Set@PEAG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAGUDummy@Details@23@@Z @ 0x1802D37A0
 * Callers:
 *     ?Init@SessionInfoItem@GamingAudio@@QEAAJPEAVAppList@2@AEBV?$ComPtr@UIAudioSessionControl2@@@WRL@Microsoft@@@Z @ 0x18040D900 (-Init@SessionInfoItem@GamingAudio@@QEAAJPEAVAppList@2@AEBV-$ComPtr@UIAudioSessionControl2@@@WRL@.c)
 *     _anonymous_namespace_::GetFriendlyNameForExe @ 0x1805483A4 (_anonymous_namespace_--GetFriendlyNameForExe.c)
 *     ?GetCurrentRenderedWallpaperPath@CVirtualDesktopManager@@AEAAJPEAPEAUHSTRING__@@@Z @ 0x1806019C4 (-GetCurrentRenderedWallpaperPath@CVirtualDesktopManager@@AEAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Microsoft::WRL::Wrappers::HString::Set<unsigned short *>(HSTRING *a1, const wchar_t **a2)
{
  const wchar_t *v2; // rdx
  UINT32 v3; // r8d
  unsigned __int64 v4; // rax

  v2 = *a2;
  v3 = 0;
  if ( v2 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v2[v4] );
    if ( v4 > 0xFFFFFFFF )
      return -2147024362;
    v3 = v4;
  }
  else
  {
    v2 = &LocaleName;
  }
  return Microsoft::WRL::Wrappers::HString::Set(a1, v2, v3);
}

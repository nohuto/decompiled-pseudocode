/*
 * XREFs of ?_EnsureImmersiveModeCheck@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806DE1D4
 * Callers:
 *     ?_IsInImmersiveAppOrLauncher@CLauncherTipContextMenu@@AEAA_NXZ @ 0x1806DFA80 (-_IsInImmersiveAppOrLauncher@CLauncherTipContextMenu@@AEAA_NXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

int __fastcall CLauncherTipContextMenu::_EnsureImmersiveModeCheck(CLauncherTipContextMenu *this)
{
  int result; // eax
  void **v2; // rdi

  result = 0;
  v2 = (void **)((char *)this + 152);
  if ( *((_QWORD *)this + 19)
    || (Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 19),
        result = IUnknown_QueryService(
                   *((IUnknown **)this + 2),
                   (const GUID *const)&SID_ImmersiveLauncher,
                   &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
                   v2),
        result >= 0) )
  {
    if ( !*((_QWORD *)this + 20) )
    {
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 20);
      return IUnknown_QueryService(
               *((IUnknown **)this + 2),
               &IID_IImmersiveSystemMode,
               &GUID_ea9aac7d_0cac_4ceb_981c_4545a28bada2,
               (void **)this + 20);
    }
  }
  return result;
}

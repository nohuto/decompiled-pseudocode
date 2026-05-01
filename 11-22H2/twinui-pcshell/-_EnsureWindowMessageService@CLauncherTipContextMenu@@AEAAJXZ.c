/*
 * XREFs of ?_EnsureWindowMessageService@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806DE48C
 * Callers:
 *     ?_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@Z @ 0x1806DF458 (-_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

HRESULT __fastcall CLauncherTipContextMenu::_EnsureWindowMessageService(CLauncherTipContextMenu *this)
{
  HRESULT result; // eax
  void **v2; // rbx

  result = 0;
  v2 = (void **)((char *)this + 144);
  if ( !*((_QWORD *)this + 18) )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 18);
    return IUnknown_QueryService(
             *((IUnknown **)this + 2),
             &IID_IImmersiveWindowMessageService,
             &GUID_fc62ce95_8396_401a_b74f_88df0d75e112,
             v2);
  }
  return result;
}

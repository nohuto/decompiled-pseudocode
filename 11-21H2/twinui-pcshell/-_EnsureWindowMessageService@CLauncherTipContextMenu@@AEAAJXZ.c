/*
 * XREFs of ?_EnsureWindowMessageService@CLauncherTipContextMenu@@AEAAJXZ @ 0x1805DB0B4
 * Callers:
 *     ?_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@Z @ 0x1805DBD08 (-_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
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
             &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
             v2);
  }
  return result;
}

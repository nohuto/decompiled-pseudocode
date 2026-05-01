/*
 * XREFs of ??1?$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@QEAA@XZ @ 0x1804A8E5C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopItemCollection_VirtualDesktopItemCollection_HMONITOR_____&_IVirtualDesktopItemFactory___&_IVirtualDesktopManagerInternal___&_IVirtualDesktopNotificationService___&__::_1_::dtor$2 @ 0x1804A8D90 (_Microsoft--WRL--Details--MakeAndInitialize_VirtualDesktopItemCollection_VirtualDes_ea_1804A8D90.c)
 *     _VirtualDesktopItemCollection_CreateInstance_::_1_::dtor$0 @ 0x1804A980F (_VirtualDesktopItemCollection_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktopItemCollection>::~ComPtr<VirtualDesktopItemCollection>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<VirtualDesktopItemCollection>::InternalRelease(a1);
}

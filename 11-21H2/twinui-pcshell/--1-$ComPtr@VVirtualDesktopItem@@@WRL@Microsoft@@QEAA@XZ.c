/*
 * XREFs of ??1?$ComPtr@VVirtualDesktopItem@@@WRL@Microsoft@@QEAA@XZ @ 0x1804B6EEC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopItem_VirtualDesktopItem_HMONITOR_____&_IVirtualDesktopManagerInternal___&_IVirtualDesktop___&__::_1_::dtor$2 @ 0x1804B6DE2 (_Microsoft--WRL--Details--MakeAndInitialize_VirtualDesktopItem_VirtualDesktopItem_H_ea_1804B6DE2.c)
 *     _VirtualDesktopItem_CreateInstance_::_1_::dtor$0 @ 0x1804B747C (_VirtualDesktopItem_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktopItem>::~ComPtr<VirtualDesktopItem>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<VirtualDesktopItem>::InternalRelease(a1);
}

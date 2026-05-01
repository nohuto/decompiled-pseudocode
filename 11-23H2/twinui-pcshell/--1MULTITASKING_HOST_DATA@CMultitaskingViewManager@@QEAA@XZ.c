/*
 * XREFs of ??1MULTITASKING_HOST_DATA@CMultitaskingViewManager@@QEAA@XZ @ 0x1805534D4
 * Callers:
 *     _CMultitaskingViewManager::_CreateXamlMTVHost_::_1_::dtor$2 @ 0x1802BF696 (_CMultitaskingViewManager--_CreateXamlMTVHost_--_1_--dtor$2.c)
 *     _CMultitaskingViewManager::_CreateDCompMTVHost_::_1_::dtor$3 @ 0x1805540DC (_CMultitaskingViewManager--_CreateDCompMTVHost_--_1_--dtor$3.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CMultitaskingViewManager::MULTITASKING_HOST_DATA::~MULTITASKING_HOST_DATA(
        CMultitaskingViewManager::MULTITASKING_HOST_DATA *this)
{
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 1);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this);
}

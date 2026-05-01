/*
 * XREFs of ??_GMULTITASKING_HOST_DATA@CMultitaskingViewManager@@QEAAPEAXI@Z @ 0x18004C420
 * Callers:
 *     ?_DestroyMTVHost@CMultitaskingViewManager@@AEAAX_K@Z @ 0x18004C3A4 (-_DestroyMTVHost@CMultitaskingViewManager@@AEAAX_K@Z.c)
 *     ??1CMultitaskingViewManager@@UEAA@XZ @ 0x180145494 (--1CMultitaskingViewManager@@UEAA@XZ.c)
 *     ??1?$CCoSimpleArray@UMULTITASKING_HOST_DATA@CMultitaskingViewManager@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@UMULTITASKING_HOST_DATA@CMultitaskingViewManager@@@@@@QEAA@XZ @ 0x180553404 (--1-$CCoSimpleArray@UMULTITASKING_HOST_DATA@CMultitaskingViewManager@@$0PPPPPPPO@V-$CSimpleArray.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

CMultitaskingViewManager::MULTITASKING_HOST_DATA *__fastcall CMultitaskingViewManager::MULTITASKING_HOST_DATA::`scalar deleting destructor'(
        CMultitaskingViewManager::MULTITASKING_HOST_DATA *this)
{
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((char *)this + 8);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this);
  return this;
}

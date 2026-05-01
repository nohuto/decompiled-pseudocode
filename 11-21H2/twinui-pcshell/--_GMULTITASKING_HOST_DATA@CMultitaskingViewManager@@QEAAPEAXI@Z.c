/*
 * XREFs of ??_GMULTITASKING_HOST_DATA@CMultitaskingViewManager@@QEAAPEAXI@Z @ 0x180052CBC
 * Callers:
 *     ?_DestroyMTVHost@CMultitaskingViewManager@@AEAAX_K@Z @ 0x180052C3C (-_DestroyMTVHost@CMultitaskingViewManager@@AEAAX_K@Z.c)
 *     ??1CMultitaskingViewManager@@UEAA@XZ @ 0x180149A6C (--1CMultitaskingViewManager@@UEAA@XZ.c)
 *     ??1?$CCoSimpleArray@UMULTITASKING_HOST_DATA@CMultitaskingViewManager@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@UMULTITASKING_HOST_DATA@CMultitaskingViewManager@@@@@@QEAA@XZ @ 0x18049A220 (--1-$CCoSimpleArray@UMULTITASKING_HOST_DATA@CMultitaskingViewManager@@$0PPPPPPPO@V-$CSimpleArray.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

CMultitaskingViewManager::MULTITASKING_HOST_DATA *__fastcall CMultitaskingViewManager::MULTITASKING_HOST_DATA::`scalar deleting destructor'(
        CMultitaskingViewManager::MULTITASKING_HOST_DATA *this)
{
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 1);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this);
  return this;
}

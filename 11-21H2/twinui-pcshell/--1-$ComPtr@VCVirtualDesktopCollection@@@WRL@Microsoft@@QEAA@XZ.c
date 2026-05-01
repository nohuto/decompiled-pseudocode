/*
 * XREFs of ??1?$ComPtr@VCVirtualDesktopCollection@@@WRL@Microsoft@@QEAA@XZ @ 0x180540FF4
 * Callers:
 *     _CVirtualDesktopCollection_CreateInstance_::_1_::dtor$0 @ 0x180221DC6 (_CVirtualDesktopCollection_CreateInstance_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CVirtualDesktopCollection_CVirtualDesktopCollection_IVirtualDesktopFactory___&_IVirtualDesktopPersistence___&_bool_&__::_1_::dtor$2 @ 0x180221DFB (_Microsoft--WRL--Details--MakeAndInitialize_CVirtualDesktopCollection_CVirtualDeskt_ea_180221DFB.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CVirtualDesktopCollection>::~ComPtr<CVirtualDesktopCollection>(
        volatile int **a1)
{
  return Microsoft::WRL::ComPtr<CVirtualDesktopVisibilityPolicy>::InternalRelease(a1);
}

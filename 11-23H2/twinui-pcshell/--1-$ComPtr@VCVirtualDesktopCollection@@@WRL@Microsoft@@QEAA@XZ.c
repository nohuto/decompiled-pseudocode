/*
 * XREFs of ??1?$ComPtr@VCVirtualDesktopCollection@@@WRL@Microsoft@@QEAA@XZ @ 0x1805FBA84
 * Callers:
 *     _CVirtualDesktopCollection_CreateInstance_::_1_::dtor$0 @ 0x1802C620A (_CVirtualDesktopCollection_CreateInstance_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CVirtualDesktopCollection_CVirtualDesktopCollection_IVirtualDesktopFactory___&_IVirtualDesktopPersistence___&_bool_&__::_1_::dtor$2 @ 0x1802C621C (_Microsoft--WRL--Details--MakeAndInitialize_CVirtualDesktopCollection_CVirtualDeskt_ea_1802C621C.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CVirtualDesktopCollection>::~ComPtr<CVirtualDesktopCollection>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<CVirtualDesktopVisibilityPolicy>::InternalRelease(a1);
}

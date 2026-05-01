/*
 * XREFs of _lambda_257868cc277a89cd587da3eed8fcd545_::__lambda_257868cc277a89cd587da3eed8fcd545_ @ 0x1801BE674
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_257868cc277a89cd587da3eed8fcd545___::_CMultitaskingViewTaskCallback__lambda_257868cc277a89cd587da3eed8fcd545___ @ 0x1801BE6A8 (CMultitaskingViewTaskCallback__lambda_257868cc277a89cd587da3eed8fcd545___--_CMultitaskingViewTas.c)
 *     ?_ShowSnapAssist@CSnapAssistControllerBase@@IEAAJPEAUIApplicationViewCollection@@AEBUCRect@Geometry@@W4SNAP_ASSIST_VIEW_FLAGS@@V?$shared_ptr@VGuidedSnapAssistData@@@std@@@Z @ 0x18059EAA8 (-_ShowSnapAssist@CSnapAssistControllerBase@@IEAAJPEAUIApplicationViewCollection@@AEBUCRect@Geome.c)
 *     _CSnapAssistControllerBase::_ShowSnapAssist_::_1_::dtor$4 @ 0x18059ECF6 (_CSnapAssistControllerBase--_ShowSnapAssist_--_1_--dtor$4.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall lambda_257868cc277a89cd587da3eed8fcd545_::__lambda_257868cc277a89cd587da3eed8fcd545_(__int64 *a1)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)a1[6];
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 4);
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1 + 3);
}

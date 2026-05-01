/*
 * XREFs of ??1PointerTracking@CMultitaskingViewElementBase@@QEAA@XZ @ 0x1804AC7C8
 * Callers:
 *     _CMultitaskingViewElementBase::DragOver_::_1_::dtor$0 @ 0x1804B96DC (_CMultitaskingViewElementBase--DragOver_--_1_--dtor$0.c)
 *     _CMultitaskingViewElementBase::PointerLeave_::_1_::dtor$0 @ 0x1804BA7DE (_CMultitaskingViewElementBase--PointerLeave_--_1_--dtor$0.c)
 *     _CMultitaskingViewElementBase::_PointerMove_::_1_::dtor$0 @ 0x1804BBA11 (_CMultitaskingViewElementBase--_PointerMove_--_1_--dtor$0.c)
 *     _CMultitaskingViewElementBase::_PointerMove_::_1_::dtor$1 @ 0x1804BBA1D (_CMultitaskingViewElementBase--_PointerMove_--_1_--dtor$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CMultitaskingViewElementBase::PointerTracking::~PointerTracking(
        CMultitaskingViewElementBase::PointerTracking *this)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 4);
}

/*
 * XREFs of ??1PointerTracking@CMultitaskingViewElementBase@@QEAA@XZ @ 0x18056923C
 * Callers:
 *     _CMultitaskingViewElementBase::DragOver_::_1_::dtor$0 @ 0x18057421C (_CMultitaskingViewElementBase--DragOver_--_1_--dtor$0.c)
 *     _CMultitaskingViewElementBase::PointerLeave_::_1_::dtor$0 @ 0x18057532E (_CMultitaskingViewElementBase--PointerLeave_--_1_--dtor$0.c)
 *     _CMultitaskingViewElementBase::_PointerMove_::_1_::dtor$0 @ 0x180576551 (_CMultitaskingViewElementBase--_PointerMove_--_1_--dtor$0.c)
 *     _CMultitaskingViewElementBase::_PointerMove_::_1_::dtor$1 @ 0x18057655D (_CMultitaskingViewElementBase--_PointerMove_--_1_--dtor$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CMultitaskingViewElementBase::PointerTracking::~PointerTracking(
        CMultitaskingViewElementBase::PointerTracking *this)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 4);
}

/*
 * XREFs of ??1GridLayoutFactory@@QEAA@XZ @ 0x180578A84
 * Callers:
 *     _CSwitchItemGrid::v_LayoutChildren_::_1_::dtor$3 @ 0x18057ACF9 (_CSwitchItemGrid--v_LayoutChildren_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall GridLayoutFactory::~GridLayoutFactory(GridLayoutFactory *this)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 67);
}

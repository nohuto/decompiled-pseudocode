/*
 * XREFs of ??1GridLayoutFactory@@QEAA@XZ @ 0x1804BE0BC
 * Callers:
 *     _CSwitchItemGrid::v_LayoutChildren_::_1_::dtor$3 @ 0x1804C02FA (_CSwitchItemGrid--v_LayoutChildren_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall GridLayoutFactory::~GridLayoutFactory(GridLayoutFactory *this)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 67);
}

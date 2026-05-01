/*
 * XREFs of ??1?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAA@XZ @ 0x1803C679C
 * Callers:
 *     _wil::MakeAndInitializeOrThrow_CCommonApplicationViewPosition_Geometry::CRect_&__::_1_::dtor$0 @ 0x1805A6C4E (_wil--MakeAndInitializeOrThrow_CCommonApplicationViewPosition_Geometry--CRect_-__--_1_--dtor$0.c)
 *     _KioskPositioner::SetUwpViewFullScreen_::_1_::dtor$0 @ 0x1805A9DB9 (_KioskPositioner--SetUwpViewFullScreen_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::~ComPtr<CCommonApplicationViewPosition>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::InternalRelease(a1);
}

/*
 * XREFs of _lambda_fca3cb616a5d138146c9ecf7abf9513f_::__lambda_fca3cb616a5d138146c9ecf7abf9513f_ @ 0x18054A08C
 * Callers:
 *     _CAllUpViewService::ToggleAllUpView_::_1_::dtor$3 @ 0x1802C0032 (_CAllUpViewService--ToggleAllUpView_--_1_--dtor$3.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_fca3cb616a5d138146c9ecf7abf9513f_::__lambda_fca3cb616a5d138146c9ecf7abf9513f_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1);
}

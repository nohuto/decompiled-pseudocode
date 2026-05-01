/*
 * XREFs of _lambda_f3af541e54fed362ec31214e5f0f3de2_::__lambda_f3af541e54fed362ec31214e5f0f3de2_ @ 0x180688E54
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f3af541e54fed362ec31214e5f0f3de2___::_scalar_deleting_destructor_ @ 0x1806890D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f3af541e54fed362ec31214e5f0f3de2___--_scala.c)
 *     ?FireApplicationViewChangeNotification@ApplicationViewFilteredCollection@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18068928C (-FireApplicationViewChangeNotification@ApplicationViewFilteredCollection@@AEAAJPEAUIApplicationV.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_f3af541e54fed362ec31214e5f0f3de2_::__lambda_f3af541e54fed362ec31214e5f0f3de2_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 2);
  return Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(a1);
}

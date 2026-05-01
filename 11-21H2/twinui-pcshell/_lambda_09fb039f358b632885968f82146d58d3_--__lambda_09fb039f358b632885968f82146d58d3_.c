/*
 * XREFs of _lambda_09fb039f358b632885968f82146d58d3_::__lambda_09fb039f358b632885968f82146d58d3_ @ 0x1802F381C
 * Callers:
 *     _CAppViewManager::_WindowProvidedWorker_::_1_::dtor$5 @ 0x1802FE9E8 (_CAppViewManager--_WindowProvidedWorker_--_1_--dtor$5.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_09fb039f358b632885968f82146d58d3_::__lambda_09fb039f358b632885968f82146d58d3_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 4);
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1);
}

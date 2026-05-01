/*
 * XREFs of _lambda_73bca28b4d92a1291c49cf8f8a9be4e0_::__lambda_73bca28b4d92a1291c49cf8f8a9be4e0_ @ 0x1801D06AC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_80ea03834fe6f87b7e992c0ac263069b___::_CTaskWrapper__lambda_80ea03834fe6f87b7e992c0ac263069b___ @ 0x1801D0750 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_80ea03834fe6f87b7e992c0ac263069b___--_CTask.c)
 *     _lambda_29ec6667bb9b961efe097a4c52975f79_::operator() @ 0x1801D0914 (_lambda_29ec6667bb9b961efe097a4c52975f79_--operator().c)
 *     _CAppViewManager::Switch_::_1_::dtor$2 @ 0x1803B4E8C (_CAppViewManager--Switch_--_1_--dtor$2.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_73bca28b4d92a1291c49cf8f8a9be4e0_::__lambda_73bca28b4d92a1291c49cf8f8a9be4e0_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1);
}

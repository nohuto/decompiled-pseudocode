/*
 * XREFs of _lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9_::__lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9_ @ 0x1802F3904
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9___1_long_::_scalar_deleting_destructor_ @ 0x1802F4630 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1802F4630.c)
 *     ?ConsolidateView@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@0@Z @ 0x1802F4BB0 (-ConsolidateView@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@0@Z.c)
 *     _CAppViewManager::ConsolidateView_::_1_::dtor$4 @ 0x1802F4DC2 (_CAppViewManager--ConsolidateView_--_1_--dtor$4.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9_::__lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1);
}

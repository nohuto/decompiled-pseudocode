/*
 * XREFs of ??1?$ComPtr@VCSnapAssistViewController@@@WRL@Microsoft@@QEAA@XZ @ 0x1804B3E30
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CSnapAssistViewController_CSnapAssistViewController_WeakReference::IWeakReference___&_IMultitaskingViewManager___&_IImmersiveAppCrusher___&_IApplicationViewCollection___&_Windows::Internal::ComposableShell::Tabs::ITabController___&_ITabViewManager___&__::_1_::dtor$2 @ 0x1804B3C8B (_Microsoft--WRL--Details--MakeAndInitialize_CSnapAssistViewController_CSnapAssistVi_ea_1804B3C8B.c)
 *     _CSnapAssistViewController_CreateInstance_::_1_::dtor$0 @ 0x1804B41CC (_CSnapAssistViewController_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CSnapAssistViewController>::~ComPtr<CSnapAssistViewController>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<CSnapAssistViewController>::InternalRelease(a1);
}

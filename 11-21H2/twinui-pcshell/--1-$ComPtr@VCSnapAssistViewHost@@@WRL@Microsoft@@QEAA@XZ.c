/*
 * XREFs of ??1?$ComPtr@VCSnapAssistViewHost@@@WRL@Microsoft@@QEAA@XZ @ 0x1804A3790
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CSnapAssistViewHost_CSnapAssistViewHost_IMultitaskingData___&_IMultitaskingViewManagerInternal___&_IMultitaskingViewVisibilityServiceInternal___&_IImmersiveAppCrusher___&_IApplicationViewCollection___&_Windows::Internal::ComposableShell::Tabs::ITabController___&_ITabViewManager___&__::_1_::dtor$2 @ 0x1804A34B1 (_Microsoft--WRL--Details--MakeAndInitialize_CSnapAssistViewHost_CSnapAssistViewHost_ea_1804A34B1.c)
 *     _CSnapAssistViewHost_CreateInstance_::_1_::dtor$0 @ 0x1804A3C4C (_CSnapAssistViewHost_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CSnapAssistViewHost>::~ComPtr<CSnapAssistViewHost>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<CSnapAssistViewHost>::InternalRelease(a1);
}

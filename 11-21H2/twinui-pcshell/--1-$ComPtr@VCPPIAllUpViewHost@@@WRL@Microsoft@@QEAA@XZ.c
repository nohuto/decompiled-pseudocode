/*
 * XREFs of ??1?$ComPtr@VCPPIAllUpViewHost@@@WRL@Microsoft@@QEAA@XZ @ 0x1804A57F4
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CPPIAllUpViewHost_CPPIAllUpViewHost_IMultitaskingData___&_IMultitaskingViewManagerInternal___&_IApplicationViewSwitcher___&_IImmersiveAppCrusher___&_IMultitaskingViewVisibilityServiceInternal___&_ITabletModeViewManager___&__::_1_::dtor$2 @ 0x1804A5637 (_Microsoft--WRL--Details--MakeAndInitialize_CPPIAllUpViewHost_CPPIAllUpViewHost_IMu_ea_1804A5637.c)
 *     _CPPIAllUpViewHost_CreateInstance_::_1_::dtor$0 @ 0x1804A5A1C (_CPPIAllUpViewHost_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CPPIAllUpViewHost>::~ComPtr<CPPIAllUpViewHost>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<AccessibleElement>::InternalRelease(a1);
}

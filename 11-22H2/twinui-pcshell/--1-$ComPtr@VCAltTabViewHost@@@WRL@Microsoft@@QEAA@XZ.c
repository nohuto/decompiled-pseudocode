/*
 * XREFs of ??1?$ComPtr@VCAltTabViewHost@@@WRL@Microsoft@@QEAA@XZ @ 0x180560DF0
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAltTabViewHost_CAltTabViewHost_IMultitaskingData___&_IMultitaskingViewManagerInternal___&_IApplicationViewSwitcher___&_IImmersiveAppCrusher___&_IMultitaskingViewVisibilityServiceInternal___&_IMultitaskingViewGestureState___&_IApplicationViewCollection___&_Windows::Internal::ComposableShell::Tabs::ITabController___&_IUnknown___&_ITouchGestureSettings___&__::_1_::dtor$2 @ 0x180560ABA (_Microsoft--WRL--Details--MakeAndInitialize_CAltTabViewHost_CAltTabViewHost_IMultit_ea_180560ABA.c)
 *     _CAltTabViewHost_CreateInstance_::_1_::dtor$0 @ 0x180561139 (_CAltTabViewHost_CreateInstance_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_XamlAltTabViewHost_XamlAltTabViewHost_XamlViewHostInitializeArgs_const_&__::_1_::dtor$2 @ 0x180761B7C (_Microsoft--WRL--Details--MakeAndInitialize_XamlAltTabViewHost_XamlAltTabViewHost_X_ea_180761B7C.c)
 *     _wil::MakeAndInitializeOrThrow_XamlAltTabViewHost_XamlViewHostInitializeArgs_const_&__::_1_::dtor$0 @ 0x180761BF2 (_wil--MakeAndInitializeOrThrow_XamlAltTabViewHost_XamlViewHostInitializeArgs_const_-__--_1_--dto.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CAltTabViewHost>::~ComPtr<CAltTabViewHost>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<CAltTabViewHost>::InternalRelease(a1);
}

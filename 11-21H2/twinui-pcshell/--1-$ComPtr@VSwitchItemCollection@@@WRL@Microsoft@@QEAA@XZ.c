/*
 * XREFs of ??1?$ComPtr@VSwitchItemCollection@@@WRL@Microsoft@@QEAA@XZ @ 0x1804A7068
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_SwitchItemCollection_SwitchItemCollection_ISwitchItemFactory___&_IApplicationViewCollection___&_IApplicationViewVisibilityDebouncedNotificationService___&_Windows::Internal::ComposableShell::Tabs::ITabDataModel___&_ITabViewManager___&_enum_SwitchItemFilterBehavior_&__::_1_::dtor$1 @ 0x1804A6E22 (_Microsoft--WRL--Details--MakeAndInitialize_SwitchItemCollection_SwitchItemCollecti_ea_1804A6E22.c)
 *     _SwitchItemCollection_CreateInstance_::_1_::dtor$0 @ 0x1804A83BE (_SwitchItemCollection_CreateInstance_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_XamlSnapAssistViewHost_XamlSnapAssistViewHost_XamlViewHostInitializeArgs_const_&__::_1_::dtor$2 @ 0x1805FF810 (_Microsoft--WRL--Details--MakeAndInitialize_XamlSnapAssistViewHost_XamlSnapAssistVi_ea_1805FF810.c)
 *     _wil::MakeAndInitializeOrThrow_XamlSnapAssistViewHost_XamlViewHostInitializeArgs_const_&__::_1_::dtor$0 @ 0x1805FF886 (_wil--MakeAndInitializeOrThrow_XamlSnapAssistViewHost_XamlViewHostInitializeArgs_const_-__--_1_-.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<SwitchItemCollection>::~ComPtr<SwitchItemCollection>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<SwitchItemCollection>::InternalRelease(a1);
}

/*
 * XREFs of ??1?$ComPtr@VSwitchItemCollection@@@WRL@Microsoft@@QEAA@XZ @ 0x180564784
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_SwitchItemCollection_SwitchItemCollection_ISwitchItemFactory___&_IApplicationViewCollection___&_IApplicationViewVisibilityDebouncedNotificationService___&_std::nullptr_t_std::nullptr_t_enum_SwitchItemFilterBehavior_&__::_1_::dtor$1 @ 0x1805645E5 (_Microsoft--WRL--Details--MakeAndInitialize_SwitchItemCollection_SwitchItemCollecti_ea_1805645E5.c)
 *     _SwitchItemCollection_CreateInstance_::_1_::dtor$0 @ 0x18056528C (_SwitchItemCollection_CreateInstance_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_XamlSnapAssistViewHost_XamlSnapAssistViewHost_XamlViewHostInitializeArgs_const_&__::_1_::dtor$2 @ 0x180769234 (_Microsoft--WRL--Details--MakeAndInitialize_XamlSnapAssistViewHost_XamlSnapAssistVi_ea_180769234.c)
 *     _wil::MakeAndInitializeOrThrow_XamlSnapAssistViewHost_XamlViewHostInitializeArgs_const_&__::_1_::dtor$0 @ 0x1807692AA (_wil--MakeAndInitializeOrThrow_XamlSnapAssistViewHost_XamlViewHostInitializeArgs_const_-__--_1_-.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<SwitchItemCollection>::~ComPtr<SwitchItemCollection>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<SwitchItemCollection>::InternalRelease(a1);
}

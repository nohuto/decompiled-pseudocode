/*
 * XREFs of ??1?$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@QEAA@XZ @ 0x18062F2E0
 * Callers:
 *     _wil::MakeAndInitializeOrThrow_ApplicationContainerActivationPolicy_IApplicationContainerActivationComponent___unsigned_char_&_tagINITIALWINDOWPLACEMENT_&__::_1_::dtor$0 @ 0x18062DF06 (_wil--MakeAndInitializeOrThrow_ApplicationContainerActivationPolicy_IApplicationContainerActivat.c)
 *     _ApplicationContainerActivation::ActivateApplicationInContainer_::_1_::dtor$2 @ 0x180630161 (_ApplicationContainerActivation--ActivateApplicationInContainer_--_1_--dtor$2.c)
 *     _ApplicationContainerActivation::ActivateRemotePathInContainer_::_1_::dtor$2 @ 0x180630521 (_ApplicationContainerActivation--ActivateRemotePathInContainer_--_1_--dtor$2.c)
 *     _wil::MakeAndInitializeOrThrow_ApplicationContainerActivationPolicy_IApplicationContainerActivationComponent___bool_&_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______::_1_::dtor$0 @ 0x180633A7A (_wil--MakeAndInitializeOrThrow_ApplicationContainerActivationPolicy_IApplicationCon_ea_180633A7A.c)
 *     _Launch_::_1_::dtor$4 @ 0x180634100 (_Launch_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ApplicationContainerActivationPolicy>::~ComPtr<ApplicationContainerActivationPolicy>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<ApplicationContainerActivationPolicy>::InternalRelease(a1);
}

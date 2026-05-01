/*
 * XREFs of ??1?$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@QEAA@XZ @ 0x1805714E4
 * Callers:
 *     _wil::MakeAndInitializeOrThrow_ApplicationContainerActivationPolicy_IApplicationContainerActivationComponent___unsigned_char_&_tagINITIALWINDOWPLACEMENT_&__::_1_::dtor$0 @ 0x18056FE32 (_wil--MakeAndInitializeOrThrow_ApplicationContainerActivationPolicy_IApplicationContainerActivat.c)
 *     _ApplicationContainerActivation::ActivateApplicationInContainer_::_1_::dtor$2 @ 0x180572328 (_ApplicationContainerActivation--ActivateApplicationInContainer_--_1_--dtor$2.c)
 *     _ApplicationContainerActivation::ActivateRemotePathInContainer_::_1_::dtor$2 @ 0x1805726D5 (_ApplicationContainerActivation--ActivateRemotePathInContainer_--_1_--dtor$2.c)
 *     _wil::MakeAndInitializeOrThrow_ApplicationContainerActivationPolicy_IApplicationContainerActivationComponent___bool_&_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______::_1_::dtor$0 @ 0x180575CCE (_wil--MakeAndInitializeOrThrow_ApplicationContainerActivationPolicy_IApplicationCon_ea_180575CCE.c)
 *     _Launch_::_1_::dtor$4 @ 0x1805762DE (_Launch_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ApplicationContainerActivationPolicy>::~ComPtr<ApplicationContainerActivationPolicy>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<ApplicationContainerActivationPolicy>::InternalRelease(a1);
}

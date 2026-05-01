/*
 * XREFs of ??1?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@QEAA@XZ @ 0x180453944
 * Callers:
 *     _wil::MakeAndInitializeOrThrow_AppViewDataSourceAdapter_enum_DesktopSwitcherDataSourceScopeOptions_&_IApplicationViewCollection___&_IApplicationViewIconLoader___&_IImmersiveShellHookService___&_Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice____::_1_::dtor$0 @ 0x18021ABEC (_wil--MakeAndInitializeOrThrow_AppViewDataSourceAdapter_enum_DesktopSwitcherDataSourceScopeOptio.c)
 *     _AppViewDataSourceAdapter_CreateInstance_::_1_::dtor$1 @ 0x18021AC19 (_AppViewDataSourceAdapter_CreateInstance_--_1_--dtor$1.c)
 *     _wil::MakeAndInitializeOrThrow_AppViewDataSourceAdapter_enum_DesktopSwitcherDataSourceScopeOptions_IApplicationViewCollection___&_IApplicationViewIconLoader___&_IImmersiveShellHookService___&_Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice____::_1_::dtor$0 @ 0x1804530D6 (_wil--MakeAndInitializeOrThrow_AppViewDataSourceAdapter_enum_DesktopSwitcherDataSou_ea_1804530D6.c)
 *     _AppViewDataSourceAdapter_CreateInstance_::_1_::dtor$1_0 @ 0x180453DA9 (_AppViewDataSourceAdapter_CreateInstance_--_1_--dtor$1_0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<AppViewDataSourceAdapter>::~ComPtr<AppViewDataSourceAdapter>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<AppViewDataSourceAdapter>::InternalRelease(a1);
}

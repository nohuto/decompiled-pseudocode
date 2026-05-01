/*
 * XREFs of _wil::MakeAndInitializeOrThrow_AppViewDataSourceAdapter_enum_DesktopSwitcherDataSourceScopeOptions_IApplicationViewCollection___&_IApplicationViewIconLoader___&_IImmersiveShellHookService___&_Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice____::_1_::dtor$0 @ 0x1804530D6
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@QEAA@XZ @ 0x180453944 (--1-$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeAndInitializeOrThrow_AppViewDataSourceAdapter_enum_DesktopSwitcherDataSourceScopeOptions_IApplicationViewCollection_____IApplicationViewIconLoader_____IImmersiveShellHookService_____Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return Microsoft::WRL::ComPtr<AppViewDataSourceAdapter>::~ComPtr<AppViewDataSourceAdapter>(*(_QWORD *)(a2 + 80));
  }
  return result;
}

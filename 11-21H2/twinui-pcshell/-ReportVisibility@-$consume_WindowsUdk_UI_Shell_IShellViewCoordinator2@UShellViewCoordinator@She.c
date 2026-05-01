/*
 * XREFs of ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator2@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBAXAEBW4ViewVisibility@Shell@UI@WindowsUdk@3@AEBUhstring@param@3@@Z @ 0x1800314C0
 * Callers:
 *     _lambda_8a91dc501c467fec4cc3e90f0a415469_::operator() @ 0x18003135C (_lambda_8a91dc501c467fec4cc3e90f0a415469_--operator().c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator2<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::ReportVisibility(
        __int64 *a1,
        unsigned int *a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v5 = *a1;
  if ( v5 )
  {
    v7 = 0LL;
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v5)(
      v5,
      &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator2>,
      &v7);
    v5 = v7;
  }
  v8 = v5;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 56LL))(v5, *a2, *a3);
  if ( v6 < 0 )
    winrt::throw_hresult((unsigned int)v6);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
}

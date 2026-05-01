/*
 * XREFs of ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator2@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ViewVisibility@Shell@UI@WindowsUdk@3@AEBUhstring@param@3@@Z @ 0x180422CA0
 * Callers:
 *     _lambda_5112c4c8994b8afbe0e7f1a794b38521_::operator() @ 0x1801DDCC4 (_lambda_5112c4c8994b8afbe0e7f1a794b38521_--operator().c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator2<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::ReportVisibility(
        __int64 *a1,
        unsigned int *a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  signed int v7; // eax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v5 = *a1;
  if ( v5 )
  {
    v8 = 0LL;
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v5)(
      v5,
      &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator2>,
      &v8);
    v5 = v8;
    v6 = v8;
  }
  else
  {
    v6 = 0LL;
  }
  v9 = v5;
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 56LL))(v5, *a2, *a3);
  if ( v7 < 0 )
    winrt::throw_hresult(v7);
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
}

/*
 * XREFs of ?Show@?$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension@UIDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUguid@3@AEBW4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@3@AEBURect@Foundation@Windows@3@@Z @ 0x180697E4C
 * Callers:
 *     _lambda_0c5affb431bf714a4aabb516927c6336_::operator() @ 0x180235F10 (_lambda_0c5affb431bf714a4aabb516927c6336_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension>::Show(
        __int64 **a1,
        __int128 *a2,
        unsigned int *a3,
        __int128 *a4)
{
  __int64 *v4; // rcx
  __int128 v5; // xmm1
  __int64 v6; // rax
  __int64 result; // rax
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  __int128 v9; // [rsp+40h] [rbp-18h] BYREF

  v4 = *a1;
  v5 = *a2;
  v6 = *v4;
  v8 = *a4;
  v9 = v5;
  result = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, __int128 *))(v6 + 56))(v4, &v9, *a3, &v8);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}

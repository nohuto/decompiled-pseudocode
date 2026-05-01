/*
 * XREFs of ?StartSwipe@?$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension@UIDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUguid@3@AEBUPoint@Foundation@Windows@3@@Z @ 0x180697F88
 * Callers:
 *     _lambda_0c5affb431bf714a4aabb516927c6336_::operator() @ 0x180235F10 (_lambda_0c5affb431bf714a4aabb516927c6336_--operator().c)
 *     _lambda_5ac696817d9ead6e33159563da3f5a7c_::operator() @ 0x1802364C4 (_lambda_5ac696817d9ead6e33159563da3f5a7c_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension>::StartSwipe(
        __int64 **a1,
        __int128 *a2,
        _QWORD *a3)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = *a1;
  v4 = *v3;
  v6 = *a2;
  result = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD))(v4 + 72))(v3, &v6, *a3);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}

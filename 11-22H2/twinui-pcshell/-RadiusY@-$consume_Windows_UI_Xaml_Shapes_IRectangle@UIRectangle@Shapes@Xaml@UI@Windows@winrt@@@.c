/*
 * XREFs of ?RadiusY@?$consume_Windows_UI_Xaml_Shapes_IRectangle@UIRectangle@Shapes@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@N@Z @ 0x18065C07C
 * Callers:
 *     ?CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x18065988C (-CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_UI_Xaml_Shapes_IRectangle<winrt::Windows::UI::Xaml::Shapes::IRectangle>::RadiusY(
        _QWORD *a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 72LL))(*a1);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}

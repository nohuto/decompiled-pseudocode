/*
 * XREFs of ?BorderThickness@?$consume_Windows_UI_Xaml_Controls_IBorder@UIBorder@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUThickness@Xaml@UI@Windows@3@@Z @ 0x180659124
 * Callers:
 *     ?CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x18065988C (-CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_UI_Xaml_Controls_IBorder<winrt::Windows::UI::Xaml::Controls::IBorder>::BorderThickness(
        __int64 **a1,
        _OWORD *a2)
{
  __int64 *v2; // rcx
  __int128 v3; // xmm1
  __int64 v4; // rax
  __int64 result; // rax
  _OWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a1;
  v3 = a2[1];
  v4 = *v2;
  v6[0] = *a2;
  v6[1] = v3;
  result = (*(__int64 (__fastcall **)(__int64 *, _OWORD *))(v4 + 72))(v2, v6);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}

/*
 * XREFs of ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@5@@impl@winrt@@QEBA@I@Z @ 0x18004CE68
 * Callers:
 *     ?SupportsSuspendOnClose@ConversationalAgentHelpers@@YA_NAEBUhstring@winrt@@@Z @ 0x18004CD28 (-SupportsSuspendOnClose@ConversationalAgentHelpers@@YA_NAEBUhstring@winrt@@@Z.c)
 *     ??D?$fast_iterator@U?$IVectorView@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@2@XZ @ 0x18045ACD0 (--D-$fast_iterator@U-$IVectorView@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@.c)
 *     ?ShouldMaximizeOnSmallScreenDevice@@YA_NPEAUIApplicationView@@@Z @ 0x1805B4A68 (-ShouldMaximizeOnSmallScreenDevice@@YA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension>,winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension>::GetAt(
        _QWORD *a1,
        _QWORD *a2,
        unsigned int a3)
{
  int v4; // eax

  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)*a1 + 48LL))(*a1, a3, a2);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  return a2;
}

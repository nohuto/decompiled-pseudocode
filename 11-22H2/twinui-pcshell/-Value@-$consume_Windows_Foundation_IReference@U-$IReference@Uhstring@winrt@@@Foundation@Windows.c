/*
 * XREFs of ?Value@?$consume_Windows_Foundation_IReference@U?$IReference@Uhstring@winrt@@@Foundation@Windows@winrt@@Uhstring@4@@impl@winrt@@QEBA@XZ @ 0x1806FDCC8
 * Callers:
 *     ??$unbox_value_or@Uhstring@winrt@@$0A@@winrt@@YA?AUhstring@0@AEBUIInspectable@Foundation@Windows@0@AEBU1param@0@@Z @ 0x180260800 (--$unbox_value_or@Uhstring@winrt@@$0A@@winrt@@YA-AUhstring@0@AEBUIInspectable@Foundation@Windows.c)
 *     ??$unbox_value_type@Uhstring@winrt@@AEBUIInspectable@Foundation@Windows@2@@impl@winrt@@YA?AUhstring@1@AEBUIInspectable@Foundation@Windows@1@@Z @ 0x18070DEA4 (--$unbox_value_type@Uhstring@winrt@@AEBUIInspectable@Foundation@Windows@2@@impl@winrt@@YA-AUhstr.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
volatile signed __int32 **__fastcall winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<winrt::hstring>,winrt::hstring>::Value(
        __int64 *a1,
        volatile signed __int32 **a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, volatile signed __int32 **); // rbx
  signed int v5; // eax

  *a2 = 0LL;
  *a2 = 0LL;
  v3 = *a1;
  v4 = *(__int64 (__fastcall **)(__int64, volatile signed __int32 **))(*(_QWORD *)*a1 + 48LL);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a2);
  v5 = v4(v3, a2);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  return a2;
}

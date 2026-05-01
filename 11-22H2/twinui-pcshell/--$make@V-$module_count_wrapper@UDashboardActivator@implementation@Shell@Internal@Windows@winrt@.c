/*
 * XREFs of ??$make@V?$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@@details@wil@@$$V@winrt@@YA?A_PXZ @ 0x180088040
 * Callers:
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180087AD0 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UDashboardActivator@implementation@Shell@Inter.c)
 * Callees:
 *     ??0?$heap_implements@V?$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x1800883D0 (--0-$heap_implements@V-$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@W.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall winrt::make<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardActivator>,>(
        __int64 *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  _OWORD *v5; // [rsp+40h] [rbp+8h]

  v2 = 0LL;
  v5 = operator new(0x20uLL);
  *v5 = 0LL;
  v5[1] = 0LL;
  v3 = winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardActivator>>::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardActivator>>(v5);
  if ( v3 )
    v2 = v3 + 8;
  *a1 = v2;
  return a1;
}

/*
 * XREFs of ??$make@V?$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@@details@wil@@$$V@winrt@@YA?AUDashboardActivator@Shell@Internal@Windows@0@XZ @ 0x180026D2C
 * Callers:
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180026C50 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UDashboardActivator@implementation@Shell@Inter.c)
 * Callees:
 *     ??0?$heap_implements@V?$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x180026D7C (--0-$heap_implements@V-$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@W.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall winrt::make<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardActivator>,>(
        __int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  _OWORD *v5; // [rsp+30h] [rbp+8h]

  v5 = operator new(0x20uLL);
  *v5 = 0LL;
  v5[1] = 0LL;
  v2 = winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardActivator>>::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardActivator>>(v5);
  v3 = 0LL;
  if ( v2 )
    v3 = v2 + 8;
  *a1 = v3;
  return a1;
}

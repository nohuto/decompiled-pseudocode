/*
 * XREFs of ??$make@V?$module_count_wrapper@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@@details@wil@@$$V@winrt@@YA?A_PXZ @ 0x1800881B4
 * Callers:
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180087F20 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UCloudPCComponent@implementation@Shell@Interna.c)
 * Callees:
 *     ??0?$heap_implements@V?$module_count_wrapper@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x180088694 (--0-$heap_implements@V-$module_count_wrapper@UCloudPCComponent@implementation@Shell@Internal@Win.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall winrt::make<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::CloudPCComponent>,>(
        __int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  void *v5; // [rsp+40h] [rbp+8h]

  v2 = 0LL;
  v5 = operator new(0x98uLL);
  memset_0(v5, 0, 0x98uLL);
  v3 = winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::CloudPCComponent>>::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::CloudPCComponent>>(v5);
  if ( v3 )
    v2 = v3 + 88;
  *a1 = v2;
  return a1;
}

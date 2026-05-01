/*
 * XREFs of ??$make@V?$module_count_wrapper@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@details@wil@@$$V@winrt@@YA?A_PXZ @ 0x18008C120
 * Callers:
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18008B9E0 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UTaskGroupsComponent@implementation@TaskGroups.c)
 * Callees:
 *     ??0?$heap_implements@V?$module_count_wrapper@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x18008C604 (--0-$heap_implements@V-$module_count_wrapper@UTaskGroupsComponent@implementation@TaskGroups@Shel.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall winrt::make<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>,>(
        __int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  void *v5; // [rsp+40h] [rbp+8h]

  v2 = 0LL;
  v5 = operator new(0x270uLL);
  memset_0(v5, 0, 0x270uLL);
  v3 = winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>>::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>>(v5);
  if ( v3 )
    v2 = v3 + 40;
  *a1 = v2;
  return a1;
}

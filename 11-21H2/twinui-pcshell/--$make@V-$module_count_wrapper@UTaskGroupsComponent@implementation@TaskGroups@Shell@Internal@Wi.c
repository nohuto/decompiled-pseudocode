/*
 * XREFs of ??$make@V?$module_count_wrapper@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@details@wil@@$$V@winrt@@YA?AU?$com_ptr@UIObjectWithSite@@@0@XZ @ 0x1800643A0
 * Callers:
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800CD950 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UTaskGroupsComponent@implementation@TaskGroups.c)
 * Callees:
 *     ??0?$heap_implements@V?$module_count_wrapper@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x180064400 (--0-$heap_implements@V-$module_count_wrapper@UTaskGroupsComponent@implementation@TaskGroups@Shel.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall winrt::make<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>,>(
        __int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h]

  v5 = operator new(0x270uLL);
  memset_0(v5, 0, 0x270uLL);
  v2 = winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>>::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>>(v5);
  v3 = 0LL;
  if ( v2 )
    v3 = v2 + 40;
  *a1 = v3;
  return a1;
}

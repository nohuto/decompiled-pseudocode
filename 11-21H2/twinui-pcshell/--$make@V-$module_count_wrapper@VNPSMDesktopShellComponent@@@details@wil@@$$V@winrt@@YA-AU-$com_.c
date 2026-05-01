/*
 * XREFs of ??$make@V?$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@$$V@winrt@@YA?AU?$com_ptr@UIObjectWithSite@@@0@XZ @ 0x1800CE0FC
 * Callers:
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@VNPSMDesktopShellComponent@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800CE020 (-CreateInstance@-$wrl_factory_for_winrt_com_class@VNPSMDesktopShellComponent@@@wil@@UEAAJPEAUIUn.c)
 * Callees:
 *     ??0?$heap_implements@V?$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x1800CE15C (--0-$heap_implements@V-$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@@impl@win.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall winrt::make<wil::details::module_count_wrapper<NPSMDesktopShellComponent>,>(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h]

  v5 = operator new(0x120uLL);
  memset_0(v5, 0, 0x120uLL);
  v2 = winrt::impl::heap_implements<wil::details::module_count_wrapper<NPSMDesktopShellComponent>>::heap_implements<wil::details::module_count_wrapper<NPSMDesktopShellComponent>>(v5);
  v3 = 0LL;
  if ( v2 )
    v3 = v2 + 8;
  *a1 = v3;
  return a1;
}

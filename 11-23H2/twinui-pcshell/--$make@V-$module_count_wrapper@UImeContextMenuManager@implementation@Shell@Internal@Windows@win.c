/*
 * XREFs of ??$make@V?$module_count_wrapper@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@$$V@winrt@@YA?A_PXZ @ 0x18008C378
 * Callers:
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18008BE50 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UImeContextMenuManager@implementation@Shell@In.c)
 * Callees:
 *     ??0?$module_count_wrapper@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@QEAA@XZ @ 0x180089E60 (--0-$module_count_wrapper@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@d.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::make<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager>,>(
        _QWORD *a1)
{
  _QWORD *v3; // [rsp+40h] [rbp+8h]

  v3 = operator new(0x80uLL);
  memset_0(v3, 0, 0x80uLL);
  wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager>::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager>(v3);
  *v3 = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager,std::tuple<IImeContextMenuExperienceManager>>'};
  v3[1] = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  v3[2] = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::InputSwitchingManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  v3[3] = &winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  v3[5] = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager>>::`vftable'{for `winrt::immersive_shell_component'};
  *a1 = v3 + 1;
  return a1;
}

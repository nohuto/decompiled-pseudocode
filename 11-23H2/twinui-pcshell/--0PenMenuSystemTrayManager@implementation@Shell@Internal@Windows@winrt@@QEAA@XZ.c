/*
 * XREFs of ??0PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18008AE84
 * Callers:
 *     ??0?$heap_implements@V?$module_count_wrapper@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x18008AFDC (--0-$heap_implements@V-$module_count_wrapper@UPenMenuSystemTrayManager@implementation@Shell@Inte.c)
 * Callees:
 *     ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x18008AB3C (--0immersive_shell_component@winrt@@QEAA@XZ.c)
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x1800BCCE4 (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager *__fastcall winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::PenMenuSystemTrayManager(
        winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager *this)
{
  _QWORD *v2; // rcx

  *(_QWORD *)this = &winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager,std::tuple<IImeContextMenuExperienceManager>>::`vftable';
  winrt::immersive_shell_component::immersive_shell_component((winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager *)((char *)this + 8));
  *(_QWORD *)this = &winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager,std::tuple<IPenMenuSystemTrayManager>>'};
  *v2 = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 2) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 3) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 5) = &winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::`vftable'{for `winrt::immersive_shell_component'};
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  winrt::immersive_shell_component::register_service_information<_GUID const>(v2, &CLSID_PenMenuSystemTrayManager);
  return this;
}

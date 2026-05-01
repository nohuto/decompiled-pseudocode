/*
 * XREFs of ??0?$heap_implements@V?$module_count_wrapper@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x18008AFDC
 * Callers:
 *     ??$make@V?$module_count_wrapper@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@$$V@winrt@@YA?A_PXZ @ 0x18008C18C (--$make@V-$module_count_wrapper@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@.c)
 * Callees:
 *     ??0PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18008AE84 (--0PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18028E190 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager *__fastcall winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>>::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>>(
        winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager *a1)
{
  winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::PenMenuSystemTrayManager(a1);
  *(_QWORD *)a1 = &winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager,std::tuple<IPenMenuSystemTrayManager>>'};
  *((_QWORD *)a1 + 1) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)a1 + 2) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)a1 + 3) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)a1 + 5) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>>::`vftable'{for `winrt::immersive_shell_component'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = &winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager,std::tuple<IPenMenuSystemTrayManager>>'};
  *((_QWORD *)a1 + 1) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)a1 + 2) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)a1 + 3) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)a1 + 5) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>>::`vftable'{for `winrt::immersive_shell_component'};
  return a1;
}

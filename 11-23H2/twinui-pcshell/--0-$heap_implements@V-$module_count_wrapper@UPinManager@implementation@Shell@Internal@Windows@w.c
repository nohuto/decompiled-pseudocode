/*
 * XREFs of ??0?$heap_implements@V?$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x180088928
 * Callers:
 *     ??$make@V?$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@$$V@winrt@@YA?A_PXZ @ 0x1800882F8 (--$make@V-$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@winrt@@@detail.c)
 * Callees:
 *     ??0PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180088BE8 (--0PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Internal::Shell::implementation::PinManager *__fastcall winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>>::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>>(
        winrt::Windows::Internal::Shell::implementation::PinManager *a1)
{
  winrt::Windows::Internal::Shell::implementation::PinManager::PinManager(a1);
  *(_QWORD *)a1 = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::PinManager,std::tuple<winrt::Windows::Internal::Shell::PinManager,IPinManagerInterop3>>'};
  *((_QWORD *)a1 + 2) = &winrt::Windows::Internal::Shell::implementation::PinManager_base<winrt::Windows::Internal::Shell::implementation::PinManager,IPinManagerInterop3,winrt::immersive_shell_component>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)a1 + 3) = &winrt::Windows::Internal::Shell::implementation::PinManager_base<winrt::Windows::Internal::Shell::implementation::PinManager,IPinManagerInterop3,winrt::immersive_shell_component>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)a1 + 4) = &winrt::Windows::Internal::Shell::implementation::PinManager_base<winrt::Windows::Internal::Shell::implementation::PinManager,IPinManagerInterop3,winrt::immersive_shell_component>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)a1 + 6) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>>::`vftable'{for `winrt::immersive_shell_component'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::PinManager,std::tuple<winrt::Windows::Internal::Shell::PinManager,IPinManagerInterop3>>'};
  *((_QWORD *)a1 + 2) = &winrt::Windows::Internal::Shell::implementation::PinManager_base<winrt::Windows::Internal::Shell::implementation::PinManager,IPinManagerInterop3,winrt::immersive_shell_component>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)a1 + 3) = &winrt::Windows::Internal::Shell::implementation::PinManager_base<winrt::Windows::Internal::Shell::implementation::PinManager,IPinManagerInterop3,winrt::immersive_shell_component>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)a1 + 4) = &winrt::Windows::Internal::Shell::implementation::PinManager_base<winrt::Windows::Internal::Shell::implementation::PinManager,IPinManagerInterop3,winrt::immersive_shell_component>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)a1 + 6) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>>::`vftable'{for `winrt::immersive_shell_component'};
  return a1;
}

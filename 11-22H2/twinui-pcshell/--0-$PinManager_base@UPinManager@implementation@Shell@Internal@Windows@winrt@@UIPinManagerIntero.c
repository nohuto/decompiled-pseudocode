/*
 * XREFs of ??0?$PinManager_base@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManagerInterop3@@Uimmersive_shell_component@6@@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18024F614
 * Callers:
 *     ??0PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180088BE8 (--0PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x18008AB3C (--0immersive_shell_component@winrt@@QEAA@XZ.c)
 */

_QWORD *__fastcall winrt::Windows::Internal::Shell::implementation::PinManager_base<winrt::Windows::Internal::Shell::implementation::PinManager,IPinManagerInterop3,winrt::immersive_shell_component>::PinManager_base<winrt::Windows::Internal::Shell::implementation::PinManager,IPinManagerInterop3,winrt::immersive_shell_component>(
        _QWORD *a1)
{
  _QWORD *v1; // rcx
  _QWORD *v2; // r8

  a1[1] = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::Windows::Internal::Shell::IPinManager>::`vftable';
  *a1 = &winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::PinManager,std::tuple<winrt::Windows::Internal::Shell::PinManager,IPinManagerInterop3>>::`vftable';
  winrt::immersive_shell_component::immersive_shell_component((winrt::immersive_shell_component *)(a1 + 2));
  *v1 = &winrt::Windows::Internal::Shell::implementation::PinManager_base<winrt::Windows::Internal::Shell::implementation::PinManager,IPinManagerInterop3,winrt::immersive_shell_component>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *v2 = &winrt::Windows::Internal::Shell::implementation::PinManager_base<winrt::Windows::Internal::Shell::implementation::PinManager,IPinManagerInterop3,winrt::immersive_shell_component>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::PinManager,std::tuple<winrt::Windows::Internal::Shell::PinManager,IPinManagerInterop3>>'};
  v2[3] = &winrt::Windows::Internal::Shell::implementation::PinManager_base<winrt::Windows::Internal::Shell::implementation::PinManager,IPinManagerInterop3,winrt::immersive_shell_component>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  v2[4] = &winrt::Windows::Internal::Shell::implementation::PinManager_base<winrt::Windows::Internal::Shell::implementation::PinManager,IPinManagerInterop3,winrt::immersive_shell_component>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  v2[6] = &winrt::Windows::Internal::Shell::implementation::PinManager_base<winrt::Windows::Internal::Shell::implementation::PinManager,IPinManagerInterop3,winrt::immersive_shell_component>::`vftable'{for `winrt::immersive_shell_component'};
  return v2;
}

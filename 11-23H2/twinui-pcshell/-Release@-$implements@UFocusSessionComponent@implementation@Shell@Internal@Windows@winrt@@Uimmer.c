/*
 * XREFs of ?Release@?$implements@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIFocusSessionComponent@3456@@winrt@@UEAAKXZ @ 0x1800D73F0
 * Callers:
 *     ?Release@?$implements@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIFocusSessionComponent@3456@@winrt@@W7EAAKXZ @ 0x18028E3B0 (-Release@-$implements@UFocusSessionComponent@implementation@Shell@Internal@Windows@_ea_18028E3B0.c)
 *     ?Release@?$implements@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIFocusSessionComponent@3456@@winrt@@WBA@EAAKXZ @ 0x18028E3D0 (-Release@-$implements@UFocusSessionComponent@implementation@Shell@Internal@Windows@_ea_18028E3D0.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@UDesktopTaskGroupsSwitchItemController@factory_implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@IEAAIXZ @ 0x1800B1C58 (-subtract_reference@-$root_implements@UDesktopTaskGroupsSwitchItemController@factory_implementat.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::IFocusSessionComponent>::Release(
        __int64 a1)
{
  volatile __int64 *v1; // rbx
  unsigned int v2; // edi

  v1 = (volatile __int64 *)(a1 + 32);
  v2 = winrt::impl::root_implements<winrt::Windows::Internal::Shell::DesktopTaskGroups::factory_implementation::DesktopTaskGroupsSwitchItemController,winrt::Windows::Foundation::IActivationFactory>::subtract_reference(a1 + 32);
  if ( !v2 )
  {
    _InterlockedExchange64(v1 + 1, 1LL);
    if ( v1 )
      (*(void (__fastcall **)(volatile __int64 *, _QWORD))(*v1 + 8))(v1, v2 + 1);
  }
  return v2;
}

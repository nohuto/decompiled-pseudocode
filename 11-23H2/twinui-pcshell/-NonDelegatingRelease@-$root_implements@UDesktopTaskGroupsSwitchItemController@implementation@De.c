/*
 * XREFs of ?NonDelegatingRelease@?$root_implements@UDesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@U134567@@impl@winrt@@IEAAIXZ @ 0x1800D9E28
 * Callers:
 *     ?Release@?$implements@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@U13456@UIClassFactory@@@winrt@@UEAAKXZ @ 0x1800D9F10 (-Release@-$implements@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@U13456@UI.c)
 *     ?Release@?$produce_base@VListenerWindow@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@UEAAIXZ @ 0x1800DAF50 (-Release@-$produce_base@VListenerWindow@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@U.c)
 *     ?unconditional_release_ref@?$com_ptr@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18012944C (-unconditional_release_ref@-$com_ptr@UEdgeAnimationRelationshipManager@implementation@Animations.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@UDesktopTaskGroupsSwitchItemController@factory_implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@IEAAIXZ @ 0x1800B1C58 (-subtract_reference@-$root_implements@UDesktopTaskGroupsSwitchItemController@factory_implementat.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController,winrt::Windows::Internal::Shell::DesktopTaskGroups::DesktopTaskGroupsSwitchItemController>::NonDelegatingRelease(
        volatile __int64 *a1)
{
  unsigned int v2; // edi
  __int64 v4; // r8

  v2 = winrt::impl::root_implements<winrt::Windows::Internal::Shell::DesktopTaskGroups::factory_implementation::DesktopTaskGroupsSwitchItemController,winrt::Windows::Foundation::IActivationFactory>::subtract_reference((__int64)a1);
  if ( !v2 )
  {
    v4 = _InterlockedExchange64(a1 + 1, 1LL);
    if ( a1 )
      (*(void (__fastcall **)(volatile __int64 *, __int64, __int64))(*a1 + 8))(a1, 1LL, v4);
  }
  return v2;
}

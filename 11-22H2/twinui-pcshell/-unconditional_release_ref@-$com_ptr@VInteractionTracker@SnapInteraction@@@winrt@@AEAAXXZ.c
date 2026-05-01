/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@VInteractionTracker@SnapInteraction@@@winrt@@AEAAXXZ @ 0x180670280
 * Callers:
 *     ??1?$com_ptr@VInteractionTracker@SnapInteraction@@@winrt@@QEAA@XZ @ 0x18066F9C0 (--1-$com_ptr@VInteractionTracker@SnapInteraction@@@winrt@@QEAA@XZ.c)
 *     winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_ee45b6845675de9c207e4cdce24e0e3d___::Invoke @ 0x18066FB70 (winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_ee45b684567.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@UDesktopTaskGroupsSwitchItemController@factory_implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@IEAAIXZ @ 0x1800B1C58 (-subtract_reference@-$root_implements@UDesktopTaskGroupsSwitchItemController@factory_implementat.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::com_ptr<SnapInteraction::InteractionTracker>::unconditional_release_ref(__int64 *a1)
{
  __int64 v1; // rbx
  volatile __int64 *v2; // rbx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  v2 = (volatile __int64 *)(v1 + 24);
  result = winrt::impl::root_implements<winrt::Windows::Internal::Shell::DesktopTaskGroups::factory_implementation::DesktopTaskGroupsSwitchItemController,winrt::Windows::Foundation::IActivationFactory>::subtract_reference((__int64)v2);
  if ( !(_DWORD)result )
  {
    result = _InterlockedExchange64(v2 + 1, 1LL);
    if ( v2 )
      return (*(__int64 (__fastcall **)(volatile __int64 *, __int64))(*v2 + 8))(v2, 1LL);
  }
  return result;
}

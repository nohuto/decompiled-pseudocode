/*
 * XREFs of ?Release@?$produce_base@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@UEAAIXZ @ 0x1801B98A0
 * Callers:
 *     <none>
 * Callees:
 *     ?subtract_reference@?$root_implements@UDesktopTaskGroupsSwitchItemController@factory_implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@IEAAIXZ @ 0x1800B1C58 (-subtract_reference@-$root_implements@UDesktopTaskGroupsSwitchItemController@factory_implementat.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::produce_base<SnapInteraction::InteractionTracker,winrt::Windows::Foundation::IInspectable,void>::Release(
        __int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi

  v1 = a1 + 8;
  if ( !a1 )
    v1 = 24LL;
  v2 = winrt::impl::root_implements<winrt::Windows::Internal::Shell::DesktopTaskGroups::factory_implementation::DesktopTaskGroupsSwitchItemController,winrt::Windows::Foundation::IActivationFactory>::subtract_reference(v1);
  if ( !v2 )
  {
    _InterlockedExchange64((volatile __int64 *)(v1 + 8), 1LL);
    if ( v1 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 8LL))(v1, 1LL);
  }
  return v2;
}

/*
 * XREFs of winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_ee45b6845675de9c207e4cdce24e0e3d___::Invoke @ 0x1805A07B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateTelemetry@InteractionTracker@SnapInteraction@@AEAAXXZ @ 0x1805A0BE0 (-UpdateTelemetry@InteractionTracker@SnapInteraction@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@VInteractionTracker@SnapInteraction@@@winrt@@AEAAXXZ @ 0x1805A0E90 (-unconditional_release_ref@-$com_ptr@VInteractionTracker@SnapInteraction@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_ee45b6845675de9c207e4cdce24e0e3d___::Invoke(
        __int64 a1)
{
  SnapInteraction::InteractionTracker *v1; // rcx
  SnapInteraction::InteractionTracker *v2; // rbx
  __int64 result; // rax
  SnapInteraction::InteractionTracker *v4; // [rsp+30h] [rbp+8h] BYREF
  SnapInteraction::InteractionTracker *v5; // [rsp+40h] [rbp+18h] BYREF

  v1 = *(SnapInteraction::InteractionTracker **)(a1 + 8);
  if ( v1 )
  {
    v4 = 0LL;
    (*(void (__fastcall **)(SnapInteraction::InteractionTracker *, __int64 *, SnapInteraction::InteractionTracker **))(*(_QWORD *)v1 + 24LL))(
      v1,
      &winrt::impl::guid_v<IInspectable>,
      &v4);
    v1 = v4;
    if ( v4 )
      v1 = (SnapInteraction::InteractionTracker *)((char *)v4 - 16);
    v4 = 0LL;
    v2 = v1;
  }
  else
  {
    v2 = 0LL;
  }
  try
  {
    v5 = v1;
    if ( v2 )
    {
      SnapInteraction::InteractionTracker::UpdateTelemetry(v1);
      winrt::com_ptr<SnapInteraction::InteractionTracker>::unconditional_release_ref(&v5);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}

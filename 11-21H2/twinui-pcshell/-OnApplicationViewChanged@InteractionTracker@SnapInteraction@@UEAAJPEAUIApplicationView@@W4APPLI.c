/*
 * XREFs of ?OnApplicationViewChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180098730
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x180078F18 (-OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winrt@.c)
 *     ?OnViewUnfocused@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x180098534 (-OnViewUnfocused@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winr.c)
 *     ?OnViewRemoved@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x1800987E8 (-OnViewRemoved@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winrt@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SnapInteraction::InteractionTracker::OnApplicationViewChanged(
        RTL_SRWLOCK *a1,
        SnapLayoutHelpers *a2,
        int a3,
        const char *a4)
{
  SnapLayoutHelpers *v6; // rbx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  SnapLayoutHelpers *v9; // [rsp+38h] [rbp+10h] BYREF

  try
  {
    v6 = 0LL;
    v9 = 0LL;
    if ( a2 )
    {
      v6 = a2;
      v9 = a2;
      (*(void (__fastcall **)(SnapLayoutHelpers *))(*(_QWORD *)a2 + 8LL))(a2);
    }
    if ( a3 > 0 )
    {
      if ( a3 <= 2 )
      {
        SnapInteraction::InteractionTracker::OnViewRemoved(a1, &v9);
      }
      else if ( a3 == 7 )
      {
        SnapInteraction::InteractionTracker::OnViewFocused(a1, &v9);
        v6 = v9;
      }
      else if ( a3 == 9 )
      {
        SnapInteraction::InteractionTracker::OnViewUnfocused(a1, (__int64)&v9);
      }
    }
    if ( v6 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xDD,
                           (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\interactiontracker.cpp",
                           a4);
  }
  return result;
}

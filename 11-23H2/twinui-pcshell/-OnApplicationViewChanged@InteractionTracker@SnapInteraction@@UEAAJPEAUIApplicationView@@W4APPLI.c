/*
 * XREFs of ?OnApplicationViewChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18009D1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x1800306EC (-OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winrt@.c)
 *     ?OnViewUnfocused@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x18003082C (-OnViewUnfocused@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winr.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?OnViewRemoved@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x18009D258 (-OnViewRemoved@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winrt@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SnapInteraction::InteractionTracker::OnApplicationViewChanged(
        RTL_SRWLOCK *a1,
        SnapLayoutHelpers *a2,
        int a3,
        const char *a4)
{
  SnapLayoutHelpers *v6; // rbx
  int v7; // edi
  int v8; // edi
  int v9; // edi
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  SnapLayoutHelpers *v12; // [rsp+38h] [rbp+10h] BYREF

  try
  {
    v6 = 0LL;
    v12 = 0LL;
    if ( a2 )
    {
      v6 = a2;
      v12 = a2;
      (*(void (__fastcall **)(SnapLayoutHelpers *))(*(_QWORD *)a2 + 8LL))(a2);
    }
    v7 = a3 - 1;
    if ( v7 && (v8 = v7 - 1) != 0 )
    {
      v9 = v8 - 5;
      if ( v9 )
      {
        if ( v9 == 2 )
          SnapInteraction::InteractionTracker::OnViewUnfocused(a1, (__int64)&v12);
      }
      else
      {
        SnapInteraction::InteractionTracker::OnViewFocused(a1, &v12);
        v6 = v12;
      }
    }
    else
    {
      SnapInteraction::InteractionTracker::OnViewRemoved(a1, &v12);
    }
    if ( v6 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v12);
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

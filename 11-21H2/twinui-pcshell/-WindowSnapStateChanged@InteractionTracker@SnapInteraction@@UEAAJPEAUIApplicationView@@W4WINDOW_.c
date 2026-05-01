/*
 * XREFs of ?WindowSnapStateChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x1805A0DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?OnViewSnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x1805A0870 (-OnViewSnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winrt@.c)
 *     ?OnViewUnsnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x1805A095C (-OnViewUnsnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winr.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SnapInteraction::InteractionTracker::WindowSnapStateChanged(
        __int64 a1,
        __int64 a2,
        int a3,
        const char *a4)
{
  __int64 v6; // rbx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v9 = 0LL;
  if ( a2 )
  {
    v6 = a2;
    v9 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
  }
  try
  {
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        SnapInteraction::InteractionTracker::OnViewSnapped(a1 - 8, (unsigned __int64 *)&v9);
        v6 = v9;
      }
    }
    else
    {
      SnapInteraction::InteractionTracker::OnViewUnsnapped((RTL_SRWLOCK *)(a1 - 8), &v9);
    }
    if ( v6 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xF1,
                           (int)"pcshell\\twinui\\snapcomponent\\lib\\interactiontracker.cpp",
                           a4);
  }
  return result;
}

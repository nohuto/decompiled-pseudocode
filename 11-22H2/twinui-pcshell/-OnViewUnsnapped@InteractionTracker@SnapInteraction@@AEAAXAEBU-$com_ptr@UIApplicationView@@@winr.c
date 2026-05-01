/*
 * XREFs of ?OnViewUnsnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x18066FD44
 * Callers:
 *     ?WindowSnapStateChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x1806701B0 (-WindowSnapStateChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4WINDOW_.c)
 * Callees:
 *     ?FindRecord@InteractionTracker@SnapInteraction@@AEAA?AV?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@AEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x1800308C8 (-FindRecord@InteractionTracker@SnapInteraction@@AEAA-AV-$shared_ptr@VInteractionRecord@SnapInter.c)
 *     ?IsSnapped@InteractionRecord@SnapInteraction@@QEAAX_N@Z @ 0x180030F88 (-IsSnapped@InteractionRecord@SnapInteraction@@QEAAX_N@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall SnapInteraction::InteractionTracker::OnViewUnsnapped(RTL_SRWLOCK *a1, _QWORD *a2)
{
  RTL_SRWLOCK *v4; // rsi
  SnapInteraction::InteractionRecord *v5; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v6; // [rsp+28h] [rbp-10h]

  v4 = a1 + 13;
  AcquireSRWLockExclusive(a1 + 13);
  SnapInteraction::InteractionTracker::FindRecord((__int64)a1, &v5, a2);
  if ( v5 )
    SnapInteraction::InteractionRecord::IsSnapped((RTL_SRWLOCK *)v5, 0);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}

/*
 * XREFs of ?OnViewUnfocused@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x18003082C
 * Callers:
 *     ?OnApplicationViewChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18009D1A0 (-OnApplicationViewChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4APPLI.c)
 * Callees:
 *     ?FindRecord@InteractionTracker@SnapInteraction@@AEAA?AV?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@AEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x1800308C8 (-FindRecord@InteractionTracker@SnapInteraction@@AEAA-AV-$shared_ptr@VInteractionRecord@SnapInter.c)
 *     ?IsActive@InteractionRecord@SnapInteraction@@QEAAX_N@Z @ 0x1800309A8 (-IsActive@InteractionRecord@SnapInteraction@@QEAAX_N@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall SnapInteraction::InteractionTracker::OnViewUnfocused(RTL_SRWLOCK *a1, __int64 a2)
{
  RTL_SRWLOCK *v4; // rdi
  SnapInteraction::InteractionRecord *v5; // rbx
  SnapInteraction::InteractionRecord *v6; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v7; // [rsp+28h] [rbp-10h]

  v4 = a1 + 13;
  AcquireSRWLockExclusive(a1 + 13);
  SnapInteraction::InteractionTracker::FindRecord(a1, &v6, a2);
  v5 = v6;
  if ( v6 )
    SnapInteraction::InteractionRecord::IsActive(v6, 0);
  if ( v5 == a1[9].Ptr )
    std::shared_ptr<PeoplePaneViewInfo>::reset(&a1[9]);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}

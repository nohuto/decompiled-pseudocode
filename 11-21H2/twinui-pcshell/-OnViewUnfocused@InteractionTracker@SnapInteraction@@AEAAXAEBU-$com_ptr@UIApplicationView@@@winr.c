/*
 * XREFs of ?OnViewUnfocused@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x180098534
 * Callers:
 *     ?OnApplicationViewChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180098730 (-OnApplicationViewChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4APPLI.c)
 * Callees:
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?IsActive@InteractionRecord@SnapInteraction@@QEAAX_N@Z @ 0x18002C35C (-IsActive@InteractionRecord@SnapInteraction@@QEAAX_N@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FindRecord@InteractionTracker@SnapInteraction@@AEAA?AV?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@AEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x1800985C8 (-FindRecord@InteractionTracker@SnapInteraction@@AEAA-AV-$shared_ptr@VInteractionRecord@SnapInter.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall SnapInteraction::InteractionTracker::OnViewUnfocused(RTL_SRWLOCK *a1, __int64 a2)
{
  RTL_SRWLOCK *v4; // rbx
  SnapInteraction::InteractionRecord *v5; // rbx
  SnapInteraction::InteractionRecord *v6; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v7; // [rsp+28h] [rbp-10h]
  RTL_SRWLOCK *v8; // [rsp+40h] [rbp+8h] BYREF

  v4 = a1 + 13;
  AcquireSRWLockExclusive(a1 + 13);
  v8 = v4;
  SnapInteraction::InteractionTracker::FindRecord(a1, &v6, a2);
  v5 = v6;
  if ( v6 )
    SnapInteraction::InteractionRecord::IsActive((RTL_SRWLOCK *)v6, 0);
  if ( v5 == a1[9].Ptr )
    std::shared_ptr<PeoplePaneViewInfo>::reset(&a1[9].Ptr);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v8);
}

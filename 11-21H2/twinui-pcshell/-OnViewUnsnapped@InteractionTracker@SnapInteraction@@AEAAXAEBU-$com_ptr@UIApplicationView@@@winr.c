/*
 * XREFs of ?OnViewUnsnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x1805A095C
 * Callers:
 *     ?WindowSnapStateChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x1805A0DC0 (-WindowSnapStateChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4WINDOW_.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FindRecord@InteractionTracker@SnapInteraction@@AEAA?AV?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@AEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x1800985C8 (-FindRecord@InteractionTracker@SnapInteraction@@AEAA-AV-$shared_ptr@VInteractionRecord@SnapInter.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?IsSnapped@InteractionRecord@SnapInteraction@@QEAAX_N@Z @ 0x1801654C0 (-IsSnapped@InteractionRecord@SnapInteraction@@QEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall SnapInteraction::InteractionTracker::OnViewUnsnapped(RTL_SRWLOCK *a1, _QWORD *a2)
{
  SnapInteraction::InteractionRecord *v4; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v5; // [rsp+28h] [rbp-10h]
  RTL_SRWLOCK *v6; // [rsp+40h] [rbp+8h] BYREF

  wil::AcquireSRWLockExclusive(&v6, a1 + 13);
  SnapInteraction::InteractionTracker::FindRecord((__int64)a1, &v4, a2);
  if ( v4 )
    SnapInteraction::InteractionRecord::IsSnapped((RTL_SRWLOCK *)v4, 0);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v6);
}

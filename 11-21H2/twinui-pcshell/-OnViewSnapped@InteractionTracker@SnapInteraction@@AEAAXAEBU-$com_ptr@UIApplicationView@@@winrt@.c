/*
 * XREFs of ?OnViewSnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x1805A0870
 * Callers:
 *     ?WindowSnapStateChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x1805A0DC0 (-WindowSnapStateChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4WINDOW_.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180095E64 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FindRecord@InteractionTracker@SnapInteraction@@AEAA?AV?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@AEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x1800985C8 (-FindRecord@InteractionTracker@SnapInteraction@@AEAA-AV-$shared_ptr@VInteractionRecord@SnapInter.c)
 *     ?HasInteraction@InteractionRecord@SnapInteraction@@QEAA_NXZ @ 0x180099458 (-HasInteraction@InteractionRecord@SnapInteraction@@QEAA_NXZ.c)
 *     ??$_Insert_or_assign@AEBU?$com_ptr@UIApplicationView@@@winrt@@AEAV?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@?$map@U?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@U?$less@U?$com_ptr@UIApplicationView@@@winrt@@@4@V?$allocator@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@std@@_N@1@AEBU?$com_ptr@UIApplicationView@@@winrt@@AEAV?$shared_ptr@VInteractionRecord@SnapInteraction@@@1@@Z @ 0x1801218D8 (--$_Insert_or_assign@AEBU-$com_ptr@UIApplicationView@@@winrt@@AEAV-$shared_ptr@VInteractionRecor.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$make_shared@VInteractionRecord@SnapInteraction@@AEBU?$com_ptr@UIApplicationView@@@winrt@@@std@@YA?AV?$shared_ptr@VInteractionRecord@SnapInteraction@@@0@AEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x180159F38 (--$make_shared@VInteractionRecord@SnapInteraction@@AEBU-$com_ptr@UIApplicationView@@@winrt@@@std.c)
 *     ?IsSnapped@InteractionRecord@SnapInteraction@@QEAAX_N@Z @ 0x1801654C0 (-IsSnapped@InteractionRecord@SnapInteraction@@QEAAX_N@Z.c)
 *     ?EnsureUpdateTimer@InteractionTracker@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805A0688 (-EnsureUpdateTimer@InteractionTracker@SnapInteraction@@AEAAXAEBV-$unique_any_t@V-$unique_storage.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall SnapInteraction::InteractionTracker::OnViewSnapped(__int64 a1, unsigned __int64 *a2)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // rdx
  SnapInteraction::InteractionRecord *v7; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v10; // [rsp+38h] [rbp-10h]
  RTL_SRWLOCK *v11; // [rsp+50h] [rbp+8h] BYREF

  wil::AcquireSRWLockExclusive(&v11, (RTL_SRWLOCK *)(a1 + 104));
  SnapInteraction::InteractionTracker::FindRecord(a1, &v7, a2);
  v4 = (RTL_SRWLOCK *)v7;
  if ( !v7 )
  {
    v5 = std::make_shared<SnapInteraction::InteractionRecord,winrt::com_ptr<IApplicationView> const &>(&v9, a2);
    std::shared_ptr<ViewEventRegistration>::operator=(&v7, v5);
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
    std::map<winrt::com_ptr<IApplicationView>,std::shared_ptr<SnapInteraction::InteractionRecord>>::_Insert_or_assign<winrt::com_ptr<IApplicationView> const &,std::shared_ptr<SnapInteraction::InteractionRecord> &>(
      (__int64 *)(a1 + 88),
      (__int64)&v9,
      a2);
    v4 = (RTL_SRWLOCK *)v7;
  }
  SnapInteraction::InteractionRecord::IsSnapped(v4, 1);
  if ( SnapInteraction::InteractionRecord::HasInteraction(v4) )
    SnapInteraction::InteractionTracker::EnsureUpdateTimer(a1, v6);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v11);
}

/*
 * XREFs of ?OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x1800306EC
 * Callers:
 *     ?OnApplicationViewChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18009D1A0 (-OnApplicationViewChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4APPLI.c)
 * Callees:
 *     ?FindRecord@InteractionTracker@SnapInteraction@@AEAA?AV?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@AEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x1800308C8 (-FindRecord@InteractionTracker@SnapInteraction@@AEAA-AV-$shared_ptr@VInteractionRecord@SnapInter.c)
 *     ?HasInteraction@InteractionRecord@SnapInteraction@@QEAA_NXZ @ 0x180030948 (-HasInteraction@InteractionRecord@SnapInteraction@@QEAA_NXZ.c)
 *     ?IsActive@InteractionRecord@SnapInteraction@@QEAAX_N@Z @ 0x1800309A8 (-IsActive@InteractionRecord@SnapInteraction@@QEAAX_N@Z.c)
 *     ?IsSnappedWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180030A14 (-IsSnappedWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ??$make_shared@VInteractionRecord@SnapInteraction@@AEBU?$com_ptr@UIApplicationView@@@winrt@@@std@@YA?AV?$shared_ptr@VInteractionRecord@SnapInteraction@@@0@AEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x180030C24 (--$make_shared@VInteractionRecord@SnapInteraction@@AEBU-$com_ptr@UIApplicationView@@@winrt@@@std.c)
 *     ??$_Insert_or_assign@AEBU?$com_ptr@UIApplicationView@@@winrt@@AEAV?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@?$map@U?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@U?$less@U?$com_ptr@UIApplicationView@@@winrt@@@4@V?$allocator@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@std@@_N@1@AEBU?$com_ptr@UIApplicationView@@@winrt@@AEAV?$shared_ptr@VInteractionRecord@SnapInteraction@@@1@@Z @ 0x180030CBC (--$_Insert_or_assign@AEBU-$com_ptr@UIApplicationView@@@winrt@@AEAV-$shared_ptr@VInteractionRecor.c)
 *     ?IsSnapped@InteractionRecord@SnapInteraction@@QEAAX_N@Z @ 0x180030F88 (-IsSnapped@InteractionRecord@SnapInteraction@@QEAAX_N@Z.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18008D264 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18009C468 (--4-$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?EnsureUpdateTimer@InteractionTracker@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18066FA44 (-EnsureUpdateTimer@InteractionTracker@SnapInteraction@@AEAAXAEBV-$unique_any_t@V-$unique_storage.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall SnapInteraction::InteractionTracker::OnViewFocused(RTL_SRWLOCK *a1, SnapLayoutHelpers **a2)
{
  bool IsSnappedWindow; // r15
  RTL_SRWLOCK *v5; // r14
  SnapInteraction::InteractionRecord *v6; // rbx
  __int64 v7; // rax
  RTL_SRWLOCK *v8; // rcx
  volatile signed __int32 *Ptr; // rax
  SnapInteraction::InteractionRecord *v10; // rsi
  std::_Ref_count_base *v11; // rdi
  SnapInteraction::InteractionRecord *v12; // [rsp+20h] [rbp-30h] BYREF
  std::_Ref_count_base *v13; // [rsp+28h] [rbp-28h]
  SnapInteraction::InteractionRecord *v14; // [rsp+30h] [rbp-20h] BYREF
  std::_Ref_count_base *v15; // [rsp+38h] [rbp-18h]
  char v16[16]; // [rsp+40h] [rbp-10h] BYREF

  IsSnappedWindow = SnapLayoutHelpers::IsSnappedWindow(*a2, (struct IApplicationView *)a2);
  v5 = a1 + 13;
  AcquireSRWLockExclusive(a1 + 13);
  SnapInteraction::InteractionTracker::FindRecord(a1, &v12, a2);
  v6 = v12;
  if ( !v12 )
  {
    v7 = std::make_shared<SnapInteraction::InteractionRecord,winrt::com_ptr<IApplicationView> const &>(&v14, a2);
    std::shared_ptr<ViewEventRegistration>::operator=(&v12, v7);
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
    SnapInteraction::InteractionRecord::IsSnapped(v12, IsSnappedWindow);
    std::map<winrt::com_ptr<IApplicationView>,std::shared_ptr<SnapInteraction::InteractionRecord>>::_Insert_or_assign<winrt::com_ptr<IApplicationView> const &,std::shared_ptr<SnapInteraction::InteractionRecord> &>(
      &a1[11],
      v16,
      a2,
      &v12);
    v6 = v12;
  }
  SnapInteraction::InteractionRecord::IsActive(v6, 1);
  if ( SnapInteraction::InteractionRecord::HasInteraction(v6) )
    SnapInteraction::InteractionTracker::EnsureUpdateTimer(a1);
  v8 = a1 + 9;
  Ptr = (volatile signed __int32 *)a1[10].Ptr;
  if ( Ptr )
  {
    _InterlockedIncrement(Ptr + 2);
    v6 = v12;
  }
  v14 = (SnapInteraction::InteractionRecord *)v8->Ptr;
  v10 = v14;
  v11 = (std::_Ref_count_base *)a1[10].Ptr;
  v15 = (std::_Ref_count_base *)v8[1].Ptr;
  std::shared_ptr<SnapInteraction::InteractionRecord>::operator=(v8, &v12);
  if ( v10 && v10 != v6 )
    SnapInteraction::InteractionRecord::IsActive(v10, 0);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
}

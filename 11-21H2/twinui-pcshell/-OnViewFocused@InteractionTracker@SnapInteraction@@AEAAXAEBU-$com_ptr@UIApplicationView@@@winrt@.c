/*
 * XREFs of ?OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x180078F18
 * Callers:
 *     ?OnApplicationViewChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180098730 (-OnApplicationViewChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4APPLI.c)
 * Callees:
 *     ?IsActive@InteractionRecord@SnapInteraction@@QEAAX_N@Z @ 0x18002C35C (-IsActive@InteractionRecord@SnapInteraction@@QEAAX_N@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180095E64 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FindRecord@InteractionTracker@SnapInteraction@@AEAA?AV?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@AEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x1800985C8 (-FindRecord@InteractionTracker@SnapInteraction@@AEAA-AV-$shared_ptr@VInteractionRecord@SnapInter.c)
 *     ?HasInteraction@InteractionRecord@SnapInteraction@@QEAA_NXZ @ 0x180099458 (-HasInteraction@InteractionRecord@SnapInteraction@@QEAA_NXZ.c)
 *     ??$_Insert_or_assign@AEBU?$com_ptr@UIApplicationView@@@winrt@@AEAV?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@?$map@U?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@U?$less@U?$com_ptr@UIApplicationView@@@winrt@@@4@V?$allocator@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@std@@_N@1@AEBU?$com_ptr@UIApplicationView@@@winrt@@AEAV?$shared_ptr@VInteractionRecord@SnapInteraction@@@1@@Z @ 0x1801218D8 (--$_Insert_or_assign@AEBU-$com_ptr@UIApplicationView@@@winrt@@AEAV-$shared_ptr@VInteractionRecor.c)
 *     ?IsSnappedWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1801302F4 (-IsSnappedWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ??$make_shared@VInteractionRecord@SnapInteraction@@AEBU?$com_ptr@UIApplicationView@@@winrt@@@std@@YA?AV?$shared_ptr@VInteractionRecord@SnapInteraction@@@0@AEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x180159F38 (--$make_shared@VInteractionRecord@SnapInteraction@@AEBU-$com_ptr@UIApplicationView@@@winrt@@@std.c)
 *     ?IsSnapped@InteractionRecord@SnapInteraction@@QEAAX_N@Z @ 0x1801654C0 (-IsSnapped@InteractionRecord@SnapInteraction@@QEAAX_N@Z.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x180452808 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ?EnsureUpdateTimer@InteractionTracker@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805A0688 (-EnsureUpdateTimer@InteractionTracker@SnapInteraction@@AEAAXAEBV-$unique_any_t@V-$unique_storage.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SnapInteraction::InteractionTracker::OnViewFocused(RTL_SRWLOCK *a1, SnapLayoutHelpers **a2)
{
  bool IsSnappedWindow; // r15
  SnapInteraction::InteractionRecord *v5; // rdi
  volatile signed __int32 *Ptr; // rbx
  RTL_SRWLOCK *v7; // r15
  RTL_SRWLOCK *v8; // r12
  std::_Ref_count_base *v9; // r14
  std::_Ref_count_base *v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  SnapInteraction::InteractionRecord *v14; // [rsp+20h] [rbp-40h] BYREF
  std::_Ref_count_base *v15; // [rsp+28h] [rbp-38h]
  RTL_SRWLOCK *v16; // [rsp+30h] [rbp-30h]
  volatile signed __int32 *v17; // [rsp+38h] [rbp-28h]
  _BYTE v18[8]; // [rsp+40h] [rbp-20h] BYREF
  std::_Ref_count_base *v19; // [rsp+48h] [rbp-18h]
  _BYTE v20[16]; // [rsp+50h] [rbp-10h] BYREF
  char *v21; // [rsp+A0h] [rbp+40h] BYREF
  RTL_SRWLOCK *v22; // [rsp+A8h] [rbp+48h] BYREF
  char v23; // [rsp+B0h] [rbp+50h] BYREF

  IsSnappedWindow = SnapLayoutHelpers::IsSnappedWindow(*a2, (struct IApplicationView *)a2);
  AcquireSRWLockExclusive(a1 + 13);
  v22 = a1 + 13;
  SnapInteraction::InteractionTracker::FindRecord(a1, &v14, a2);
  v5 = v14;
  if ( !v14 )
  {
    v12 = std::make_shared<SnapInteraction::InteractionRecord,winrt::com_ptr<IApplicationView> const &>(v18, a2);
    std::shared_ptr<ViewEventRegistration>::operator=(&v14, v12);
    if ( v19 )
      std::_Ref_count_base::_Decref(v19);
    SnapInteraction::InteractionRecord::IsSnapped(v14, IsSnappedWindow);
    std::map<winrt::com_ptr<IApplicationView>,std::shared_ptr<SnapInteraction::InteractionRecord>>::_Insert_or_assign<winrt::com_ptr<IApplicationView> const &,std::shared_ptr<SnapInteraction::InteractionRecord> &>(
      &a1[11],
      v20,
      a2,
      &v14);
    v5 = v14;
  }
  AcquireSRWLockExclusive((PSRWLOCK)v5 + 5);
  v21 = (char *)v5 + 40;
  if ( *((_BYTE *)v5 + 9) != 1 )
  {
    *((_BYTE *)v5 + 9) = 1;
    if ( *((_BYTE *)v5 + 8) )
    {
      v13 = *(_QWORD *)std::chrono::steady_clock::now(&v23);
      if ( !*((_BYTE *)v5 + 24) )
        *((_BYTE *)v5 + 24) = 1;
      *((_QWORD *)v5 + 2) = v13;
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v21);
  if ( SnapInteraction::InteractionRecord::HasInteraction(v5) )
    SnapInteraction::InteractionTracker::EnsureUpdateTimer(a1);
  Ptr = (volatile signed __int32 *)a1[10].Ptr;
  if ( Ptr )
  {
    _InterlockedIncrement(Ptr + 2);
    Ptr = (volatile signed __int32 *)a1[10].Ptr;
    v5 = v14;
  }
  v7 = (RTL_SRWLOCK *)a1[9].Ptr;
  v8 = v7;
  v16 = v7;
  v17 = Ptr;
  v9 = v15;
  if ( v15 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
    v9 = v15;
    v5 = v14;
    v8 = v16;
  }
  a1[9].Ptr = v5;
  v10 = (std::_Ref_count_base *)a1[10].Ptr;
  a1[10].Ptr = v9;
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  if ( v7 && v7 != (RTL_SRWLOCK *)v5 )
    SnapInteraction::InteractionRecord::IsActive(v8, 0);
  if ( Ptr )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)Ptr);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  return wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v22);
}

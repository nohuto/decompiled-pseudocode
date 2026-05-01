/*
 * XREFs of ?OnViewRemoved@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x1800987E8
 * Callers:
 *     ?OnApplicationViewChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180098730 (-OnApplicationViewChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4APPLI.c)
 * Callees:
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Find_lower_bound@U?$com_ptr@UIApplicationView@@@winrt@@@?$_Tree@V?$_Tmap_traits@U?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@U?$less@U?$com_ptr@UIApplicationView@@@winrt@@@4@V?$allocator@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@std@@@1@AEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x1800988C0 (--$_Find_lower_bound@U-$com_ptr@UIApplicationView@@@winrt@@@-$_Tree@V-$_Tmap_traits@U-$com_ptr@U.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18014D9CC (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU-$com_ptr@UIApplicationView@@@winrt@@V-.c)
 */

void __fastcall SnapInteraction::InteractionTracker::OnViewRemoved(RTL_SRWLOCK *a1, _QWORD *a2)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 v5; // rbx
  PVOID Ptr; // rax
  __int64 v7; // rdi
  std::_Ref_count_base *v8; // rcx
  _BYTE v9[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  RTL_SRWLOCK *v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1 + 13;
  AcquireSRWLockExclusive(a1 + 13);
  v11 = v2;
  std::_Tree<std::_Tmap_traits<winrt::com_ptr<IApplicationView>,std::shared_ptr<SnapInteraction::InteractionRecord>,std::less<winrt::com_ptr<IApplicationView>>,std::allocator<std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>>,0>>::_Find_lower_bound<winrt::com_ptr<IApplicationView>>(
    &a1[11],
    v9,
    a2);
  v5 = v10;
  if ( !*(_BYTE *)(v10 + 25) && *a2 >= *(_QWORD *)(v10 + 32) && (PVOID)v10 != a1[11].Ptr )
  {
    Ptr = a1[9].Ptr;
    if ( Ptr && Ptr == *(PVOID *)(v10 + 40) )
      std::shared_ptr<PeoplePaneViewInfo>::reset(&a1[9].Ptr);
    v7 = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>>>::_Extract(
           &a1[11],
           v5);
    v8 = *(std::_Ref_count_base **)(v7 + 48);
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
    if ( *(_QWORD *)(v7 + 32) )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(v7 + 32));
    std::_Deallocate<16,0>(v7, 56LL);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v11);
}

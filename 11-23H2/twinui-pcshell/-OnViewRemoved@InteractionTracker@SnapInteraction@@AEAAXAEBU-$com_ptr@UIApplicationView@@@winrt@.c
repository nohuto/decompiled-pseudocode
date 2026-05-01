/*
 * XREFs of ?OnViewRemoved@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x18009D258
 * Callers:
 *     ?OnApplicationViewChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18009D1A0 (-OnApplicationViewChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4APPLI.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Find_lower_bound@U?$com_ptr@UIApplicationView@@@winrt@@@?$_Tree@V?$_Tmap_traits@U?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@U?$less@U?$com_ptr@UIApplicationView@@@winrt@@@4@V?$allocator@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@std@@@1@AEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x18009D344 (--$_Find_lower_bound@U-$com_ptr@UIApplicationView@@@winrt@@@-$_Tree@V-$_Tmap_traits@U-$com_ptr@U.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18009D394 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIApplicationView@@@WRL@Micros.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall SnapInteraction::InteractionTracker::OnViewRemoved(RTL_SRWLOCK *a1, _QWORD *a2)
{
  RTL_SRWLOCK *v2; // rdi
  __int64 v5; // rbx
  PVOID Ptr; // rax
  __int64 v7; // rsi
  std::_Ref_count_base *v8; // rcx
  _BYTE v9[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v2 = a1 + 13;
  AcquireSRWLockExclusive(a1 + 13);
  std::_Tree<std::_Tmap_traits<winrt::com_ptr<IApplicationView>,std::shared_ptr<SnapInteraction::InteractionRecord>,std::less<winrt::com_ptr<IApplicationView>>,std::allocator<std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>>,0>>::_Find_lower_bound<winrt::com_ptr<IApplicationView>>(
    &a1[11],
    v9);
  v5 = v10;
  if ( !*(_BYTE *)(v10 + 25) && *a2 >= *(_QWORD *)(v10 + 32) && (PVOID)v10 != a1[11].Ptr )
  {
    Ptr = a1[9].Ptr;
    if ( Ptr && Ptr == *(PVOID *)(v10 + 40) )
      std::shared_ptr<PeoplePaneViewInfo>::reset(&a1[9].Ptr);
    v7 = std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>::_Extract(
           &a1[11],
           v5);
    v8 = *(std::_Ref_count_base **)(v7 + 48);
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
    if ( *(_QWORD *)(v7 + 32) )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(v7 + 32));
    std::_Deallocate<16,0>(v7, 56LL);
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}

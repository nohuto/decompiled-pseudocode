/*
 * XREFs of ??1InteractionTracker@SnapInteraction@@UEAA@XZ @ 0x180591CA0
 * Callers:
 *     _CShellSnapComponent::CShellSnapComponent_::_1_::dtor$23 @ 0x18022220D (_CShellSnapComponent--CShellSnapComponent_--_1_--dtor$23.c)
 *     ??1CShellSnapComponent@@UEAA@XZ @ 0x180591A04 (--1CShellSnapComponent@@UEAA@XZ.c)
 *     ??_EInteractionTracker@SnapInteraction@@UEAAPEAXI@Z @ 0x180592344 (--_EInteractionTracker@SnapInteraction@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?subtract_reference@?$root_implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@impl@winrt@@IEAAIXZ @ 0x180026348 (-subtract_reference@-$root_implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundat.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@1@@Z @ 0x1805917C0 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBU-$com_ptr@UIApplicationView@@@winrt@@V-$s.c)
 */

void __fastcall SnapInteraction::InteractionTracker::~InteractionTracker(SnapInteraction::InteractionTracker *this)
{
  winrt::Windows::Foundation::IUnknown *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  v2 = (SnapInteraction::InteractionTracker *)((char *)this + 112);
  if ( *(_QWORD *)v2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v2);
  std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>,void *>>>(
    (__int64)this + 88,
    (__int64)this + 88,
    *(_QWORD *)(*((_QWORD *)this + 11) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 11), 0x38uLL);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 10);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  if ( *((_QWORD *)this + 7) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 7);
  if ( *((_QWORD *)this + 5) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 5);
  winrt::impl::root_implements<SnapInteraction::InteractionTracker,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IWindowSnappingEvents>::subtract_reference((__int64)this + 24);
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock, v4, v5, v6);
}

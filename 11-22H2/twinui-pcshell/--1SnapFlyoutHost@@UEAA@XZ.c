/*
 * XREFs of ??1SnapFlyoutHost@@UEAA@XZ @ 0x18065F4D8
 * Callers:
 *     ??_GSnapFlyoutHost@@UEAAPEAXI@Z @ 0x18065F9E0 (--_GSnapFlyoutHost@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?decrement_strong@?$weak_ref@$00$00@impl@winrt@@QEAAIXZ @ 0x1800D8D84 (-decrement_strong@-$weak_ref@$00$00@impl@winrt@@QEAAIXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1801917C4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18022183C (--1-$com_ptr_t@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@0@@Z @ 0x1802D7364 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@.c)
 *     ?unconditional_release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x18051D90C (-unconditional_release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@PEAX@1@@Z @ 0x18065E724 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapCompon.c)
 */

void __fastcall SnapFlyoutHost::~SnapFlyoutHost(SnapFlyoutHost *this)
{
  void *v2; // rdx
  char *v3; // rcx
  wil::details *v4; // rcx
  wil::details *v5; // rcx
  __int64 v6; // rcx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt

  wil::com_ptr_t<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>,wil::err_returncode_policy>((void **)this + 20);
  std::_Tree_val<std::_Tree_simple_types<std::pair<HMONITOR__ * const,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<HMONITOR__ * const,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>,void *>>>(
    (__int64)this + 144,
    (__int64)this + 144,
    *(__int64 **)(*((_QWORD *)this + 18) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 18), 0x30uLL);
  if ( *((_QWORD *)this + 14) )
    winrt::com_ptr<SnapFlyoutHost>::unconditional_release_ref((volatile signed __int64 **)this + 14);
  if ( *((_QWORD *)this + 13) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((SnapFlyoutHost *)((char *)this + 104));
  if ( *((_QWORD *)this + 12) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((SnapFlyoutHost *)((char *)this + 96));
  v3 = (char *)*((_QWORD *)this + 11);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v3);
  v4 = (wil::details *)*((_QWORD *)this + 10);
  if ( v4 )
    wil::details::CloseHandle(v4, v2);
  v5 = (wil::details *)*((_QWORD *)this + 9);
  if ( v5 )
    wil::details::CloseHandle(v5, v2);
  if ( *((_QWORD *)this + 8) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((SnapFlyoutHost *)((char *)this + 64));
  if ( *((_QWORD *)this + 7) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((SnapFlyoutHost *)((char *)this + 56));
  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>>(
      v6,
      *((_QWORD *)this + 4));
    std::_Deallocate<16,0>(
      *((void **)this + 3),
      (*((_QWORD *)this + 5) - *((_QWORD *)this + 3)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
  }
  v7 = *((_QWORD *)this + 1);
  while ( v7 >= 0 )
  {
    v8 = v7;
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 1, v7 - 1, v7);
    if ( v8 == v7 )
      goto LABEL_24;
  }
  winrt::impl::weak_ref<1,1>::decrement_strong((volatile signed __int32 *)(2 * v7));
LABEL_24:
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}

/*
 * XREFs of ??1?$_List_node_insert_op2@V?$allocator@U?$_List_node@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180679838
 * Callers:
 *     ??0?$list@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18067955C (--0-$list@U-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@win.c)
 *     _std::list_winrt::com_ptr_winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance__std::allocator_winrt::com_ptr_winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance_____::list_winrt::com_ptr_winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance__std::allocator_winrt::com_ptr_winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance______::_1_::dtor$6 @ 0x1806795FA (_std--list_winrt--com_ptr_winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFl.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801FA5AC (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 */

void __fastcall std::_List_node_insert_op2<std::allocator<std::_List_node<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>,void *>>>::~_List_node_insert_op2<std::allocator<std::_List_node<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>,void *>>>(
        __int64 a1)
{
  volatile __int64 *v1; // rbx
  volatile __int64 **v2; // rdi

  if ( *(_QWORD *)(a1 + 8) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) = 0LL;
    **(_QWORD **)(a1 + 16) = 0LL;
    v1 = *(volatile __int64 **)(a1 + 24);
    while ( v1 )
    {
      v2 = (volatile __int64 **)v1;
      v1 = (volatile __int64 *)*v1;
      if ( v2[2] )
        winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(v2 + 2);
      std::_Deallocate<16,0>(v2, 0x18uLL);
    }
  }
}

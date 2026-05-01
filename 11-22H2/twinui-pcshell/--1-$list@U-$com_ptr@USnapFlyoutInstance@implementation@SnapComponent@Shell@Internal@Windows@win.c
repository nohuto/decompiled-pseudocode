/*
 * XREFs of ??1?$list@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@QEAA@XZ @ 0x180679D74
 * Callers:
 *     _SnapFlyoutHost::HideAsync$_ResumeCoro$1_::_1_::dtor$3 @ 0x18022743B (_SnapFlyoutHost--HideAsync$_ResumeCoro$1_--_1_--dtor$3.c)
 *     _SnapFlyoutHost::ShutdownSnapFlyoutsAsync_::_1_::dtor$0 @ 0x180228ABD (_SnapFlyoutHost--ShutdownSnapFlyoutsAsync_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801FA5AC (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 */

void __fastcall std::list<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>>::~list<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>>(
        void **a1)
{
  void **v1; // rdx
  volatile __int64 **v3; // rbx
  volatile __int64 *v4; // rsi

  v1 = (void **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = (volatile __int64 **)*v1;
  if ( *v1 )
  {
    do
    {
      v4 = *v3;
      if ( v3[2] )
        winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(v3 + 2);
      std::_Deallocate<16,0>(v3, 0x18uLL);
      v3 = (volatile __int64 **)v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*a1, 0x18uLL);
}

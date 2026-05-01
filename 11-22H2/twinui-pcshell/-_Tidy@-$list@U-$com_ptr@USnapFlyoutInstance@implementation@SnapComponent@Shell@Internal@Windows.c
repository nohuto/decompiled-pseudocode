/*
 * XREFs of ?_Tidy@?$list@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@AEAAXXZ @ 0x18067D850
 * Callers:
 *     SnapFlyoutHost::HideAsync$_ResumeCoro$1 @ 0x1802270C0 (SnapFlyoutHost--HideAsync$_ResumeCoro$1.c)
 *     ?ShutdownSnapFlyoutsAsync@SnapFlyoutHost@@AEAA?AUfire_and_forget@winrt@@V?$list@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@@Z @ 0x180228A50 (-ShutdownSnapFlyoutsAsync@SnapFlyoutHost@@AEAA-AUfire_and_forget@winrt@@V-$list@U-$com_ptr@USnap.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801FA5AC (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 */

void __fastcall std::list<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>>::_Tidy(
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

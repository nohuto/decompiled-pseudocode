/*
 * XREFs of ??$_Destroy_range@V?$allocator@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@std@@@std@@YAXPEAU?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@QEAU12@AEAV?$allocator@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@0@@Z @ 0x1803F4A34
 * Callers:
 *     _std::vector_winrt::com_ptr_winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl__std::allocator_winrt::com_ptr_winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl_____::_Emplace_reallocate_winrt::com_ptr_winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl__&__::_1_::catch$0 @ 0x1803F4DE0 (_std--vector_winrt--com_ptr_winrt--Windows--Internal--GamingOverlay--implementation--GameBarWind.c)
 *     ??$_Uninitialized_move@PEAU?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@std@@@std@@YAPEAU?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@QEAU12@0PEAU12@AEAV?$allocator@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@0@@Z @ 0x1803F6678 (--$_Uninitialized_move@PEAU-$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Inte.c)
 *     ??1GamingOverlayExperienceManager@@EEAA@XZ @ 0x1803F98A8 (--1GamingOverlayExperienceManager@@EEAA@XZ.c)
 *     ?_Change_array@?$vector@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@std@@@std@@AEAAXQEAU?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@_K1@Z @ 0x180409968 (-_Change_array@-$vector@U-$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Intern.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801FA5AC (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<winrt::com_ptr<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>>>(
        volatile __int64 **a1,
        volatile __int64 **a2)
{
  volatile __int64 **v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      if ( *v3 )
        result = winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(v3);
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}

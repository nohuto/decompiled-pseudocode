/*
 * XREFs of ?SkipAnimationDelays@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800FB038
 * Callers:
 *     ?SkipAnimationDelays@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIRotationTransitionManager@Private@345@@impl@winrt@@UEAAHXZ @ 0x1800FAFE0 (-SkipAnimationDelays@-$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIRotat.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180040770 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?GetHandler@TransitionManager@implementation@Transitions@Udwm@winrt@@AEAA?AUITransitionHandler@345@W4ShellTransition@345@@Z @ 0x180040C14 (-GetHandler@TransitionManager@implementation@Transitions@Udwm@winrt@@AEAA-AUITransitionHandler@3.c)
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x180041E0C (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18006062C (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@N@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@@Z @ 0x1800F8C88 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@std@@@-$.c)
 *     ??$make@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@V?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@@winrt@@YA?AU?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@0@$$QEAV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@@Z @ 0x1800F9324 (--$make@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$less@Uhstring@winrt@@@std@@V-$al.c)
 *     ??0?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@QEAA@V?$initializer_list@U?$pair@$$CBUhstring@winrt@@N@std@@@1@@Z @ 0x1800F95A0 (--0-$map@Uhstring@winrt@@NU-$less@Uhstring@winrt@@@std@@V-$allocator@U-$pair@$$CBUhstring@winrt@.c)
 *     ?UpdateFloatProperties@?$consume_Udwm_Transitions_ITransitionHandler@UITransitionHandler@Transitions@Udwm@winrt@@@impl@winrt@@QEBAXAEBU?$map@Uhstring@winrt@@N@param@3@@Z @ 0x1800FB4A8 (-UpdateFloatProperties@-$consume_Udwm_Transitions_ITransitionHandler@UITransitionHandler@Transit.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall winrt::Udwm::Transitions::implementation::TransitionManager::SkipAnimationDelays(
        winrt::Udwm::Transitions::implementation::TransitionManager *this)
{
  struct winrt::impl::hstring_header *hstring_on_heap; // rcx
  __int64 *v2; // rax
  unsigned __int64 v3; // rbx
  void *v4[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v5[2]; // [rsp+30h] [rbp-30h] BYREF
  __m128i v6; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v7; // [rsp+50h] [rbp-10h] BYREF
  char v8; // [rsp+58h] [rbp-8h]
  void (__fastcall ***v9)(_QWORD, __int64 *, __int64 *); // [rsp+78h] [rbp+18h] BYREF
  unsigned __int64 v10; // [rsp+80h] [rbp+20h] BYREF

  winrt::Udwm::Transitions::implementation::TransitionManager::GetHandler(
    (__int64)this,
    (winrt::Windows::Foundation::IUnknown *)&v9,
    1);
  v10 = 0LL;
  if ( !winrt::Windows::Foundation::operator==(&v9, &v10) )
  {
    hstring_on_heap = (struct winrt::impl::hstring_header *)qword_180143220;
    if ( qword_180143220 )
    {
      if ( (*(_BYTE *)qword_180143220 & 1) != 0 )
        hstring_on_heap = winrt::impl::create_hstring_on_heap(
                            *(winrt::impl **)(qword_180143220 + 16),
                            (winrt::impl *)*(unsigned int *)(qword_180143220 + 4));
      else
        _InterlockedExchangeAdd((volatile signed __int32 *)(qword_180143220 + 24), 1u);
    }
    v5[0] = hstring_on_heap;
    *(double *)&v5[1] = DOUBLE_1_0;
    v6.m128i_i64[0] = (__int64)v5;
    v6.m128i_i64[1] = (__int64)&v6;
    v2 = std::map<winrt::hstring,double>::map<winrt::hstring,double>((__int64 *)v4, &v6);
    winrt::make<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,std::map<winrt::hstring,double>>(
      &v10,
      (__int64)v2);
    v8 = 0;
    v3 = v10;
    v7 = v10;
    winrt::impl::consume_Udwm_Transitions_ITransitionHandler<winrt::Udwm::Transitions::ITransitionHandler>::UpdateFloatProperties(
      &v9,
      &v7);
    if ( v3 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
    std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,double>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,double>,void *>>>(
      (__int64)v4,
      (__int64)v4,
      *((_QWORD *)v4[0] + 1));
    std::_Deallocate<16,0>(v4[0], 0x30uLL);
    `eh vector destructor iterator'(
      (char *)v5,
      16LL,
      1LL,
      (void (*)(void *))std::pair<winrt::hstring const,double>::~pair<winrt::hstring const,double>);
  }
  if ( v9 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
}

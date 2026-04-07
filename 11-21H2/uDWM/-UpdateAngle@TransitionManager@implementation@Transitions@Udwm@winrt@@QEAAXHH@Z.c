/*
 * XREFs of ?UpdateAngle@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x1800FB2B8
 * Callers:
 *     ?UpdateAngle@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIRotationTransitionManager@Private@345@@impl@winrt@@UEAAHHH@Z @ 0x1800FB260 (-UpdateAngle@-$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIRotationTrans.c)
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

// Hidden C++ exception states: #wind=6
void __fastcall winrt::Udwm::Transitions::implementation::TransitionManager::UpdateAngle(
        winrt::Udwm::Transitions::implementation::TransitionManager *this,
        int a2,
        int a3)
{
  struct winrt::impl::hstring_header *hstring_on_heap; // rcx
  struct winrt::impl::hstring_header *v6; // rax
  __int64 *v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // [rsp+28h] [rbp-19h] BYREF
  void *v10[3]; // [rsp+30h] [rbp-11h] BYREF
  __m128i v11; // [rsp+48h] [rbp+7h] BYREF
  unsigned __int64 v12; // [rsp+58h] [rbp+17h] BYREF
  char v13; // [rsp+60h] [rbp+1Fh]
  _QWORD v14[4]; // [rsp+68h] [rbp+27h] BYREF
  char v15; // [rsp+88h] [rbp+47h] BYREF
  void (__fastcall ***v16)(_QWORD, __int64 *, __int64 *); // [rsp+C0h] [rbp+7Fh] BYREF

  winrt::Udwm::Transitions::implementation::TransitionManager::GetHandler(
    (__int64)this,
    (winrt::Windows::Foundation::IUnknown *)&v16,
    1);
  v9 = 0LL;
  if ( !winrt::Windows::Foundation::operator==(&v16, &v9) )
  {
    hstring_on_heap = (struct winrt::impl::hstring_header *)qword_180143228;
    if ( qword_180143228 )
    {
      if ( (*(_BYTE *)qword_180143228 & 1) != 0 )
        hstring_on_heap = winrt::impl::create_hstring_on_heap(
                            *(winrt::impl **)(qword_180143228 + 16),
                            (winrt::impl *)*(unsigned int *)(qword_180143228 + 4));
      else
        _InterlockedExchangeAdd((volatile signed __int32 *)(qword_180143228 + 24), 1u);
    }
    v14[0] = hstring_on_heap;
    *(double *)&v14[1] = (float)a2;
    v6 = (struct winrt::impl::hstring_header *)qword_180143230;
    if ( qword_180143230 )
    {
      if ( (*(_BYTE *)qword_180143230 & 1) != 0 )
        v6 = winrt::impl::create_hstring_on_heap(
               *(winrt::impl **)(qword_180143230 + 16),
               (winrt::impl *)*(unsigned int *)(qword_180143230 + 4));
      else
        _InterlockedExchangeAdd((volatile signed __int32 *)(qword_180143230 + 24), 1u);
    }
    v14[2] = v6;
    *(double *)&v14[3] = (float)a3;
    v11.m128i_i64[0] = (__int64)v14;
    v11.m128i_i64[1] = (__int64)&v15;
    v7 = std::map<winrt::hstring,double>::map<winrt::hstring,double>((__int64 *)v10, &v11);
    winrt::make<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,std::map<winrt::hstring,double>>(
      &v9,
      (__int64)v7);
    v13 = 0;
    v8 = v9;
    v12 = v9;
    winrt::impl::consume_Udwm_Transitions_ITransitionHandler<winrt::Udwm::Transitions::ITransitionHandler>::UpdateFloatProperties(
      &v16,
      &v12);
    if ( v8 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
    std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,double>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,double>,void *>>>(
      (__int64)v10,
      (__int64)v10,
      *((_QWORD *)v10[0] + 1));
    std::_Deallocate<16,0>(v10[0], 0x30uLL);
    `eh vector destructor iterator'(
      (char *)v14,
      16LL,
      2LL,
      (void (*)(void *))std::pair<winrt::hstring const,double>::~pair<winrt::hstring const,double>);
  }
  if ( v16 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
}

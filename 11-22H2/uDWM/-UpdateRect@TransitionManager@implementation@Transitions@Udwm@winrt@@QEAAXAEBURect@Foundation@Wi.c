/*
 * XREFs of ?UpdateRect@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@5@W4ShellTransition@345@@Z @ 0x1800FF4A8
 * Callers:
 *     ?UpdateRect@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UITransitionManager@345@@impl@winrt@@UEAAHURect@Foundation@Windows@3@H@Z @ 0x1800FF450 (-UpdateRect@-$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UITransitionMana.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002FA10 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?GetHandler@TransitionManager@implementation@Transitions@Udwm@winrt@@AEAA?AUITransitionHandler@345@W4ShellTransition@345@@Z @ 0x1800406CC (-GetHandler@TransitionManager@implementation@Transitions@Udwm@winrt@@AEAA-AUITransitionHandler@3.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800558D4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18005CA2C (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x18009E3E8 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@N@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@@Z @ 0x1800FBCFC (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@std@@@-$.c)
 *     ??$make@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@V?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@@winrt@@YA?A_P$$QEAV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@@Z @ 0x1800FC658 (--$make@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$less@Uhstring@winrt@@@std@@V-$al.c)
 *     ??0?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@QEAA@V?$initializer_list@U?$pair@$$CBUhstring@winrt@@N@std@@@1@@Z @ 0x1800FC9E0 (--0-$map@Uhstring@winrt@@NU-$less@Uhstring@winrt@@@std@@V-$allocator@U-$pair@$$CBUhstring@winrt@.c)
 *     ?UpdateFloatProperties@?$consume_Udwm_Transitions_ITransitionHandler@UITransitionHandler@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBU?$map@Uhstring@winrt@@N@param@3@@Z @ 0x1800FF408 (-UpdateFloatProperties@-$consume_Udwm_Transitions_ITransitionHandler@UITransitionHandler@Transit.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall winrt::Udwm::Transitions::implementation::TransitionManager::UpdateRect(
        unsigned __int64 a1,
        float *a2,
        int a3)
{
  struct winrt::impl::hstring_header *hstring_on_heap; // rcx
  struct winrt::impl::hstring_header *v5; // rcx
  float v6; // xmm6_4
  struct winrt::impl::hstring_header *v7; // rcx
  float v8; // xmm6_4
  struct winrt::impl::hstring_header *v9; // rax
  __int64 *v10; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // [rsp+28h] [rbp-49h] BYREF
  unsigned __int64 v13; // [rsp+30h] [rbp-41h] BYREF
  void *v14[2]; // [rsp+38h] [rbp-39h] BYREF
  __m128i v15; // [rsp+48h] [rbp-29h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp-19h] BYREF
  char v17; // [rsp+60h] [rbp-11h]
  _QWORD v18[8]; // [rsp+68h] [rbp-9h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+37h] BYREF

  winrt::Udwm::Transitions::implementation::TransitionManager::GetHandler(
    a1,
    (winrt::Windows::Foundation::IUnknown *)&v12,
    a3);
  if ( v12 )
  {
    hstring_on_heap = (struct winrt::impl::hstring_header *)qword_180148958;
    if ( qword_180148958 )
    {
      if ( (*(_BYTE *)qword_180148958 & 1) != 0 )
        hstring_on_heap = winrt::impl::create_hstring_on_heap(
                            *(winrt::impl **)(qword_180148958 + 16),
                            (winrt::impl *)*(unsigned int *)(qword_180148958 + 4));
      else
        _InterlockedExchangeAdd((volatile signed __int32 *)(qword_180148958 + 24), 1u);
    }
    v18[0] = hstring_on_heap;
    *(double *)&v18[1] = *a2;
    v5 = (struct winrt::impl::hstring_header *)qword_180148950;
    if ( qword_180148950 )
    {
      if ( (*(_BYTE *)qword_180148950 & 1) != 0 )
        v5 = winrt::impl::create_hstring_on_heap(
               *(winrt::impl **)(qword_180148950 + 16),
               (winrt::impl *)*(unsigned int *)(qword_180148950 + 4));
      else
        _InterlockedExchangeAdd((volatile signed __int32 *)(qword_180148950 + 24), 1u);
    }
    v18[2] = v5;
    *(double *)&v18[3] = a2[1];
    v6 = a2[2] + *a2;
    v7 = (struct winrt::impl::hstring_header *)qword_180148968;
    if ( qword_180148968 )
    {
      if ( (*(_BYTE *)qword_180148968 & 1) != 0 )
        v7 = winrt::impl::create_hstring_on_heap(
               *(winrt::impl **)(qword_180148968 + 16),
               (winrt::impl *)*(unsigned int *)(qword_180148968 + 4));
      else
        _InterlockedExchangeAdd((volatile signed __int32 *)(qword_180148968 + 24), 1u);
    }
    v18[4] = v7;
    *(double *)&v18[5] = v6;
    v8 = a2[3] + a2[1];
    v9 = (struct winrt::impl::hstring_header *)qword_180148960;
    if ( qword_180148960 )
    {
      if ( (*(_BYTE *)qword_180148960 & 1) != 0 )
        v9 = winrt::impl::create_hstring_on_heap(
               *(winrt::impl **)(qword_180148960 + 16),
               (winrt::impl *)*(unsigned int *)(qword_180148960 + 4));
      else
        _InterlockedExchangeAdd((volatile signed __int32 *)(qword_180148960 + 24), 1u);
    }
    v18[6] = v9;
    *(double *)&v18[7] = v8;
    v15.m128i_i64[0] = (__int64)v18;
    v15.m128i_i64[1] = (__int64)&v19;
    v10 = std::map<winrt::hstring,double>::map<winrt::hstring,double>((__int64 *)v14, &v15);
    winrt::make<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,std::map<winrt::hstring,double>>(
      &v13,
      (__int64)v10);
    v17 = 0;
    v11 = v13;
    v16 = v13;
    winrt::impl::consume_Udwm_Transitions_ITransitionHandler<winrt::Udwm::Transitions::ITransitionHandler>::UpdateFloatProperties(
      &v12,
      &v16);
    if ( v11 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v13);
    std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,double>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,double>,void *>>>(
      (__int64)v14,
      (__int64)v14,
      *((void ***)v14[0] + 1));
    std::_Deallocate<16,0>(v14[0], 0x30uLL);
    `eh vector destructor iterator'(
      (char *)v18,
      16LL,
      4LL,
      (void (*)(void *))std::pair<winrt::hstring const,double>::~pair<winrt::hstring const,double>);
  }
  if ( v12 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
}

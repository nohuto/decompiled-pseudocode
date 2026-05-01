/*
 * XREFs of ??1TabTipAdapterPolicy@KeyboardHosting@@UEAA@XZ @ 0x180196E0C
 * Callers:
 *     ??_GTabTipAdapterPolicy@KeyboardHosting@@UEAAPEAXI@Z @ 0x180196DD0 (--_GTabTipAdapterPolicy@KeyboardHosting@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VPositionAndSizeOptionsProvider@KeyboardHosting@@@WRL@Microsoft@@IEAAKXZ @ 0x1801423A0 (-InternalRelease@-$ComPtr@VPositionAndSizeOptionsProvider@KeyboardHosting@@@WRL@Microsoft@@IEAAK.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@1@@Z @ 0x180196F68 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@1@@Z @ 0x180196FAC (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@1@@Z @ 0x180196FE8 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIURelativePositionOnScreen@KeyboardHosting.c)
 */

void __fastcall KeyboardHosting::TabTipAdapterPolicy::~TabTipAdapterPolicy(KeyboardHosting::TabTipAdapterPolicy *this)
{
  std::_Ref_count_base *v2; // rcx
  _QWORD **v3; // rcx
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 88);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  std::wstring::_Tidy_deallocate((__int64)this + 664);
  if ( *((_QWORD *)this + 77) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 616));
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Windows::Foundation::Size>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,Windows::Foundation::Size>,void *>>>(
    (char *)this + 576,
    (char *)this + 576,
    *(_QWORD *)(*((_QWORD *)this + 72) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 72), 0x28uLL);
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>,void *>>>(
    (char *)this + 560,
    (char *)this + 560,
    *(_QWORD *)(*((_QWORD *)this + 70) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 70), 0x30uLL);
  std::_Deallocate<16,0>(
    *((void **)this + 62),
    (*((_QWORD *)this + 63) - *((_QWORD *)this + 62)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  v3 = (_QWORD **)*((_QWORD *)this + 60);
  *v3[1] = 0LL;
  v4 = *v3;
  if ( v4 )
  {
    do
    {
      v5 = (_QWORD *)*v4;
      std::_Deallocate<16,0>(v4, 0x58uLL);
      v4 = v5;
    }
    while ( v5 );
  }
  std::_Deallocate<16,0>(*((void **)this + 60), 0x58uLL);
  Microsoft::WRL::ComPtr<KeyboardHosting::PositionAndSizeOptionsProvider>::InternalRelease((volatile int **)this + 28);
  Microsoft::WRL::ComPtr<KeyboardHosting::PositionAndSizeOptionsProvider>::InternalRelease((volatile int **)this + 27);
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,std::wstring>,void *>>>(
    (char *)this + 88,
    (char *)this + 88,
    *(_QWORD *)(*((_QWORD *)this + 11) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 11), 0x48uLL);
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,std::wstring>,void *>>>(
    (char *)this + 72,
    (char *)this + 72,
    *(_QWORD *)(*((_QWORD *)this + 9) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 9), 0x48uLL);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::IIterable<Windows::Internal::Shell::Chaining::IChainLink *>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::IIterable<Windows::Internal::Shell::Chaining::IChainLink *>,Microsoft::WRL::FtmBase>((__int64)this);
}

/*
 * XREFs of ??1TabTipAdapterPolicy@KeyboardHosting@@UEAA@XZ @ 0x18046F544
 * Callers:
 *     ??_GTabTipAdapterPolicy@KeyboardHosting@@UEAAPEAXI@Z @ 0x18046FC50 (--_GTabTipAdapterPolicy@KeyboardHosting@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VPositionAndSizeOptionsProvider@KeyboardHosting@@@WRL@Microsoft@@IEAAKXZ @ 0x18017B88C (-InternalRelease@-$ComPtr@VPositionAndSizeOptionsProvider@KeyboardHosting@@@WRL@Microsoft@@IEAAK.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBI_N@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBI_N@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBI_N@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180459F40 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBI_N@std@@PEAX@std@@@std@@@-$_List_node@.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@1@@Z @ 0x18046DEFC (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIURelativePositionOnScreen@KeyboardHosting.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@1@@Z @ 0x18046DF58 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@1@@Z @ 0x18046DFB4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18046E028 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX.c)
 */

void __fastcall KeyboardHosting::TabTipAdapterPolicy::~TabTipAdapterPolicy(KeyboardHosting::TabTipAdapterPolicy *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  std::wstring::_Tidy_deallocate((__int64)this + 624);
  std::_Deallocate<16,0>(
    *((void **)this + 69),
    (*((_QWORD *)this + 70) - *((_QWORD *)this + 69)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  std::_List_node<std::pair<unsigned int const,bool>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,bool>,void *>>>(
    v2,
    *((_QWORD ***)this + 67));
  std::_Deallocate<16,0>(*((void **)this + 67), 0x18uLL);
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Windows::Foundation::Size>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,Windows::Foundation::Size>,void *>>>(
    (__int64)this + 480,
    (__int64)this + 480,
    *(_QWORD *)(*((_QWORD *)this + 60) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 60), 0x28uLL);
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>,void *>>>(
    (__int64)this + 464,
    (__int64)this + 464,
    *(_QWORD *)(*((_QWORD *)this + 58) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 58), 0x30uLL);
  std::_Deallocate<16,0>(
    *((void **)this + 50),
    (*((_QWORD *)this + 51) - *((_QWORD *)this + 50)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  std::_List_node<std::pair<unsigned int const,KeyboardHosting::ViewState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,KeyboardHosting::ViewState>,void *>>>(
    v3,
    *((_QWORD ***)this + 48));
  std::_Deallocate<16,0>(*((void **)this + 48), 0x58uLL);
  Microsoft::WRL::ComPtr<KeyboardHosting::PositionAndSizeOptionsProvider>::InternalRelease((__int64 *)this + 28);
  Microsoft::WRL::ComPtr<KeyboardHosting::PositionAndSizeOptionsProvider>::InternalRelease((__int64 *)this + 27);
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,std::wstring>,void *>>>(
    (__int64)this + 88,
    (__int64)this + 88,
    *(_QWORD *)(*((_QWORD *)this + 11) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 11), 0x48uLL);
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,std::wstring>,void *>>>(
    (__int64)this + 72,
    (__int64)this + 72,
    *(_QWORD *)(*((_QWORD *)this + 9) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 9), 0x48uLL);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::Collections::IIterable<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::Collections::IIterable<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Microsoft::WRL::FtmBase>((__int64)this);
}

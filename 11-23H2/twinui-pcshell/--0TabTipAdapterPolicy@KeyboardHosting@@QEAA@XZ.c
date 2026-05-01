/*
 * XREFs of ??0TabTipAdapterPolicy@KeyboardHosting@@QEAA@XZ @ 0x1800A9794
 * Callers:
 *     ??$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@AEAUITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@Details@WRL@Microsoft@@YAJPEAPEAVTabTipAdapterPolicy@KeyboardHosting@@AEAUITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x1800AAC04 (--$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@AEAUITapInvokeTelemetryDataProvid.c)
 *     ??$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@$$T@Details@WRL@Microsoft@@YAJPEAPEAVTabTipAdapterPolicy@KeyboardHosting@@$$QEA$$T@Z @ 0x180508A4C (--$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@$$T@Details@WRL@Microsoft@@YAJPEA.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@2@@Z @ 0x180092148 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x180093A9C (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1800C28A0 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800C9020 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
KeyboardHosting::TabTipAdapterPolicy *__fastcall KeyboardHosting::TabTipAdapterPolicy::TabTipAdapterPolicy(
        KeyboardHosting::TabTipAdapterPolicy *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 size_of; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  Microsoft::WRL::FtmBase::FtmBase((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 24));
  *((_QWORD *)this + 8) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy,Windows::Internal::Shell::KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy'};
  *((_QWORD *)this + 1) = &KeyboardHosting::TabTipAdapterPolicy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::Shell::KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy,Windows::Internal::Shell::KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Internal::Shell::KeyboardHosting::IDesktopKeyboardHostingPolicy'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy,Windows::Internal::Shell::KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &KeyboardHosting::TabTipAdapterPolicy::`vftable'{for `Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy'};
  *((_QWORD *)this + 1) = &KeyboardHosting::TabTipAdapterPolicy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::Shell::KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &KeyboardHosting::TabTipAdapterPolicy::`vftable'{for `Windows::Internal::Shell::KeyboardHosting::IDesktopKeyboardHostingPolicy'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy,Windows::Internal::Shell::KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  v2 = operator new(0x48uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *((_QWORD *)this + 9) = v2;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  v3 = operator new(0x48uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *((_QWORD *)this + 11) = v3;
  *((_DWORD *)this + 26) = 1000;
  *((_DWORD *)this + 27) = 100000;
  *((_QWORD *)this + 14) = L"LastTipXPositionOnScreen";
  *((_QWORD *)this + 15) = L"LastTipYPositionOnScreen";
  *((_QWORD *)this + 16) = L"LastTipXPositionIsPositive";
  *((_QWORD *)this + 17) = L"LastTipYPositionIsPositive";
  memset_0((char *)this + 144, 0, 0x40uLL);
  *((_DWORD *)this + 52) = 0;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_OWORD *)this + 15) = 0LL;
  *((_OWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 68) = 100;
  *(_OWORD *)((char *)this + 276) = 0LL;
  *(_OWORD *)((char *)this + 292) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_OWORD *)this + 20) = 0LL;
  *((_OWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 88) = 100;
  *(_OWORD *)((char *)this + 356) = 0LL;
  *(_OWORD *)((char *)this + 372) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_OWORD *)this + 25) = 0LL;
  *((_OWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 108) = 100;
  *(_OWORD *)((char *)this + 436) = 0LL;
  *(_OWORD *)((char *)this + 452) = 0LL;
  *((_DWORD *)this + 118) = 0;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  v4 = operator new(0x58uLL);
  *v4 = v4;
  v4[1] = v4;
  *((_QWORD *)this + 60) = v4;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 7LL;
  *((_QWORD *)this + 66) = 8LL;
  *((_DWORD *)this + 118) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>>>>>>::_Assign_grow(
    (unsigned __int64 **)this + 62,
    0x10uLL,
    *((_QWORD *)this + 60));
  *((_QWORD *)this + 67) = 0LL;
  *((_BYTE *)this + 544) = 0;
  *(_QWORD *)((char *)this + 548) = 0LL;
  *((_BYTE *)this + 556) = 0;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  size_of = std::_Get_size_of_n<48>(1uLL);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *(_QWORD *)v6 = v6;
  *(_QWORD *)(v6 + 8) = v6;
  *(_QWORD *)(v6 + 16) = v6;
  *(_WORD *)(v6 + 24) = 257;
  *((_QWORD *)this + 70) = v6;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  v7 = std::_Get_size_of_n<40>(1LL);
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(v7);
  *(_QWORD *)v8 = v8;
  *(_QWORD *)(v8 + 8) = v8;
  *(_QWORD *)(v8 + 16) = v8;
  *(_WORD *)(v8 + 24) = 257;
  *((_QWORD *)this + 72) = v8;
  *((_DWORD *)this + 148) = -1;
  *(_QWORD *)((char *)this + 596) = 0LL;
  *((_DWORD *)this + 151) = 0;
  *((_WORD *)this + 304) = 1;
  *((_DWORD *)this + 153) = 1;
  *((_QWORD *)this + 77) = 0LL;
  *((_WORD *)this + 312) = 0;
  *(_QWORD *)((char *)this + 628) = 0LL;
  *((_BYTE *)this + 636) = 0;
  *((_OWORD *)this + 40) = 0LL;
  *((_DWORD *)this + 164) = 0;
  *((_WORD *)this + 330) = 256;
  *((_QWORD *)this + 83) = 0LL;
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 86) = 7LL;
  *((_WORD *)this + 332) = 0;
  *((_QWORD *)this + 87) = 0LL;
  *((_QWORD *)this + 88) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  return this;
}

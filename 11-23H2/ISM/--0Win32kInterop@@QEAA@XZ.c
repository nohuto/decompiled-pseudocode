/*
 * XREFs of ??0Win32kInterop@@QEAA@XZ @ 0x1800379B0
 * Callers:
 *     ?Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z @ 0x18003ACA0 (-Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@1@AEBV?$allocator@U?$pair@$$CBKV?$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@@std@@@1@@Z @ 0x180034B9C (--0-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@V-$_Uha.c)
 *     ??0?$_Hash@V?$_Umap_traits@KV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@1@AEBV?$allocator@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@1@@Z @ 0x180034C14 (--0-$_Hash@V-$_Umap_traits@KV-$unordered_map@KUTargetingInfo@Win32kInterop@@U-$hash@K@std@@U-$eq.c)
 *     ??0?$_Hash@V?$_Umap_traits@KPEAVInputInfoValidator@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@3@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@1@AEBV?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@1@@Z @ 0x180034D90 (--0-$_Hash@V-$_Umap_traits@KPEAVInputInfoValidator@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_t.c)
 *     ??0?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@QEAA@XZ @ 0x180034F08 (--0-$unordered_map@KUTargetingInfo@Win32kInterop@@U-$hash@K@std@@U-$equal_to@K@4@V-$allocator@U-.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@std@@@std@@@2@@Z @ 0x18003C734 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18005764C (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=18
Win32kInterop *__fastcall Win32kInterop::Win32kInterop(Win32kInterop *this)
{
  char *v2; // rbx
  _QWORD *v3; // rax
  char *v5; // [rsp+58h] [rbp+10h] BYREF

  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = &Win32kInterop::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &Win32kInterop::`vftable'{for `IInputBuffer'};
  *((_QWORD *)this + 2) = &Win32kInterop::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v2 = (char *)this + 64;
  v5 = (char *)this + 64;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v3 = v3;
  v3[1] = v3;
  *((_QWORD *)v2 + 1) = v3;
  *((_QWORD *)v2 + 3) = 0LL;
  *((_QWORD *)v2 + 4) = 0LL;
  *((_QWORD *)v2 + 5) = 0LL;
  *((_QWORD *)v2 + 6) = 7LL;
  *((_QWORD *)v2 + 7) = 8LL;
  *(_DWORD *)v2 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,std::unordered_map<unsigned long,Win32kInterop::TargetingInfo>>>>>>>::_Assign_grow(
    v2 + 24,
    16LL,
    *((_QWORD *)v2 + 1));
  v5 = (char *)this + 128;
  LODWORD(v5) = 0;
  std::_Hash<std::_Umap_traits<unsigned long,InputInfoValidator *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputInfoValidator *>>,0>>::_Hash<std::_Umap_traits<unsigned long,InputInfoValidator *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputInfoValidator *>>,0>>(
    (__int64)this + 128,
    &v5);
  *((_BYTE *)this + 192) = 1;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  std::unordered_map<unsigned long,Win32kInterop::TargetingInfo>::unordered_map<unsigned long,Win32kInterop::TargetingInfo>((__int64)this + 216);
  *((_QWORD *)this + 35) = 0LL;
  v5 = (char *)this + 288;
  LODWORD(v5) = 0;
  std::_Hash<std::_Umap_traits<unsigned long,std::unordered_map<unsigned long,Win32kInterop::TargetingInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unordered_map<unsigned long,Win32kInterop::TargetingInfo>>>,0>>::_Hash<std::_Umap_traits<unsigned long,std::unordered_map<unsigned long,Win32kInterop::TargetingInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unordered_map<unsigned long,Win32kInterop::TargetingInfo>>>,0>>(
    (__int64)this + 288,
    &v5);
  v5 = (char *)this + 352;
  LODWORD(v5) = 0;
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IContextualProcessorBufferTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IContextualProcessorBufferTarget>>>,0>>::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IContextualProcessorBufferTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IContextualProcessorBufferTarget>>>,0>>(
    (__int64)this + 352,
    &v5);
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  `eh vector constructor iterator'(
    (char *)this + 496,
    8uLL,
    8uLL,
    (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
    Microsoft::WRL::ComPtr<ICursorBroker>::~ComPtr<ICursorBroker>);
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 86) = "CMK:MITInputInterop";
  *((_QWORD *)this + 88) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  *((_QWORD *)this + 90) = 0LL;
  *((_QWORD *)this + 103) = 0LL;
  *((_QWORD *)this + 104) = "CMK:MTInputInterop";
  *((_QWORD *)this + 106) = 0LL;
  *((_QWORD *)this + 107) = 0LL;
  *((_QWORD *)this + 108) = 0LL;
  *((_QWORD *)this + 121) = 0LL;
  *((_QWORD *)this + 122) = "CMK:KbdInput";
  *((_QWORD *)this + 124) = 0LL;
  *((_QWORD *)this + 125) = 0LL;
  *((_QWORD *)this + 126) = 0LL;
  *((_QWORD *)this + 139) = 0LL;
  *((_QWORD *)this + 140) = "CMK:AccessibilityTimer";
  *((_QWORD *)this + 142) = 0LL;
  *((_QWORD *)this + 143) = 0LL;
  *((_QWORD *)this + 144) = 0LL;
  *((_QWORD *)this + 157) = 0LL;
  *((_QWORD *)this + 158) = "CMK:LLKbdInput";
  *((_QWORD *)this + 160) = 0LL;
  *((_QWORD *)this + 161) = 0LL;
  *((_QWORD *)this + 162) = 0LL;
  *((_QWORD *)this + 175) = 0LL;
  *((_QWORD *)this + 176) = "CMK:HotKeyRegistration";
  *((_QWORD *)this + 178) = 0LL;
  *((_QWORD *)this + 179) = 0LL;
  *((_QWORD *)this + 180) = 0LL;
  *((_QWORD *)this + 193) = 0LL;
  *((_QWORD *)this + 194) = "CMK:PnpDeviceNotification";
  *((_QWORD *)this + 196) = 0LL;
  *((_QWORD *)this + 197) = 0LL;
  *((_QWORD *)this + 198) = 0LL;
  *((_QWORD *)this + 211) = 0LL;
  *((_QWORD *)this + 212) = "CMK:MouseInput";
  *((_QWORD *)this + 214) = 0LL;
  *((_QWORD *)this + 215) = 0LL;
  *((_QWORD *)this + 216) = 0LL;
  *((_QWORD *)this + 229) = 0LL;
  *((_QWORD *)this + 230) = "CMK:VPTPInterop";
  *((_QWORD *)this + 232) = 0LL;
  *((_QWORD *)this + 233) = 0LL;
  *((_QWORD *)this + 234) = 0LL;
  *((_QWORD *)this + 247) = 0LL;
  *((_QWORD *)this + 248) = "CMK:InputStreamEnded";
  *((_QWORD *)this + 250) = 0LL;
  *((_QWORD *)this + 251) = 0LL;
  *((_QWORD *)this + 252) = 0LL;
  *((_QWORD *)this + 265) = 0LL;
  *((_QWORD *)this + 266) = "CMK:InputDesktopChanged";
  return this;
}

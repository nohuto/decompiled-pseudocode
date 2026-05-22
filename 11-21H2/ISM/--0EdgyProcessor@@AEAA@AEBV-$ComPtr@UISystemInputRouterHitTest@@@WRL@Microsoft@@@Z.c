/*
 * XREFs of ??0EdgyProcessor@@AEAA@AEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@@Z @ 0x180148168
 * Callers:
 *     ?Create@EdgyProcessor@@SA?AV?$ComPtr@VEdgyProcessor@@@WRL@Microsoft@@AEBV?$ComPtr@UISystemInputRouterHitTest@@@34@@Z @ 0x180148DAC (-Create@EdgyProcessor@@SA-AV-$ComPtr@VEdgyProcessor@@@WRL@Microsoft@@AEBV-$ComPtr@UISystemInputR.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180014574 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x18003B4AC (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x18008C80C (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_18008C80C.c)
 *     ??0?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@QEAA@XZ @ 0x1800DDD38 (--0-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@K@2@@std@@QEAA@XZ.c)
 *     ??0?$unordered_map@K_KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBK_K@std@@@2@@std@@QEAA@XZ @ 0x18013D0AC (--0-$unordered_map@K_KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@U-$pair@$$CBK_K@std@@@2@@std@@.c)
 *     ??0?$unordered_map@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x18013D0DC (--0-$unordered_map@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@U-$hash@K@std@@U-$equal_to@K.c)
 *     ??0?$_Hash@V?$_Umap_traits@KUEdgyDragMessageInfo@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@1@AEBV?$allocator@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@@1@@Z @ 0x180148038 (--0-$_Hash@V-$_Umap_traits@KUEdgyDragMessageInfo@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ??0?$_Hash@V?$_Umap_traits@KUEdgyNotificationMessageInfo@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUEdgyNotificationMessageInfo@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@1@AEBV?$allocator@U?$pair@$$CBKUEdgyNotificationMessageInfo@EdgyProcessor@@@std@@@1@@Z @ 0x1801480D0 (--0-$_Hash@V-$_Umap_traits@KUEdgyNotificationMessageInfo@EdgyProcessor@@V-$_Uhash_compare@KU-$ha.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall EdgyProcessor::EdgyProcessor(__int64 a1, _QWORD *a2)
{
  _DWORD *v4; // rbx
  size_t size_of; // rax
  _QWORD *v6; // rax
  int v7; // eax
  const char *v8; // r9
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)(a1 + 8) = &RefCountedObject::`vftable';
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)a1 = &EdgyProcessor::`vftable'{for `IContextualProcessor'};
  *(_QWORD *)(a1 + 8) = &EdgyProcessor::`vftable'{for `RefCountedObject'};
  v4 = (_DWORD *)(a1 + 24);
  v15 = a1 + 24;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v6 = v6;
  v6[1] = v6;
  *(_QWORD *)(a1 + 32) = v6;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 7LL;
  *(_QWORD *)(a1 + 80) = 8LL;
  *v4 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    a1 + 48,
    0x10uLL,
    *(_QWORD *)(a1 + 32));
  std::unordered_map<unsigned long,unsigned __int64>::unordered_map<unsigned long,unsigned __int64>(a1 + 88);
  std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>>::unordered_map<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>>(a1 + 152);
  std::unordered_map<unsigned long,unsigned __int64>::unordered_map<unsigned long,unsigned __int64>(a1 + 216);
  std::unordered_set<unsigned long>::unordered_set<unsigned long>(a1 + 280);
  *(_QWORD *)(a1 + 344) = *a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)(a1 + 344));
  HIDWORD(v15) = (unsigned __int64)(a1 + 352) >> 32;
  LODWORD(v15) = 0;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::EdgyDragMessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::EdgyDragMessageInfo>>,0>>::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::EdgyDragMessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::EdgyDragMessageInfo>>,0>>(
    a1 + 352,
    &v15);
  HIDWORD(v15) = (unsigned __int64)(a1 + 416) >> 32;
  LODWORD(v15) = 0;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::EdgyNotificationMessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::EdgyNotificationMessageInfo>>,0>>::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::EdgyNotificationMessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::EdgyNotificationMessageInfo>>,0>>(
    a1 + 416,
    &v15);
  std::unordered_map<unsigned long,unsigned __int64>::unordered_map<unsigned long,unsigned __int64>(a1 + 480);
  *(_QWORD *)(a1 + 544) = 0LL;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)(a1 + 544));
  v7 = CoreUICreate(a1 + 544);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x17,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\system\\lib\\edgyprocessor.cpp",
      (const char *)(unsigned int)v7,
      v13);
  if ( !*(_QWORD *)(a1 + 544) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      24LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\system\\lib\\edgyprocessor.cpp",
      v8);
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 29) + 8LL) + 72LL))(*((_QWORD *)BamoServerConnection + 29) + 8LL);
  if ( *(_QWORD *)(v10 + 64) != a1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v11 = *(_QWORD *)(v10 + 64);
    *(_QWORD *)(v10 + 64) = a1;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return a1;
}

/*
 * XREFs of ??$emplace@AEAEV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@?$_Hash@V?$_Umap_traits@GV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAE$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@1@@Z @ 0x1801A8E94
 * Callers:
 *     ?ExtractFeatureValue@HapticInterface@@AEAAJEGGGPEAH@Z @ 0x1801A93C0 (-ExtractFeatureValue@HapticInterface@@AEAAJEGGGPEAH@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000E920 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Check_max_size@?$_Hash@V?$_Umap_traits@KUPointerState@InputInfoValidator@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@4@$0A@@std@@@std@@IEBAXXZ @ 0x180098080 (-_Check_max_size@-$_Hash@V-$_Umap_traits@KUPointerState@InputInfoValidator@@V-$_Uhash_compare@KU.c)
 *     ?_Check_rehash_required_1@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA_NXZ @ 0x1800980B4 (-_Check_rehash_required_1@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@KUUsageList@ConsumerControlDeviceCollection@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x18009815C (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@KUUsageList@ConsumerControlDeviceCollection@@V-.c)
 *     ??$_Find_last@G@?$_Hash@V?$_Umap_traits@GV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@PEAX@std@@@1@AEBG_K@Z @ 0x180194800 (--$_Find_last@G@-$_Hash@V-$_Umap_traits@GV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801A91EC (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBGV-$unique_ptr@$$BY0A@EU-$def.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@GV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x1801AA0D4 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@GV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@s.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned short,std::unique_ptr<unsigned char [0]>,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>>,0>>::emplace<unsigned char &,std::unique_ptr<unsigned char [0]>>(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 *a3,
        __int64 *a4)
{
  _QWORD *v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 appended; // rbx
  _QWORD *v13; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v14; // [rsp+28h] [rbp-30h]
  __int64 v15[5]; // [rsp+30h] [rbp-28h] BYREF

  v13 = a1 + 1;
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  v14 = v8;
  *((_WORD *)v8 + 8) = *a3;
  v9 = *a4;
  *a4 = 0LL;
  v8[3] = v9;
  appended = std::_Fnv1a_append_bytes(v10, (const unsigned __int8 *const)v8 + 16, 2uLL);
  std::_Hash<std::_Umap_traits<unsigned short,std::unique_ptr<unsigned char [0]>,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>>,0>>::_Find_last<unsigned short>(
    a1,
    v15,
    (_WORD *)v8 + 8,
    appended);
  if ( v15[1] )
  {
    *(_QWORD *)a2 = v15[1];
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    std::_Hash<std::_Umap_traits<unsigned long,InputInfoValidator::PointerState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputInfoValidator::PointerState>>,0>>::_Check_max_size((__int64)a1);
    if ( std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Check_rehash_required_1((__int64)a1) )
    {
      std::_Hash<std::_Umap_traits<unsigned short,std::unique_ptr<unsigned char [0]>,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>>,0>>::_Rehash_for_1(a1);
      *(_OWORD *)v15 = *(_OWORD *)std::_Hash<std::_Umap_traits<unsigned short,std::unique_ptr<unsigned char [0]>,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>>,0>>::_Find_last<unsigned short>(
                                    a1,
                                    v15,
                                    (_WORD *)v8 + 8,
                                    appended);
    }
    v14 = 0LL;
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<unsigned long,ConsumerControlDeviceCollection::UsageList,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>>,0>>::_Insert_new_node_before(
                      a1,
                      appended,
                      v15[0],
                      v8);
    *(_BYTE *)(a2 + 8) = 1;
  }
  std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>,void *>>>(&v13);
  return a2;
}

/*
 * XREFs of ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18047FFE8
 * Callers:
 *     ?VerifyInputAppRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAIPEAE@Z @ 0x1804831E0 (-VerifyInputAppRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAIPEAE@Z.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180483510 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18013FF60 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAAPEAU?$_List_node@_KPEAX@2@_KQEAU32@1@Z @ 0x18022BD44 (-_Insert_new_node_before@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_.c)
 *     ??$_Find_last@I@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@IPEAX@std@@@1@AEBI_K@Z @ 0x180459EE8 (--$_Find_last@I@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x180483D68 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::_Try_emplace<unsigned int const &,>(
        float *a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  __int64 appended; // rsi
  _DWORD *v7; // rbp
  __int64 v8; // rcx
  float v9; // xmm0_4
  __int64 v10; // rcx
  float v11; // xmm1_4
  __int64 v12; // rax
  __int128 v14; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v15; // [rsp+30h] [rbp-28h] BYREF
  _DWORD *v16; // [rsp+38h] [rbp-20h]

  appended = std::_Fnv1a_append_bytes((__int64)a1, a3, 4uLL);
  std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::_Find_last<unsigned int>(
    a1,
    &v14,
    a3,
    appended);
  if ( *((_QWORD *)&v14 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v14 + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( *((_QWORD *)a1 + 2) == 0x2E8BA2E8BA2E8BALL )
      std::_Xlength_error("unordered_map/set too long");
    v15 = a1 + 2;
    v16 = 0LL;
    v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x58uLL);
    v16 = v7;
    v7[4] = *(_DWORD *)a3;
    memset_0(v7 + 5, 0, 0x44uLL);
    v8 = *((_QWORD *)a1 + 2) + 1LL;
    if ( v8 < 0 )
      v9 = (float)(v8 & 1 | (unsigned int)((unsigned __int64)v8 >> 1))
         + (float)(v8 & 1 | (unsigned int)((unsigned __int64)v8 >> 1));
    else
      v9 = (float)(int)v8;
    v10 = *((_QWORD *)a1 + 7);
    if ( v10 < 0 )
    {
      v12 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v10 >> 1);
      v11 = (float)(int)v12 + (float)(int)v12;
    }
    else
    {
      v11 = (float)(int)v10;
    }
    if ( (float)(v9 / v11) > *a1 )
    {
      std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::_Rehash_for_1(a1);
      v14 = *(_OWORD *)std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::_Find_last<unsigned int>(
                         a1,
                         &v15,
                         v7 + 4,
                         appended);
    }
    *(_QWORD *)a2 = std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::_Insert_new_node_before(
                      a1,
                      appended,
                      v14,
                      v7);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}

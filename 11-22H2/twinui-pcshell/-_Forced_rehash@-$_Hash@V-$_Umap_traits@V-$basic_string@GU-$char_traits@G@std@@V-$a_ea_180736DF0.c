/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unordered_map@W4CloudPCState@Shell@Internal@Windows@winrt@@IU?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@7@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unordered_map@W4CloudPCState@Shell@Internal@Windows@winrt@@IU?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@7@@2@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x180736DF0
 * Callers:
 *     ??$_Try_emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unordered_map@W4CloudPCState@Shell@Internal@Windows@winrt@@IU?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@7@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unordered_map@W4CloudPCState@Shell@Internal@Windows@winrt@@IU?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@7@@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unordered_map@W4CloudPCState@Shell@Internal@Windows@winrt@@IU?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@7@@2@@std@@PEAX@std@@_N@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180735550 (--$_Try_emplace@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$_ea_180735550.c)
 * Callees:
 *     ??$?RV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V01@@?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0@Z @ 0x180074078 (--$-RV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V01@@-$_Uhash_compare@V-$basi.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@2@@Z @ 0x180092148 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18014DC58 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 */

char __fastcall std::_Hash<std::_Umap_traits<std::wstring,std::unordered_map<enum winrt::Windows::Internal::Shell::CloudPCState,unsigned int>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unordered_map<enum winrt::Windows::Internal::Shell::CloudPCState,unsigned int>>>,0>>::_Forced_rehash(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // rbp
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 appended; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rbx
  _QWORD *v9; // rdi
  const unsigned __int8 *v10; // rdx
  __int64 v11; // r11
  __int64 v12; // r12
  __int64 v13; // r14
  _QWORD *v14; // rsi
  _QWORD *v15; // r8
  _QWORD *v16; // rdx
  _QWORD *v17; // r13
  __int64 v18; // r8
  _QWORD *v19; // rdx
  _QWORD *v20; // rdx

  _BitScanReverse64(&v2, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v2 )
    std::_Xlength_error("invalid hash bucket count");
  v3 = qword_18098F228;
  _BitScanReverse64(&v4, (a2 - 1) | 1);
  v5 = 1LL << ((unsigned __int8)v4 + 1);
  LOBYTE(appended) = (unsigned __int8)std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>>>>>>::_Assign_grow(
                                        (unsigned __int64 **)&qword_18098F238,
                                        2 * v5,
                                        qword_18098F228);
  qword_18098F258 = v5;
  qword_18098F250 = v5 - 1;
  v8 = *(_QWORD **)qword_18098F228;
  v9 = *(_QWORD **)qword_18098F228;
  while ( v8 != (_QWORD *)v3 )
  {
    v9 = (_QWORD *)*v9;
    v10 = (const unsigned __int8 *)(v8 + 2);
    if ( v8[5] >= 8uLL )
      v10 = (const unsigned __int8 *)v8[2];
    appended = std::_Fnv1a_append_bytes((__int64)v7, v10, 2LL * v8[4]);
    v12 = qword_18098F238;
    v13 = 2 * (v11 & appended);
    if ( *(_QWORD *)(qword_18098F238 + 16 * (v11 & appended)) == v3 )
    {
      *(_QWORD *)(qword_18098F238 + 16 * (v11 & appended)) = v8;
LABEL_9:
      *(_QWORD *)(v12 + 8 * v13 + 8) = v8;
      goto LABEL_18;
    }
    v14 = *(_QWORD **)(qword_18098F238 + 16 * (v11 & appended) + 8);
    LOBYTE(appended) = std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()<std::wstring,std::wstring>(
                         (__int64)v7,
                         v8 + 2,
                         v14 + 2);
    if ( !(_BYTE)appended )
    {
      v15 = (_QWORD *)*v14;
      if ( (_QWORD *)*v14 != v8 )
      {
        v16 = (_QWORD *)v8[1];
        *v16 = v9;
        v7 = (_QWORD *)v9[1];
        *v7 = v15;
        appended = v15[1];
        *(_QWORD *)appended = v8;
        v15[1] = v7;
        v9[1] = v16;
        v8[1] = appended;
      }
      goto LABEL_9;
    }
    v17 = v14;
    while ( *(_QWORD **)(v12 + 8 * v13) != v17 )
    {
      v14 = (_QWORD *)v14[1];
      v17 = v14;
      if ( !std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()<std::wstring,std::wstring>(
              (__int64)v7,
              v8 + 2,
              v14 + 2) )
      {
        v18 = *v14;
        v19 = (_QWORD *)v8[1];
        *v19 = v9;
        v7 = (_QWORD *)v9[1];
        *v7 = v18;
        appended = *(_QWORD *)(v18 + 8);
        *(_QWORD *)appended = v8;
        *(_QWORD *)(v18 + 8) = v7;
        v9[1] = v19;
        v8[1] = appended;
        goto LABEL_18;
      }
    }
    v20 = (_QWORD *)v8[1];
    *v20 = v9;
    v7 = (_QWORD *)v9[1];
    *v7 = v14;
    appended = v14[1];
    *(_QWORD *)appended = v8;
    v14[1] = v7;
    v9[1] = v20;
    v8[1] = appended;
    *(_QWORD *)(v12 + 8 * v13) = v8;
LABEL_18:
    v8 = v9;
  }
  return appended;
}

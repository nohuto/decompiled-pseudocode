/*
 * XREFs of ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x180008FA0
 * Callers:
 *     ?OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z @ 0x180012230 (-OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z.c)
 *     ?AreProcessIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x18008A37C (-AreProcessIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II.c)
 *     ?IsProcessIDInSameCompositeAppAsView@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x18008B334 (-IsProcessIDInSameCompositeAppAsView@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ??$_Find_last@I@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@1@AEBI_K@Z @ 0x180080FF0 (--$_Find_last@I@-$_Hash@V-$_Umap_traits@IUContactData@PointerInputMediator@@V-$_Uhash_compare@IU.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x1800829B0 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@KPEAUDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,std::unordered_set<unsigned __int64>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::unordered_set<unsigned __int64>>>,0>>::_Try_emplace<unsigned int const &,>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 v6; // rsi
  unsigned __int64 i; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r13
  char *v11; // r15
  char *v12; // rdi
  _QWORD *v13; // rax
  unsigned __int64 v14; // rbx
  unsigned __int64 *v15; // rdi
  unsigned __int64 *v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  float v19; // xmm0_4
  __int64 v20; // rcx
  float v21; // xmm1_4
  _QWORD *v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  __int128 v29; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v30; // [rsp+70h] [rbp+8h]

  v6 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v6 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ (unsigned __int64)v6);
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_QWORD *)(v8 + 16 * (v6 & *(_QWORD *)(a1 + 48)) + 8);
  v10 = *(_QWORD *)(a1 + 8);
  if ( v9 == v10 )
  {
LABEL_4:
    if ( *(_QWORD *)(a1 + 16) == 0x2E8BA2E8BA2E8BALL )
      std::_Xlength_error("unordered_map/set too long");
    *(_QWORD *)&v29 = a1 + 8;
    v11 = (char *)operator new(0x58uLL);
    *((_QWORD *)&v29 + 1) = v11;
    v12 = v11 + 16;
    *((_DWORD *)v11 + 4) = *a3;
    *((_DWORD *)v11 + 6) = 0;
    *((_QWORD *)v11 + 4) = 0LL;
    *((_QWORD *)v11 + 5) = 0LL;
    v13 = operator new(0x18uLL);
    *v13 = v13;
    v13[1] = v13;
    *((_QWORD *)v11 + 4) = v13;
    *((_QWORD *)v11 + 6) = 0LL;
    *((_QWORD *)v11 + 7) = 0LL;
    *((_QWORD *)v11 + 8) = 0LL;
    *((_QWORD *)v11 + 9) = 7LL;
    *((_QWORD *)v11 + 10) = 8LL;
    *((_DWORD *)v11 + 6) = 1065353216;
    v14 = *((_QWORD *)v11 + 4);
    v30 = *((__int64 *)v11 + 7) >> 3;
    if ( v30 >= 0x10 )
    {
      v28 = (unsigned __int64)(*((_QWORD *)v11 + 7) + 7LL) >> 3;
      if ( !v28 )
      {
LABEL_11:
        v17 = *(_QWORD *)(a1 + 16);
        v18 = v17 + 1;
        if ( v17 + 1 < 0 )
          v19 = (float)(int)(v18 & 1 | (v18 >> 1)) + (float)(int)(v18 & 1 | (v18 >> 1));
        else
          v19 = (float)(int)v18;
        v20 = *(_QWORD *)(a1 + 56);
        if ( v20 < 0 )
        {
          v27 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v20 >> 1);
          v21 = (float)(int)v27 + (float)(int)v27;
        }
        else
        {
          v21 = (float)(int)v20;
        }
        if ( (float)(v19 / v21) > *(float *)a1 )
        {
          std::_Hash<std::_Umap_traits<unsigned long,DeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DeviceInfo *>>,0>>::_Rehash_for_1(a1);
          v29 = *(_OWORD *)std::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>::_Find_last<unsigned int>(
                             a1,
                             &v29,
                             v12,
                             v6);
          v17 = *(_QWORD *)(a1 + 16);
          v10 = v29;
        }
        v22 = *(_QWORD **)(v10 + 8);
        *(_QWORD *)(a1 + 16) = v17 + 1;
        *(_QWORD *)v11 = v10;
        *((_QWORD *)v11 + 1) = v22;
        *v22 = v11;
        *(_QWORD *)(v10 + 8) = v11;
        v23 = *(_QWORD *)(a1 + 24);
        v24 = 2 * (v6 & *(_QWORD *)(a1 + 48));
        v25 = *(_QWORD *)(v23 + 16 * (v6 & *(_QWORD *)(a1 + 48)));
        if ( v25 == *(_QWORD *)(a1 + 8) )
        {
          *(_QWORD *)(v23 + 16 * (v6 & *(_QWORD *)(a1 + 48))) = v11;
        }
        else
        {
          if ( v25 == v10 )
          {
            *(_QWORD *)(v23 + 16 * (v6 & *(_QWORD *)(a1 + 48))) = v11;
            goto LABEL_20;
          }
          if ( *(_QWORD **)(v23 + 16 * (v6 & *(_QWORD *)(a1 + 48)) + 8) != v22 )
            goto LABEL_20;
        }
        *(_QWORD *)(v23 + 8 * v24 + 8) = v11;
LABEL_20:
        *(_QWORD *)a2 = v11;
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      memset64(0LL, v14, v28);
    }
    else
    {
      v15 = (unsigned __int64 *)operator new(0x80uLL);
      if ( v30 )
        std::_Deallocate<16,0>(*((_QWORD *)v11 + 6), 8 * v30);
      *((_QWORD *)v11 + 6) = v15;
      v16 = v15 + 16;
      *((_QWORD *)v11 + 7) = v15 + 16;
      *((_QWORD *)v11 + 8) = v15 + 16;
      do
        *v15++ = v14;
      while ( v15 != v16 );
    }
    v12 = v11 + 16;
    goto LABEL_11;
  }
  while ( *a3 != *(_DWORD *)(v9 + 16) )
  {
    if ( v9 == *(_QWORD *)(v8 + 16 * (v6 & *(_QWORD *)(a1 + 48))) )
    {
      v10 = v9;
      goto LABEL_4;
    }
    v9 = *(_QWORD *)(v9 + 8);
  }
  *(_QWORD *)a2 = v9;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}

/*
 * XREFs of ??$_Emplace@AEAKAEAUDisplayRegionInfo@@@?$_Tree@V?$_Tmap_traits@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@std@@_N@1@AEAKAEAUDisplayRegionInfo@@@Z @ 0x180109DDC
 * Callers:
 *     _lambda_16e39da7052e4c67737ceb9c18ac8be9_::operator() @ 0x180109928 (_lambda_16e39da7052e4c67737ceb9c18ac8be9_--operator().c)
 * Callees:
 *     ??$?0AEAKAEAUDisplayRegionInfo@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@1@AEAKAEAUDisplayRegionInfo@@@Z @ 0x180109EC4 (--$-0AEAKAEAUDisplayRegionInfo@@@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBKUDisp.c)
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tmap_traits@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@std@@@1@AEBK@Z @ 0x18010A048 (--$_Find_lower_bound@K@-$_Tree@V-$_Tmap_traits@KUDisplayRegionInfo@@U-$less@K@std@@V-$allocator@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x1801B81D8 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$ComPtr@UIObjectCollection@@@WRL@Micr.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@2@@Z @ 0x1801B8228 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180340C88 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned long,DisplayRegionInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,DisplayRegionInfo>>,0>>::_Emplace<unsigned long &,DisplayRegionInfo &>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 lower; // rax
  _DWORD *v6; // r10
  __int64 v7; // r11
  __int128 v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rbx
  _QWORD *v11; // r10
  _QWORD *v12; // rax
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 *v17; // rdx
  __int64 v18; // rcx
  _BYTE v19[8]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v20; // [rsp+38h] [rbp-30h]
  __int128 v21; // [rsp+48h] [rbp-20h]
  __int64 v22; // [rsp+58h] [rbp-10h]

  lower = std::_Tree<std::_Tmap_traits<unsigned long,DisplayRegionInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,DisplayRegionInfo>>,0>>::_Find_lower_bound<unsigned long>(
            a1,
            v19,
            a3);
  v8 = *(_OWORD *)lower;
  v22 = *(_QWORD *)(lower + 16);
  v21 = v8;
  if ( !*(_BYTE *)(v22 + 25) && *v6 >= *(_DWORD *)(v22 + 28) )
  {
    *(_QWORD *)a2 = v22;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  if ( a1[1] == 0x3FFFFFFFFFFFFFFLL )
    std::_Throw_tree_length_error();
  v9 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,DisplayRegionInfo>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,DisplayRegionInfo>,void *>>>(
         (unsigned int)v19,
         (_DWORD)a1,
         *a1,
         (_DWORD)v6,
         v7);
  v10 = *(_QWORD *)(v9 + 8);
  *(_QWORD *)(v9 + 8) = 0LL;
  if ( v20 )
    std::_Deallocate<16,0>(v20, 64LL);
  ++a1[1];
  v11 = (_QWORD *)*a1;
  v12 = (_QWORD *)v21;
  *(_QWORD *)(v10 + 8) = v21;
  if ( v12 == v11 )
  {
    *v11 = v10;
    v11[1] = v10;
    v11[2] = v10;
    *(_BYTE *)(v10 + 24) = 1;
    goto LABEL_8;
  }
  if ( DWORD2(v21) )
  {
    *v12 = v10;
    if ( v12 == (_QWORD *)*v11 )
      *v11 = v10;
  }
  else
  {
    v12[2] = v10;
    if ( v12 == (_QWORD *)v11[2] )
      v11[2] = v10;
  }
  v14 = *(_QWORD *)(v10 + 8);
  v15 = v10;
  while ( !*(_BYTE *)(v14 + 24) )
  {
    v16 = *(_QWORD *)(v15 + 8);
    v17 = *(__int64 **)(v16 + 8);
    v18 = *v17;
    if ( v16 == *v17 )
    {
      v18 = v17[2];
      if ( !*(_BYTE *)(v18 + 24) )
        goto LABEL_30;
      if ( v15 == *(_QWORD *)(v16 + 16) )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(a1);
      *(_BYTE *)(*(_QWORD *)(v15 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
        a1,
        *(_QWORD *)(*(_QWORD *)(v15 + 8) + 8LL));
    }
    else
    {
      if ( !*(_BYTE *)(v18 + 24) )
      {
LABEL_30:
        *(_BYTE *)(v16 + 24) = 1;
        *(_BYTE *)(v18 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 8LL) + 24LL) = 0;
        v15 = *(_QWORD *)(*(_QWORD *)(v15 + 8) + 8LL);
        goto LABEL_27;
      }
      if ( v15 == *(_QWORD *)v16 )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
          a1,
          *(_QWORD *)(v15 + 8));
      *(_BYTE *)(*(_QWORD *)(v15 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(a1);
    }
LABEL_27:
    v14 = *(_QWORD *)(v15 + 8);
  }
  *(_BYTE *)(v11[1] + 24LL) = 1;
LABEL_8:
  *(_QWORD *)a2 = v10;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}

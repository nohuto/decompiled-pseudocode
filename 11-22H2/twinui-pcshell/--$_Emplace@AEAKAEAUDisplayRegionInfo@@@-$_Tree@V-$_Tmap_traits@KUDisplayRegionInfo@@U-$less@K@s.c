/*
 * XREFs of ??$_Emplace@AEAKAEAUDisplayRegionInfo@@@?$_Tree@V?$_Tmap_traits@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@std@@_N@1@AEAKAEAUDisplayRegionInfo@@@Z @ 0x18008F518
 * Callers:
 *     _lambda_16e39da7052e4c67737ceb9c18ac8be9_::operator() @ 0x18008F614 (_lambda_16e39da7052e4c67737ceb9c18ac8be9_--operator().c)
 * Callees:
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tmap_traits@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@std@@@1@AEBK@Z @ 0x18008FABC (--$_Find_lower_bound@K@-$_Tree@V-$_Tmap_traits@KUDisplayRegionInfo@@U-$less@K@std@@V-$allocator@.c)
 *     ??$?0AEAKAEAUDisplayRegionInfo@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@1@AEAKAEAUDisplayRegionInfo@@@Z @ 0x18008FB74 (--$-0AEAKAEAUDisplayRegionInfo@@@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBKUDisp.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x1801F02CC (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$ComPtr@UIObjectCollection@@@WRL@Micr.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@2@@Z @ 0x1801F0340 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1803DCE94 (-_Throw_tree_length_error@std@@YAXXZ.c)
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
  __int64 v10; // r8
  __int64 v11; // rbx
  _QWORD *v12; // r10
  _QWORD *v13; // rax
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 *v18; // rdx
  __int64 v19; // rcx
  _BYTE v20[8]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v21; // [rsp+38h] [rbp-30h]
  __int128 v22; // [rsp+48h] [rbp-20h]
  __int64 v23; // [rsp+58h] [rbp-10h]

  lower = std::_Tree<std::_Tmap_traits<unsigned long,DisplayRegionInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,DisplayRegionInfo>>,0>>::_Find_lower_bound<unsigned long>(
            a1,
            v20,
            a3);
  v8 = *(_OWORD *)lower;
  v23 = *(_QWORD *)(lower + 16);
  v22 = v8;
  if ( !*(_BYTE *)(v23 + 25) && *v6 >= *(_DWORD *)(v23 + 28) )
  {
    *(_QWORD *)a2 = v23;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  if ( a1[1] == 0x3FFFFFFFFFFFFFFLL )
    std::_Throw_tree_length_error();
  v9 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,DisplayRegionInfo>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,DisplayRegionInfo>,void *>>>(
         (unsigned int)v20,
         (_DWORD)a1,
         *a1,
         (_DWORD)v6,
         v7);
  v11 = *(_QWORD *)(v9 + 8);
  *(_QWORD *)(v9 + 8) = 0LL;
  if ( v21 )
    std::_Deallocate<16,0>(v21, 64LL);
  ++a1[1];
  v12 = (_QWORD *)*a1;
  v13 = (_QWORD *)v22;
  *(_QWORD *)(v11 + 8) = v22;
  if ( v13 == v12 )
  {
    *v12 = v11;
    v12[1] = v11;
    v12[2] = v11;
    *(_BYTE *)(v11 + 24) = 1;
    goto LABEL_7;
  }
  if ( DWORD2(v22) )
  {
    *v13 = v11;
    if ( v13 == (_QWORD *)*v12 )
      *v12 = v11;
  }
  else
  {
    v13[2] = v11;
    if ( v13 == (_QWORD *)v12[2] )
      v12[2] = v11;
  }
  v15 = *(_QWORD *)(v11 + 8);
  v16 = v11;
  while ( !*(_BYTE *)(v15 + 24) )
  {
    v17 = *(_QWORD *)(v16 + 8);
    v18 = *(__int64 **)(v17 + 8);
    v19 = *v18;
    if ( v17 == *v18 )
    {
      v19 = v18[2];
      if ( !*(_BYTE *)(v19 + 24) )
        goto LABEL_30;
      if ( v16 == *(_QWORD *)(v17 + 16) )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(
          a1,
          *(_QWORD *)(v16 + 8));
      *(_BYTE *)(*(_QWORD *)(v16 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
        a1,
        *(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL),
        v10,
        v16);
    }
    else
    {
      if ( !*(_BYTE *)(v19 + 24) )
      {
LABEL_30:
        *(_BYTE *)(v17 + 24) = 1;
        *(_BYTE *)(v19 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL) + 24LL) = 0;
        v16 = *(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL);
        goto LABEL_27;
      }
      if ( v16 == *(_QWORD *)v17 )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
          a1,
          *(_QWORD *)(v16 + 8),
          v10,
          *(_QWORD *)(v16 + 8));
      *(_BYTE *)(*(_QWORD *)(v16 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(
        a1,
        *(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL));
    }
LABEL_27:
    v15 = *(_QWORD *)(v16 + 8);
  }
  *(_BYTE *)(v12[1] + 24LL) = 1;
LABEL_7:
  *(_QWORD *)a2 = v11;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}

/*
 * XREFs of ??$_Try_emplace@AEBK$$V@?$map@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180028E48
 * Callers:
 *     ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x180028DCC (-AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 * Callees:
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180028D48 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@1@V-$tuple@$$V@1@@-$_Tree_temp_node@V-$allocat.c)
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@@1@AEBK@Z @ 0x180029154 (--$_Find_lower_bound@K@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@Z @ 0x1800FB3D4 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@Z @ 0x1800FB4AC (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$function@$$A6AX_N@Z@std@@@std@@@std.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800FB500 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

__int64 __fastcall std::map<unsigned long,unsigned long>::_Try_emplace<unsigned long const &,>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // r9
  unsigned int *v6; // r10
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rbx
  _QWORD *v11; // r10
  _QWORD *v12; // rax
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // [rsp+30h] [rbp-38h] BYREF
  __int64 v20; // [rsp+38h] [rbp-30h]
  _QWORD *v21; // [rsp+40h] [rbp-28h] BYREF
  int v22; // [rsp+48h] [rbp-20h]
  __int64 v23; // [rsp+50h] [rbp-18h]
  unsigned int *v24; // [rsp+88h] [rbp+20h] BYREF

  std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Find_lower_bound<unsigned long>(
    a1,
    &v21,
    a3);
  if ( !*(_BYTE *)(v23 + 25) && *v6 >= *(_DWORD *)(v23 + 28) )
  {
    *(_QWORD *)a2 = v23;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  if ( a1[1] == 0x666666666666666LL )
    std::_Throw_tree_length_error();
  v7 = *a1;
  v24 = v6;
  v8 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *>>>(
         &v19,
         (__int64)a1,
         v7,
         v5,
         &v24);
  v10 = v8[1];
  v8[1] = 0LL;
  if ( v20 )
    std::_Deallocate<16,0>(v20, 40LL);
  ++a1[1];
  v11 = (_QWORD *)*a1;
  v12 = v21;
  *(_QWORD *)(v10 + 8) = v21;
  if ( v12 == v11 )
  {
    *v11 = v10;
    v11[1] = v10;
    v11[2] = v10;
    *(_BYTE *)(v10 + 24) = 1;
    goto LABEL_7;
  }
  if ( v22 )
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
        std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>::_Lrotate(
          a1,
          *(_QWORD *)(v15 + 8));
      *(_BYTE *)(*(_QWORD *)(v15 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>::_Rrotate(
        a1,
        *(_QWORD *)(*(_QWORD *)(v15 + 8) + 8LL),
        v9,
        v15);
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
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>::_Rrotate(
          a1,
          *(_QWORD *)(v15 + 8),
          v9,
          *(_QWORD *)(v15 + 8));
      *(_BYTE *)(*(_QWORD *)(v15 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>::_Lrotate(
        a1,
        *(_QWORD *)(*(_QWORD *)(v15 + 8) + 8LL));
    }
LABEL_27:
    v14 = *(_QWORD *)(v15 + 8);
  }
  *(_BYTE *)(v11[1] + 24LL) = 1;
LABEL_7:
  *(_QWORD *)a2 = v10;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}

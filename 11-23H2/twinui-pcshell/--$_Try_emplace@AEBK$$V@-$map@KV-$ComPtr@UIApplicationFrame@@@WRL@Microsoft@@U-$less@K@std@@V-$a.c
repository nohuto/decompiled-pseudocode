/*
 * XREFs of ??$_Try_emplace@AEBK$$V@?$map@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180030038
 * Callers:
 *     _lambda_fd32c1b568db692c2b9aba787b88bf18_::operator() @ 0x18003011C (_lambda_fd32c1b568db692c2b9aba787b88bf18_--operator().c)
 *     _lambda_be0384f6ee63f5b395346d60b9e3dbc6_::operator() @ 0x180074404 (_lambda_be0384f6ee63f5b395346d60b9e3dbc6_--operator().c)
 *     _lambda_69f1d5bd17a52b1cfb35c35a1e227214_::operator() @ 0x1805A1828 (_lambda_69f1d5bd17a52b1cfb35c35a1e227214_--operator().c)
 * Callees:
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK@Z @ 0x180030274 (--$_Find_lower_bound@K@-$_Tree@V-$_Tmap_traits@KV-$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U-.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800302C4 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@1@V-$tuple@$$V@1@@-$_Tree_temp_node@V-$allocat.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180031164 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBKV-$ComPtr@UIApplicationFrame@@@WRL@.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x1801F02CC (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$ComPtr@UIObjectCollection@@@WRL@Micr.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@2@@Z @ 0x1801F0340 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1803DCE94 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

__int64 __fastcall std::map<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>>::_Try_emplace<unsigned long const &,>(
        _QWORD *a1,
        __int64 a2)
{
  int v4; // r9d
  _DWORD *v5; // r10
  _QWORD *v7; // r8
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r8
  _QWORD *v11; // r10
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 *v16; // rdx
  __int64 v17; // rcx
  _BYTE v18[16]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD *v19; // [rsp+40h] [rbp-28h] BYREF
  int v20; // [rsp+48h] [rbp-20h]
  __int64 v21; // [rsp+50h] [rbp-18h]
  _DWORD *v22; // [rsp+88h] [rbp+20h] BYREF

  std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Find_lower_bound<unsigned long>(
    a1,
    &v19);
  if ( !*(_BYTE *)(v21 + 25) && *v5 >= *(_DWORD *)(v21 + 32) )
  {
    *(_QWORD *)a2 = v21;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  if ( a1[1] == 0x555555555555555LL )
    std::_Throw_tree_length_error();
  v7 = (_QWORD *)*a1;
  v22 = v5;
  v8 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *>>>(
         (unsigned int)v18,
         (_DWORD)a1,
         (_DWORD)v7,
         v4,
         (__int64)&v22);
  v9 = *(_QWORD *)(v8 + 8);
  *(_QWORD *)(v8 + 8) = 0LL;
  std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *>>>(v18);
  v11 = (_QWORD *)*a1;
  v12 = v19;
  ++a1[1];
  *(_QWORD *)(v9 + 8) = v12;
  if ( v12 == v11 )
  {
    *v11 = v9;
    v11[1] = v9;
    v11[2] = v9;
    *(_BYTE *)(v9 + 24) = 1;
    goto LABEL_8;
  }
  if ( v20 )
  {
    *v12 = v9;
    if ( v12 == (_QWORD *)*v11 )
      *v11 = v9;
  }
  else
  {
    v12[2] = v9;
    if ( v12 == (_QWORD *)v11[2] )
      v11[2] = v9;
  }
  v13 = *(_QWORD *)(v9 + 8);
  v14 = v9;
  while ( !*(_BYTE *)(v13 + 24) )
  {
    v15 = *(_QWORD *)(v14 + 8);
    v16 = *(__int64 **)(v15 + 8);
    v17 = *v16;
    if ( v15 == *v16 )
    {
      v17 = v16[2];
      if ( !*(_BYTE *)(v17 + 24) )
        goto LABEL_28;
      if ( v14 == *(_QWORD *)(v15 + 16) )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(
          a1,
          *(_QWORD *)(v14 + 8));
      *(_BYTE *)(*(_QWORD *)(v14 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
        a1,
        *(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL),
        v10,
        v14);
    }
    else
    {
      if ( !*(_BYTE *)(v17 + 24) )
      {
LABEL_28:
        *(_BYTE *)(v15 + 24) = 1;
        *(_BYTE *)(v17 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL) + 24LL) = 0;
        v14 = *(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL);
        goto LABEL_25;
      }
      if ( v14 == *(_QWORD *)v15 )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
          a1,
          *(_QWORD *)(v14 + 8),
          v10,
          *(_QWORD *)(v14 + 8));
      *(_BYTE *)(*(_QWORD *)(v14 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(
        a1,
        *(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL));
    }
LABEL_25:
    v13 = *(_QWORD *)(v14 + 8);
  }
  *(_BYTE *)(v11[1] + 24LL) = 1;
LABEL_8:
  *(_QWORD *)a2 = v9;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}

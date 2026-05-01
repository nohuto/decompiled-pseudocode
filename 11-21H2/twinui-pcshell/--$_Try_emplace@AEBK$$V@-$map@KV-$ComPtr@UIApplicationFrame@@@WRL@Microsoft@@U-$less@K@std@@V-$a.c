/*
 * XREFs of ??$_Try_emplace@AEBK$$V@?$map@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180108FA8
 * Callers:
 *     _lambda_be0384f6ee63f5b395346d60b9e3dbc6_::operator() @ 0x18012D174 (_lambda_be0384f6ee63f5b395346d60b9e3dbc6_--operator().c)
 *     _lambda_fd32c1b568db692c2b9aba787b88bf18_::operator() @ 0x180137A58 (_lambda_fd32c1b568db692c2b9aba787b88bf18_--operator().c)
 *     _lambda_69f1d5bd17a52b1cfb35c35a1e227214_::operator() @ 0x1804E949C (_lambda_69f1d5bd17a52b1cfb35c35a1e227214_--operator().c)
 * Callees:
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801090B4 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBKV-$ComPtr@UIApplicationFrame@@@WRL@.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801090D8 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@1@V-$tuple@$$V@1@@-$_Tree_temp_node@V-$allocat.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x1801B81D8 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$ComPtr@UIObjectCollection@@@WRL@Micr.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@2@@Z @ 0x1801B8228 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180340C88 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

__int64 __fastcall std::map<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>>::_Try_emplace<unsigned long const &,>(
        __int64 ***a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 **v3; // r9
  BOOL v6; // ebp
  __int64 **v7; // rcx
  __int64 *v8; // rsi
  __int64 *v9; // r15
  __int64 *v10; // rax
  unsigned int v11; // edx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 **v15; // r10
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 *v19; // rdx
  __int64 v20; // rcx
  _BYTE v21[16]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int *v22; // [rsp+70h] [rbp+8h] BYREF

  v3 = *a1;
  v6 = 0;
  v7 = v3;
  v8 = v3[1];
  v9 = v8;
  if ( !*((_BYTE *)v8 + 25) )
  {
    v10 = v3[1];
    do
    {
      v11 = *((_DWORD *)v10 + 8);
      v9 = v10;
      v8 = v10;
      if ( v11 < *a3 )
      {
        v10 = (__int64 *)v10[2];
      }
      else
      {
        v7 = (__int64 **)v10;
        v10 = (__int64 *)*v10;
      }
      v6 = v11 >= *a3;
    }
    while ( !*((_BYTE *)v10 + 25) );
  }
  if ( !*((_BYTE *)v7 + 25) && *a3 >= *((_DWORD *)v7 + 8) )
  {
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  if ( a1[1] == (__int64 **)0x555555555555555LL )
    std::_Throw_tree_length_error();
  v22 = a3;
  v13 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *>>>(
          (unsigned int)v21,
          (_DWORD)a1,
          (_DWORD)v3,
          (_DWORD)v3,
          (__int64)&v22);
  v14 = *(_QWORD *)(v13 + 8);
  *(_QWORD *)(v13 + 8) = 0LL;
  std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *>>>(v21);
  v15 = *a1;
  a1[1] = (__int64 **)((char *)a1[1] + 1);
  *(_QWORD *)(v14 + 8) = v8;
  if ( v8 == (__int64 *)v15 )
  {
    *v15 = (__int64 *)v14;
    v15[1] = (__int64 *)v14;
    v15[2] = (__int64 *)v14;
    *(_BYTE *)(v14 + 24) = 1;
    goto LABEL_13;
  }
  if ( v6 )
  {
    *v8 = v14;
    if ( v9 == *v15 )
      *v15 = (__int64 *)v14;
  }
  else
  {
    v8[2] = v14;
    if ( v9 == v15[2] )
      v15[2] = (__int64 *)v14;
  }
  v16 = *(_QWORD *)(v14 + 8);
  v17 = v14;
  while ( !*(_BYTE *)(v16 + 24) )
  {
    v18 = *(_QWORD *)(v17 + 8);
    v19 = *(__int64 **)(v18 + 8);
    v20 = *v19;
    if ( v18 == *v19 )
    {
      v20 = v19[2];
      if ( !*(_BYTE *)(v20 + 24) )
        goto LABEL_34;
      if ( v17 == *(_QWORD *)(v18 + 16) )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(a1);
      *(_BYTE *)(*(_QWORD *)(v17 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
        a1,
        *(_QWORD *)(*(_QWORD *)(v17 + 8) + 8LL));
    }
    else
    {
      if ( !*(_BYTE *)(v20 + 24) )
      {
LABEL_34:
        *(_BYTE *)(v18 + 24) = 1;
        *(_BYTE *)(v20 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) + 8LL) + 24LL) = 0;
        v17 = *(_QWORD *)(*(_QWORD *)(v17 + 8) + 8LL);
        goto LABEL_31;
      }
      if ( v17 == *(_QWORD *)v18 )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
          a1,
          *(_QWORD *)(v17 + 8));
      *(_BYTE *)(*(_QWORD *)(v17 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(a1);
    }
LABEL_31:
    v16 = *(_QWORD *)(v17 + 8);
  }
  *((_BYTE *)v15[1] + 24) = 1;
LABEL_13:
  *(_QWORD *)a2 = v14;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}

/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@@Z @ 0x1800A366C
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@@Z @ 0x1800A33F0 (--$_Insert_hint@AEAU-$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU-$_Tree_node@U-$pair@QEBGPEBU_WNF_.c)
 *     ?CreateSupportedWnfNameStateMap@Triggers@CreativeFramework@@YA?AV?$map@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@XZ @ 0x1800A38E0 (-CreateSupportedWnfNameStateMap@Triggers@CreativeFramework@@YA-AV-$map@PEBGPEBU_WNF_STATE_NAME@@.c)
 * Callees:
 *     ?_Max@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@2@PEAU32@@Z @ 0x18006B5F4 (-_Max@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V-$.c)
 *     ??$_Insert_at@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@1@Z @ 0x1800A327C (--$_Insert_at@AEAU-$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU-$_Tree_node@U-$pair@QEBGPEBU_WNF_ST.c)
 *     ??Rless@Triggers@CreativeFramework@@QEBA_NPEBG0@Z @ 0x1800A38AC (--Rless@Triggers@CreativeFramework@@QEBA_NPEBG0@Z.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_nohint<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5)
{
  __int64 *v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rbx
  char v10; // r15
  char v11; // al
  __int64 v12; // rbx
  __int64 result; // rax
  __int64 i; // rax
  int v15; // [rsp+20h] [rbp-28h]
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v7 = (__int64 *)a1;
  v8 = *(_QWORD *)a1;
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  v10 = 1;
  while ( !*(_BYTE *)(v9 + 25) )
  {
    v8 = v9;
    v11 = CreativeFramework::Triggers::less::operator()(a1, *a4, *(_QWORD *)(v9 + 32));
    v10 = v11;
    if ( v11 )
      v9 = *(_QWORD *)v9;
    else
      v9 = *(_QWORD *)(v9 + 16);
  }
  try
  {
    v12 = v8;
    if ( v10 )
    {
      if ( v8 == *(_QWORD *)*v7 )
      {
        *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
                           v7,
                           &v16,
                           1,
                           (_QWORD *)v8,
                           v15,
                           a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *(_BYTE *)(v8 + 25) )
      {
        v12 = *(_QWORD *)(v8 + 16);
      }
      else
      {
        a1 = *(_QWORD *)v8;
        if ( *(_BYTE *)(*(_QWORD *)v8 + 25LL) )
        {
          for ( i = *(_QWORD *)(v8 + 8); !*(_BYTE *)(i + 25) && v12 == *(_QWORD *)i; i = *(_QWORD *)(i + 8) )
            v12 = i;
          if ( !*(_BYTE *)(v12 + 25) )
            v12 = i;
        }
        else
        {
          v12 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>::_Max(a1);
        }
      }
    }
    if ( (unsigned __int8)CreativeFramework::Triggers::less::operator()(a1, *(_QWORD *)(v12 + 32), *a4) )
    {
      *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
                         v7,
                         &v16,
                         v10,
                         (_QWORD *)v8,
                         v15,
                         a5);
      *(_BYTE *)(a2 + 8) = 1;
    }
    else
    {
      operator delete(a5);
      *(_QWORD *)a2 = v12;
      *(_BYTE *)(a2 + 8) = 0;
    }
    result = a2;
  }
  catch ( ... )
  {
    operator delete(a5);
    throw;
  }
  return result;
}

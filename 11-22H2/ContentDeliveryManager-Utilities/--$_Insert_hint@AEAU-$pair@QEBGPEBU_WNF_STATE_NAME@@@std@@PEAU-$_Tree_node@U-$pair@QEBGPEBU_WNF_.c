/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@@Z @ 0x1800A33F0
 * Callers:
 *     ?GetWellKnownWnfStateByName@Triggers@CreativeFramework@@YAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z @ 0x1800A3A08 (-GetWellKnownWnfStateByName@Triggers@CreativeFramework@@YAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@PEAU32@@Z @ 0x18006225C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?_Max@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@2@PEAU32@@Z @ 0x18006B5F4 (-_Max@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V-$.c)
 *     ??$_Insert_at@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@1@Z @ 0x1800A327C (--$_Insert_at@AEAU-$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU-$_Tree_node@U-$pair@QEBGPEBU_WNF_ST.c)
 *     ??$_Insert_nohint@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@@Z @ 0x1800A366C (--$_Insert_nohint@AEAU-$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU-$_Tree_node@U-$pair@QEBGPEBU_WN.c)
 *     ??Rless@Triggers@CreativeFramework@@QEBA_NPEBG0@Z @ 0x1800A38AC (--Rless@Triggers@CreativeFramework@@QEBA_NPEBG0@Z.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_hint<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5)
{
  _QWORD *v9; // rcx
  int v10; // r8d
  _QWORD *result; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  _QWORD *v17; // rdi
  _QWORD *v18; // rax
  int v19; // [rsp+20h] [rbp-38h]
  char v20; // [rsp+30h] [rbp-28h] BYREF

  v9 = (_QWORD *)*a1;
  if ( a1[1] )
  {
    if ( a3 == *v9 )
    {
      if ( (unsigned __int8)CreativeFramework::Triggers::less::operator()(v9, *a4, *(_QWORD *)(a3 + 32)) )
      {
        std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
          a1,
          a2,
          1,
          (_QWORD *)a3,
          v19,
          a5);
        return a2;
      }
      goto LABEL_38;
    }
    if ( (_QWORD *)a3 == v9 )
    {
      if ( (unsigned __int8)CreativeFramework::Triggers::less::operator()(v9, *(_QWORD *)(v9[2] + 32LL), *a4) )
      {
        std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
          a1,
          a2,
          0,
          *(_QWORD **)(*a1 + 16),
          v19,
          a5);
        return a2;
      }
      goto LABEL_38;
    }
    if ( !(unsigned __int8)CreativeFramework::Triggers::less::operator()(v9, *a4, *(_QWORD *)(a3 + 32)) )
      goto LABEL_47;
    v13 = a3;
    if ( *(_BYTE *)(a3 + 25) )
    {
      v13 = *(_QWORD *)(a3 + 16);
    }
    else
    {
      v12 = *(_QWORD *)a3;
      if ( *(_BYTE *)(*(_QWORD *)a3 + 25LL) )
      {
        v14 = *(_QWORD *)(a3 + 8);
        if ( !*(_BYTE *)(v14 + 25) )
        {
          v12 = a3;
          do
          {
            v15 = v14;
            if ( v12 != *(_QWORD *)v14 )
              break;
            v13 = v14;
            v14 = *(_QWORD *)(v14 + 8);
            v12 = v15;
          }
          while ( !*(_BYTE *)(v14 + 25) );
        }
        if ( !*(_BYTE *)(v13 + 25) )
          v13 = v14;
      }
      else
      {
        v13 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>::_Max(v12);
      }
    }
    if ( (unsigned __int8)CreativeFramework::Triggers::less::operator()(v12, *(_QWORD *)(v13 + 32), *a4) )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v13 + 16) + 25LL) )
        std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
          a1,
          a2,
          0,
          (_QWORD *)v13,
          v19,
          a5);
      else
        std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
          a1,
          a2,
          1,
          (_QWORD *)a3,
          v19,
          a5);
      return a2;
    }
    else
    {
LABEL_47:
      if ( !(unsigned __int8)CreativeFramework::Triggers::less::operator()(v12, *(_QWORD *)(a3 + 32), *a4) )
        goto LABEL_38;
      v17 = (_QWORD *)a3;
      if ( !*(_BYTE *)(a3 + 25) )
      {
        v16 = *(_QWORD **)(a3 + 16);
        if ( *((_BYTE *)v16 + 25) )
        {
          v17 = *(_QWORD **)(a3 + 8);
          if ( !*((_BYTE *)v17 + 25) )
          {
            v18 = (_QWORD *)a3;
            do
            {
              v16 = v17;
              if ( v18 != (_QWORD *)v17[2] )
                break;
              v17 = (_QWORD *)v17[1];
              v18 = v16;
            }
            while ( !*((_BYTE *)v17 + 25) );
          }
        }
        else
        {
          v17 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>::_Min(v16);
        }
      }
      if ( v17 != (_QWORD *)*a1 && !(unsigned __int8)CreativeFramework::Triggers::less::operator()(v16, *a4, v17[4]) )
      {
LABEL_38:
        *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_nohint<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
                           (_DWORD)a1,
                           (unsigned int)&v20,
                           v10,
                           (_DWORD)a4,
                           (__int64)a5);
        return a2;
      }
      if ( *(_BYTE *)(*(_QWORD *)(a3 + 16) + 25LL) )
        std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
          a1,
          a2,
          0,
          (_QWORD *)a3,
          v19,
          a5);
      else
        std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
          a1,
          a2,
          1,
          v17,
          v19,
          a5);
      return a2;
    }
  }
  else
  {
    try
    {
      std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
        a1,
        a2,
        1,
        v9,
        v19,
        a5);
      result = a2;
    }
    catch ( ... )
    {
      operator delete(a5);
      throw;
    }
  }
  return result;
}

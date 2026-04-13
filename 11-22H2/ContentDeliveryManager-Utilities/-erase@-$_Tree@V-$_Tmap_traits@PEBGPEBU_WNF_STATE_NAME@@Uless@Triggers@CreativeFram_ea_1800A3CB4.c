/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@2@@Z @ 0x1800A3CB4
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@2@0@Z @ 0x1800A3BEC (-erase@-$_Tree@V-$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V-$all.c)
 * Callees:
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x1800049E0 (-_Xout_of_range@std@@YAXPEBD@Z.c)
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@Z @ 0x18006220C (-_Lrotate@-$_Tree@V-$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V-$.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@PEAU32@@Z @ 0x18006225C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@Z @ 0x180062578 (-_Rrotate@-$_Tree@V-$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V-$.c)
 *     ?_Max@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@2@PEAU32@@Z @ 0x18006B5F4 (-_Max@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V-$.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 *v5; // r14
  _BYTE *v6; // r11
  __int64 v7; // rcx
  __int64 *v8; // rsi
  _QWORD *i; // rbx
  __int64 v10; // r10
  __int64 v11; // r9
  _QWORD *v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  _QWORD *v16; // rax
  char v17; // cl
  __int64 v18; // rsi
  _BYTE *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  _QWORD *result; // rax

  if ( *((_BYTE *)a3 + 25) )
    std::_Xout_of_range("invalid map/set<T> iterator");
  v5 = a3 + 2;
  v6 = a3;
  v7 = a3[2];
  v8 = a3 + 1;
  if ( *(_BYTE *)(v7 + 25) )
  {
    for ( i = (_QWORD *)*v8; !*((_BYTE *)i + 25) && a3 == (_QWORD *)i[2]; i = (_QWORD *)i[1] )
      a3 = i;
  }
  else
  {
    i = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>::_Min((_QWORD *)v7);
  }
  v10 = *v5;
  if ( *(_BYTE *)(*(_QWORD *)v6 + 25LL) )
    goto LABEL_13;
  if ( *(_BYTE *)(v10 + 25) )
  {
    v10 = *(_QWORD *)v6;
LABEL_13:
    v11 = *v8;
    if ( !*(_BYTE *)(v10 + 25) )
      *(_QWORD *)(v10 + 8) = v11;
    if ( *(_BYTE **)(*a1 + 8LL) == v6 )
    {
      *(_QWORD *)(*a1 + 8LL) = v10;
    }
    else if ( *(_BYTE **)v11 == v6 )
    {
      *(_QWORD *)v11 = v10;
    }
    else
    {
      *(_QWORD *)(v11 + 16) = v10;
    }
    v12 = (_QWORD *)*a1;
    if ( *(_BYTE **)*a1 == v6 )
    {
      if ( *(_BYTE *)(v10 + 25) )
        v13 = (_QWORD *)v11;
      else
        v13 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>::_Min((_QWORD *)v10);
      *v12 = v13;
    }
    v14 = *a1;
    if ( *(_BYTE **)(*a1 + 16LL) == v6 )
    {
      if ( *(_BYTE *)(v10 + 25) )
        v15 = v11;
      else
        v15 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>::_Max(v10);
      *(_QWORD *)(v14 + 16) = v15;
    }
    goto LABEL_41;
  }
  v10 = i[2];
  if ( i == (_QWORD *)v6 )
    goto LABEL_13;
  *(_QWORD *)(*(_QWORD *)v6 + 8LL) = i;
  *i = *(_QWORD *)v6;
  if ( i == (_QWORD *)*v5 )
  {
    v11 = (__int64)i;
  }
  else
  {
    v11 = i[1];
    if ( !*(_BYTE *)(v10 + 25) )
      *(_QWORD *)(v10 + 8) = v11;
    *(_QWORD *)v11 = v10;
    i[2] = *v5;
    *(_QWORD *)(*v5 + 8) = i;
  }
  if ( *(_BYTE **)(*a1 + 8LL) == v6 )
  {
    *(_QWORD *)(*a1 + 8LL) = i;
  }
  else
  {
    v16 = (_QWORD *)*v8;
    if ( *(_BYTE **)*v8 == v6 )
      *v16 = i;
    else
      v16[2] = i;
  }
  i[1] = *v8;
  v17 = *((_BYTE *)i + 24);
  *((_BYTE *)i + 24) = v6[24];
  v6[24] = v17;
LABEL_41:
  if ( v6[24] != 1 )
    goto LABEL_64;
  while ( 1 )
  {
    v18 = v11;
    if ( v10 == *(_QWORD *)(*a1 + 8LL) || *(_BYTE *)(v10 + 24) != 1 )
      break;
    v19 = *(_BYTE **)v11;
    if ( v10 == *(_QWORD *)v11 )
    {
      v19 = *(_BYTE **)(v11 + 16);
      if ( !v19[24] )
      {
        v19[24] = 1;
        *(_BYTE *)(v11 + 24) = 0;
        std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Lrotate(
          (__int64)a1,
          v11);
        v19 = *(_BYTE **)(v11 + 16);
      }
      if ( !v19[25] )
      {
        if ( *(_BYTE *)(*(_QWORD *)v19 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v19 + 2) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*((_QWORD *)v19 + 2) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v19 + 24LL) = 1;
            v19[24] = 0;
            std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Rrotate(
              (__int64)a1,
              v19);
            v19 = *(_BYTE **)(v11 + 16);
          }
          v19[24] = *(_BYTE *)(v11 + 24);
          *(_BYTE *)(v11 + 24) = 1;
          *(_BYTE *)(*((_QWORD *)v19 + 2) + 24LL) = 1;
          std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Lrotate(
            (__int64)a1,
            v11);
          break;
        }
LABEL_58:
        v19[24] = 0;
      }
    }
    else
    {
      if ( !v19[24] )
      {
        v19[24] = 1;
        *(_BYTE *)(v11 + 24) = 0;
        std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Rrotate(
          (__int64)a1,
          (_QWORD *)v11);
        v19 = *(_BYTE **)v11;
      }
      if ( !v19[25] )
      {
        v20 = *((_QWORD *)v19 + 2);
        if ( *(_BYTE *)(v20 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v19 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v19 + 24LL) == 1 )
          {
            *(_BYTE *)(v20 + 24) = 1;
            v19[24] = 0;
            std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Lrotate(
              (__int64)a1,
              (__int64)v19);
            v19 = *(_BYTE **)v11;
          }
          v19[24] = *(_BYTE *)(v11 + 24);
          *(_BYTE *)(v11 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v19 + 24LL) = 1;
          std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Rrotate(
            (__int64)a1,
            (_QWORD *)v11);
          break;
        }
        goto LABEL_58;
      }
    }
    v11 = *(_QWORD *)(v11 + 8);
    v10 = v18;
  }
  *(_BYTE *)(v10 + 24) = 1;
LABEL_64:
  operator delete(v6);
  v21 = a1[1];
  if ( v21 )
    a1[1] = v21 - 1;
  result = a2;
  *a2 = i;
  return result;
}

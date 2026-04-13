/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@@Z @ 0x1800B2A20
 * Callers:
 *     ?GetWellKnownWnfStateByName@Triggers@CreativeFramework@@YAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z @ 0x1800B30E0 (-GetWellKnownWnfStateByName@Triggers@CreativeFramework@@YAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z.c)
 * Callees:
 *     ??F?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@@std@@QEAAAEAV01@XZ @ 0x18006E83C (--F-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@_WU-$ch.c)
 *     ??$_Insert_at@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@1@Z @ 0x1800B2790 (--$_Insert_at@AEAU-$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU-$_Tree_node@U-$pair@QEBGPEBU_WNF_ST.c)
 *     ??$_Insert_nohint@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@@Z @ 0x1800B2CF4 (--$_Insert_nohint@AEAU-$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU-$_Tree_node@U-$pair@QEBGPEBU_WN.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_hint<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        LPCWCH *a4,
        _QWORD *a5)
{
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  int v11; // r8d
  _QWORD *result; // rax
  __int64 **v13; // rax
  __int64 *v14; // r9
  __int64 *v15; // rax
  __int64 i; // rcx
  __int64 *v17; // rax
  __int64 *v18; // rcx
  int bIgnoreCase; // [rsp+20h] [rbp-38h]
  int bIgnoreCasea; // [rsp+20h] [rbp-38h]
  int bIgnoreCaseb; // [rsp+20h] [rbp-38h]
  int bIgnoreCasec; // [rsp+20h] [rbp-38h]
  int bIgnoreCased; // [rsp+20h] [rbp-38h]
  char v24; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v25; // [rsp+60h] [rbp+8h] BYREF

  v25 = 0LL;
  v9 = (_QWORD *)*a1;
  if ( a1[1] )
  {
    if ( a3 == *v9 )
    {
      if ( CompareStringOrdinal(*a4, -1, *(LPCWCH *)(a3 + 32), -1, 1) == 1 )
      {
        std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
          a1,
          a2,
          1,
          (_QWORD *)a3,
          bIgnoreCasea,
          a5);
        return a2;
      }
      goto LABEL_32;
    }
    if ( (_QWORD *)a3 == v9 )
    {
      if ( CompareStringOrdinal(*(LPCWCH *)(v9[2] + 32LL), -1, *a4, -1, 1) == 1 )
      {
        std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
          a1,
          a2,
          0,
          *(_QWORD **)(*a1 + 16LL),
          bIgnoreCaseb,
          a5);
        return a2;
      }
      goto LABEL_32;
    }
    if ( CompareStringOrdinal(*a4, -1, *(LPCWCH *)(a3 + 32), -1, 1) == 1 )
    {
      v25 = (__int64 *)a3;
      v13 = std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>>::operator--(&v25);
      if ( CompareStringOrdinal((LPCWCH)(*v13)[4], -1, *a4, -1, 1) == 1 )
      {
        if ( *(_BYTE *)(v25[2] + 25) )
          std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
            a1,
            a2,
            0,
            v25,
            bIgnoreCasec,
            a5);
        else
          std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
            a1,
            a2,
            1,
            (_QWORD *)a3,
            bIgnoreCasec,
            a5);
        return a2;
      }
    }
    if ( CompareStringOrdinal(*(LPCWCH *)(a3 + 32), -1, *a4, -1, 1) == 1 )
    {
      v14 = (__int64 *)a3;
      v25 = (__int64 *)a3;
      v15 = (__int64 *)a3;
      if ( !*(_BYTE *)(a3 + 25) )
      {
        v14 = *(__int64 **)(a3 + 16);
        if ( *((_BYTE *)v14 + 25) )
        {
          v14 = *(__int64 **)(a3 + 8);
          if ( !*((_BYTE *)v14 + 25) )
          {
            v17 = (__int64 *)a3;
            do
            {
              v18 = v14;
              if ( v17 != (__int64 *)v14[2] )
                break;
              v25 = v14;
              v14 = (__int64 *)v14[1];
              v17 = v18;
            }
            while ( !*((_BYTE *)v14 + 25) );
          }
        }
        else
        {
          for ( i = *v14; !*(_BYTE *)(i + 25); i = *(_QWORD *)i )
            v14 = (__int64 *)i;
        }
        v15 = v14;
        v25 = v14;
      }
      if ( v15 == (__int64 *)*a1 )
        goto LABEL_28;
      if ( CompareStringOrdinal(*a4, -1, (LPCWCH)v14[4], -1, 1) == 1 )
      {
        v14 = v25;
LABEL_28:
        if ( *(_BYTE *)(*(_QWORD *)(a3 + 16) + 25LL) )
          std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
            a1,
            a2,
            0,
            (_QWORD *)a3,
            bIgnoreCased,
            a5);
        else
          std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
            a1,
            a2,
            1,
            v14,
            bIgnoreCased,
            a5);
        return a2;
      }
    }
LABEL_32:
    *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_nohint<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
                       (_DWORD)a1,
                       (unsigned int)&v24,
                       v11,
                       (_DWORD)a4,
                       (__int64)a5);
    return a2;
  }
  try
  {
    std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
      a1,
      a2,
      1,
      v9,
      bIgnoreCase,
      a5);
    result = a2;
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Destroy_if_not_nil(
      v10,
      a5);
    throw;
  }
  return result;
}

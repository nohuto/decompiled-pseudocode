/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180029050
 * Callers:
 *     ?UpdateResourcePriority@CResourcePriorityTracker@@QEAAJW4_ResourcePriorityAction@@KKPEA_N@Z @ 0x180028F38 (-UpdateResourcePriority@CResourcePriorityTracker@@QEAAJW4_ResourcePriorityAction@@KKPEA_N@Z.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18002911C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKK@std@@@std@.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@Z @ 0x1800FB3D4 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@PEAU32@@Z @ 0x1800FB424 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@SAPEAU-$.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@Z @ 0x1800FB4AC (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$function@$$A6AX_N@Z@std@@@std@@@std.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>::_Extract(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 *v5; // r11
  __int64 v6; // r10
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 **v14; // rcx
  char v15; // dl
  __int64 v16; // rdi
  __int64 *v17; // rdx
  __int64 v18; // rcx
  __int64 *v19; // [rsp+38h] [rbp+10h] BYREF

  v19 = a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>,std::_Iterator_base0>::operator++(&v19);
  v6 = v5[2];
  if ( *(_BYTE *)(*v5 + 25) )
    goto LABEL_2;
  if ( *(_BYTE *)(v6 + 25) )
  {
    v6 = *v5;
LABEL_2:
    v7 = v5[1];
    if ( !*(_BYTE *)(v6 + 25) )
      *(_QWORD *)(v6 + 8) = v7;
    if ( *(__int64 **)(*a1 + 8LL) == v5 )
    {
      *(_QWORD *)(*a1 + 8LL) = v6;
    }
    else if ( *(__int64 **)v7 == v5 )
    {
      *(_QWORD *)v7 = v6;
    }
    else
    {
      *(_QWORD *)(v7 + 16) = v6;
    }
    v4 = *a1;
    if ( *(__int64 **)*a1 == v5 )
    {
      if ( *(_BYTE *)(v6 + 25) )
        v8 = v7;
      else
        v8 = std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>::_Min(v6, v3, v4, v7);
      *(_QWORD *)v4 = v8;
    }
    if ( *(__int64 **)(*a1 + 16LL) == v5 )
    {
      if ( *(_BYTE *)(v6 + 25) )
      {
        v9 = v7;
      }
      else
      {
        v13 = *(_QWORD *)(v6 + 16);
        v9 = v6;
        while ( !*(_BYTE *)(v13 + 25) )
        {
          v9 = v13;
          v13 = *(_QWORD *)(v13 + 16);
        }
      }
      *(_QWORD *)(*a1 + 16LL) = v9;
    }
    goto LABEL_14;
  }
  v12 = v19;
  v6 = v19[2];
  if ( v19 == v5 )
    goto LABEL_2;
  *(_QWORD *)(*v5 + 8) = v19;
  *v12 = *v5;
  if ( v12 == (__int64 *)v5[2] )
  {
    v7 = (__int64)v12;
  }
  else
  {
    v7 = v12[1];
    if ( !*(_BYTE *)(v6 + 25) )
      *(_QWORD *)(v6 + 8) = v7;
    *(_QWORD *)v7 = v6;
    v12[2] = v5[2];
    *(_QWORD *)(v5[2] + 8) = v12;
  }
  if ( *(__int64 **)(*a1 + 8LL) == v5 )
  {
    *(_QWORD *)(*a1 + 8LL) = v12;
  }
  else
  {
    v14 = (__int64 **)v5[1];
    if ( *v14 == v5 )
      *v14 = v12;
    else
      v14[2] = v12;
  }
  v15 = *((_BYTE *)v12 + 24);
  v12[1] = v5[1];
  *((_BYTE *)v12 + 24) = *((_BYTE *)v5 + 24);
  *((_BYTE *)v5 + 24) = v15;
LABEL_14:
  if ( *((_BYTE *)v5 + 24) != 1 )
    goto LABEL_17;
  if ( v6 != *(_QWORD *)(*a1 + 8LL) )
  {
    do
    {
      v16 = v7;
      if ( *(_BYTE *)(v6 + 24) != 1 )
        break;
      v17 = *(__int64 **)v7;
      if ( v6 == *(_QWORD *)v7 )
      {
        v17 = *(__int64 **)(v7 + 16);
        if ( !*((_BYTE *)v17 + 24) )
        {
          *((_BYTE *)v17 + 24) = 1;
          *(_BYTE *)(v7 + 24) = 0;
          std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>::_Lrotate(a1, v7);
          v17 = *(__int64 **)(v7 + 16);
        }
        if ( *((_BYTE *)v17 + 25) )
          goto LABEL_58;
        v4 = *v17;
        if ( *(_BYTE *)(*v17 + 24) != 1 || *(_BYTE *)(v17[2] + 24) != 1 )
        {
          if ( *(_BYTE *)(v17[2] + 24) == 1 )
          {
            *(_BYTE *)(v4 + 24) = 1;
            *((_BYTE *)v17 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>::_Rrotate(
              a1,
              v17,
              v4,
              v7);
            v17 = *(__int64 **)(v7 + 16);
          }
          *((_BYTE *)v17 + 24) = *(_BYTE *)(v7 + 24);
          *(_BYTE *)(v7 + 24) = 1;
          *(_BYTE *)(v17[2] + 24) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>::_Lrotate(a1, v7);
          break;
        }
      }
      else
      {
        if ( !*((_BYTE *)v17 + 24) )
        {
          *((_BYTE *)v17 + 24) = 1;
          *(_BYTE *)(v7 + 24) = 0;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>::_Rrotate(
            a1,
            v7,
            v4,
            v7);
          v17 = *(__int64 **)v7;
        }
        if ( *((_BYTE *)v17 + 25) )
          goto LABEL_58;
        v18 = v17[2];
        if ( *(_BYTE *)(v18 + 24) != 1 || *(_BYTE *)(*v17 + 24) != 1 )
        {
          if ( *(_BYTE *)(*v17 + 24) == 1 )
          {
            *(_BYTE *)(v18 + 24) = 1;
            *((_BYTE *)v17 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>::_Lrotate(a1, v17);
            v17 = *(__int64 **)v7;
          }
          *((_BYTE *)v17 + 24) = *(_BYTE *)(v7 + 24);
          *(_BYTE *)(v7 + 24) = 1;
          *(_BYTE *)(*v17 + 24) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>::_Rrotate(
            a1,
            v7,
            v4,
            v7);
          break;
        }
      }
      *((_BYTE *)v17 + 24) = 0;
LABEL_58:
      v6 = v16;
      v7 = *(_QWORD *)(v7 + 8);
    }
    while ( v16 != *(_QWORD *)(*a1 + 8LL) );
  }
  *(_BYTE *)(v6 + 24) = 1;
LABEL_17:
  v10 = a1[1];
  if ( v10 )
    a1[1] = v10 - 1;
  return v5;
}

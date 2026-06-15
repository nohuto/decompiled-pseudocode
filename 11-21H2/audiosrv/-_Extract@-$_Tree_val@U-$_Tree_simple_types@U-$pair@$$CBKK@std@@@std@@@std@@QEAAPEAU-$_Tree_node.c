/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800049E0
 * Callers:
 *     ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x1800045D0 (-UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x1800047A0 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 * Callees:
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@Z @ 0x180067294 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@PEAU32@@Z @ 0x1800672E4 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@SAPEAU-$.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@Z @ 0x1800673B4 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$function@$$A6AX_N@Z@std@@@std@@@std.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>::_Extract(
        __int64 **a1,
        _QWORD *a2)
{
  __int64 v2; // r9
  _QWORD *v3; // r8
  __int64 **v4; // r10
  _QWORD *v5; // rdi
  __int64 *v6; // r11
  __int64 i; // rax
  __int64 v8; // rbx
  __int64 *v9; // r8
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  char v13; // dl
  __int64 *v14; // rcx
  __int64 *result; // rax
  __int64 v16; // rdx
  __int64 *v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx

  v2 = a2[2];
  v3 = a2 + 2;
  v4 = a1;
  v5 = a2;
  v6 = a2;
  if ( *(_BYTE *)(v2 + 25) )
  {
    for ( i = a2[1]; !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 8) )
    {
      if ( a2 != *(_QWORD **)(i + 16) )
        break;
      a2 = (_QWORD *)i;
    }
  }
  else
  {
    i = std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>::_Min(v2, a2, v3);
  }
  if ( *(_BYTE *)(*v6 + 25) )
    goto LABEL_4;
  if ( *(_BYTE *)(v2 + 25) )
  {
    v2 = *v6;
LABEL_4:
    v8 = v6[1];
    if ( !*(_BYTE *)(v2 + 25) )
      *(_QWORD *)(v2 + 8) = v8;
    if ( (__int64 *)(*v4)[1] == v6 )
    {
      (*v4)[1] = v2;
    }
    else if ( *(__int64 **)v8 == v6 )
    {
      *(_QWORD *)v8 = v2;
    }
    else
    {
      *(_QWORD *)(v8 + 16) = v2;
    }
    v9 = *v4;
    v10 = *v4;
    if ( (__int64 *)**v4 == v6 )
    {
      if ( *(_BYTE *)(v2 + 25) )
        v11 = v8;
      else
        v11 = std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>::_Min(v2, a2, v9);
      *v9 = v11;
      v9 = *v4;
      v10 = *v4;
    }
    if ( (__int64 *)v10[2] == v6 )
    {
      if ( *(_BYTE *)(v2 + 25) )
      {
        v12 = v8;
      }
      else
      {
        v16 = *(_QWORD *)(v2 + 16);
        v12 = v2;
        if ( !*(_BYTE *)(v16 + 25) )
        {
          do
          {
            v12 = v16;
            v16 = *(_QWORD *)(v16 + 16);
          }
          while ( !*(_BYTE *)(v16 + 25) );
          v10 = v9;
        }
      }
      v10[2] = v12;
    }
    v13 = *((_BYTE *)v5 + 24);
    goto LABEL_17;
  }
  v2 = *(_QWORD *)(i + 16);
  if ( (__int64 *)i == v6 )
    goto LABEL_4;
  *(_QWORD *)(*v6 + 8) = i;
  *(_QWORD *)i = *v6;
  if ( i == *v3 )
  {
    v8 = i;
  }
  else
  {
    v8 = *(_QWORD *)(i + 8);
    if ( !*(_BYTE *)(v2 + 25) )
      *(_QWORD *)(v2 + 8) = v8;
    *(_QWORD *)v8 = v2;
    *(_QWORD *)(i + 16) = *v3;
    *(_QWORD *)(*v3 + 8LL) = i;
  }
  if ( (__int64 *)(*v4)[1] == v6 )
  {
    (*v4)[1] = i;
  }
  else
  {
    v17 = (__int64 *)v6[1];
    if ( (__int64 *)*v17 == v6 )
      *v17 = i;
    else
      v17[2] = i;
  }
  v13 = *(_BYTE *)(i + 24);
  *(_QWORD *)(i + 8) = v6[1];
  *(_BYTE *)(i + 24) = *((_BYTE *)v6 + 24);
  *((_BYTE *)v6 + 24) = v13;
LABEL_17:
  if ( v13 != 1 )
    goto LABEL_20;
  if ( v2 != (*v4)[1] )
  {
    do
    {
      v18 = v8;
      if ( *(_BYTE *)(v2 + 24) != 1 )
        break;
      v19 = *(_QWORD *)v8;
      if ( v2 == *(_QWORD *)v8 )
      {
        v19 = *(_QWORD *)(v8 + 16);
        if ( !*(_BYTE *)(v19 + 24) )
        {
          *(_BYTE *)(v19 + 24) = 1;
          *(_BYTE *)(v8 + 24) = 0;
          std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>::_Lrotate(v4);
          v19 = *(_QWORD *)(v8 + 16);
        }
        if ( *(_BYTE *)(v19 + 25) )
          goto LABEL_64;
        if ( *(_BYTE *)(*(_QWORD *)v19 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(v19 + 16) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(v19 + 16) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v19 + 24LL) = 1;
            *(_BYTE *)(v19 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>::_Rrotate(
              v4,
              v19);
            v19 = *(_QWORD *)(v8 + 16);
          }
          *(_BYTE *)(v19 + 24) = *(_BYTE *)(v8 + 24);
          *(_BYTE *)(v8 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(v19 + 16) + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>::_Lrotate(v4);
          break;
        }
      }
      else
      {
        if ( !*(_BYTE *)(v19 + 24) )
        {
          *(_BYTE *)(v19 + 24) = 1;
          *(_BYTE *)(v8 + 24) = 0;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>::_Rrotate(
            v4,
            v8);
          v19 = *(_QWORD *)v8;
        }
        if ( *(_BYTE *)(v19 + 25) )
          goto LABEL_64;
        v20 = *(_QWORD *)(v19 + 16);
        if ( *(_BYTE *)(v20 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v19 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v19 + 24LL) == 1 )
          {
            *(_BYTE *)(v20 + 24) = 1;
            *(_BYTE *)(v19 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>::_Lrotate(v4);
            v19 = *(_QWORD *)v8;
          }
          *(_BYTE *)(v19 + 24) = *(_BYTE *)(v8 + 24);
          *(_BYTE *)(v8 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v19 + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>::_Rrotate(
            v4,
            v8);
          break;
        }
      }
      *(_BYTE *)(v19 + 24) = 0;
LABEL_64:
      v2 = v8;
      v8 = *(_QWORD *)(v8 + 8);
    }
    while ( v18 != (*v4)[1] );
  }
  *(_BYTE *)(v2 + 24) = 1;
LABEL_20:
  v14 = v4[1];
  result = v6;
  if ( v14 )
    v4[1] = (__int64 *)((char *)v14 - 1);
  return result;
}

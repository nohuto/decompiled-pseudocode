/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180066EB0
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@_KV?$function@$$A6AX_N@Z@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x180067478 (-erase@-$_Tree@V-$_Tmap_traits@_KV-$function@$$A6AX_N@Z@std@@U-$less@_K@2@V-$allocator@U-$pair@$.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180066930 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$function.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@Z @ 0x180067294 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@PEAU32@@Z @ 0x1800672E4 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@SAPEAU-$.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@Z @ 0x1800673B4 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$function@$$A6AX_N@Z@std@@@std@@@std.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>::_Extract(
        __int64 **a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 *v4; // r11
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 *v8; // r8
  __int64 *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  char v13; // dl
  __int64 *v14; // rcx
  bool i; // zf
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *v19; // rcx
  __int64 *v21; // [rsp+38h] [rbp+10h] BYREF

  v21 = (__int64 *)a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>,std::_Iterator_base0>::operator++((__int64 *)&v21);
  v5 = v4[2];
  if ( !*(_BYTE *)(*v4 + 25) )
  {
    if ( *(_BYTE *)(v5 + 25) )
    {
      v5 = *v4;
    }
    else
    {
      v6 = (__int64)v21;
      v5 = v21[2];
      if ( v21 != v4 )
      {
        *(_QWORD *)(*v4 + 8) = v21;
        *(_QWORD *)v6 = *v4;
        if ( v6 == v4[2] )
        {
          v7 = v6;
        }
        else
        {
          v7 = *(_QWORD *)(v6 + 8);
          if ( !*(_BYTE *)(v5 + 25) )
            *(_QWORD *)(v5 + 8) = v7;
          *(_QWORD *)v7 = v5;
          *(_QWORD *)(v6 + 16) = v4[2];
          *(_QWORD *)(v4[2] + 8) = v6;
        }
        if ( (__int64 *)(*a1)[1] == v4 )
        {
          (*a1)[1] = v6;
        }
        else
        {
          v14 = (__int64 *)v4[1];
          if ( (__int64 *)*v14 == v4 )
            *v14 = v6;
          else
            v14[2] = v6;
        }
        v13 = *(_BYTE *)(v6 + 24);
        *(_QWORD *)(v6 + 8) = v4[1];
        *(_BYTE *)(v6 + 24) = *((_BYTE *)v4 + 24);
        *((_BYTE *)v4 + 24) = v13;
        goto LABEL_36;
      }
    }
  }
  v7 = v4[1];
  if ( !*(_BYTE *)(v5 + 25) )
    *(_QWORD *)(v5 + 8) = v7;
  if ( (__int64 *)(*a1)[1] == v4 )
  {
    (*a1)[1] = v5;
  }
  else if ( *(__int64 **)v7 == v4 )
  {
    *(_QWORD *)v7 = v5;
  }
  else
  {
    *(_QWORD *)(v7 + 16) = v5;
  }
  v8 = *a1;
  v9 = *a1;
  if ( (__int64 *)**a1 == v4 )
  {
    if ( *(_BYTE *)(v5 + 25) )
      v10 = v7;
    else
      v10 = std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>::_Min(v5, v3, v8);
    *v8 = v10;
    v8 = *a1;
    v9 = *a1;
  }
  if ( (__int64 *)v9[2] == v4 )
  {
    if ( *(_BYTE *)(v5 + 25) )
    {
      v11 = v7;
    }
    else
    {
      v12 = *(_QWORD *)(v5 + 16);
      v11 = v5;
      if ( !*(_BYTE *)(v12 + 25) )
      {
        do
        {
          v11 = v12;
          v12 = *(_QWORD *)(v12 + 16);
        }
        while ( !*(_BYTE *)(v12 + 25) );
        v9 = v8;
      }
    }
    v9[2] = v11;
  }
  v13 = *((_BYTE *)v4 + 24);
LABEL_36:
  if ( v13 != 1 )
    goto LABEL_60;
  for ( i = v5 == (*a1)[1]; !i; i = v16 == (*a1)[1] )
  {
    v16 = v7;
    if ( *(_BYTE *)(v5 + 24) != 1 )
      break;
    v17 = *(_QWORD *)v7;
    if ( v5 == *(_QWORD *)v7 )
    {
      v17 = *(_QWORD *)(v7 + 16);
      if ( !*(_BYTE *)(v17 + 24) )
      {
        *(_BYTE *)(v17 + 24) = 1;
        *(_BYTE *)(v7 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>::_Lrotate(a1);
        v17 = *(_QWORD *)(v7 + 16);
      }
      if ( !*(_BYTE *)(v17 + 25) )
      {
        if ( *(_BYTE *)(*(_QWORD *)v17 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(v17 + 16) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(v17 + 16) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v17 + 24LL) = 1;
            *(_BYTE *)(v17 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>::_Rrotate(
              a1,
              v17);
            v17 = *(_QWORD *)(v7 + 16);
          }
          *(_BYTE *)(v17 + 24) = *(_BYTE *)(v7 + 24);
          *(_BYTE *)(v7 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(v17 + 16) + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>::_Lrotate(a1);
          break;
        }
LABEL_54:
        *(_BYTE *)(v17 + 24) = 0;
      }
    }
    else
    {
      if ( !*(_BYTE *)(v17 + 24) )
      {
        *(_BYTE *)(v17 + 24) = 1;
        *(_BYTE *)(v7 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>::_Rrotate(
          a1,
          v7);
        v17 = *(_QWORD *)v7;
      }
      if ( !*(_BYTE *)(v17 + 25) )
      {
        v18 = *(_QWORD *)(v17 + 16);
        if ( *(_BYTE *)(v18 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v17 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v17 + 24LL) == 1 )
          {
            *(_BYTE *)(v18 + 24) = 1;
            *(_BYTE *)(v17 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>::_Lrotate(a1);
            v17 = *(_QWORD *)v7;
          }
          *(_BYTE *)(v17 + 24) = *(_BYTE *)(v7 + 24);
          *(_BYTE *)(v7 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v17 + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>::_Rrotate(
            a1,
            v7);
          break;
        }
        goto LABEL_54;
      }
    }
    v5 = v16;
    v7 = *(_QWORD *)(v7 + 8);
  }
  *(_BYTE *)(v5 + 24) = 1;
LABEL_60:
  v19 = a1[1];
  if ( v19 )
    a1[1] = (__int64 *)((char *)v19 - 1);
  return v4;
}

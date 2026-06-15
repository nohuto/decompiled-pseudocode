/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800FAFA0
 * Callers:
 *     ?_Erase_unchecked@?$_Tree@V?$_Tmap_traits@_KV?$function@$$A6AX_N@Z@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@0@Z @ 0x1800FAF04 (-_Erase_unchecked@-$_Tree@V-$_Tmap_traits@_KV-$function@$$A6AX_N@Z@std@@U-$less@_K@2@V-$allocato.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBU_GUID@@@Z @ 0x18013BD34 (-erase@-$_Tree@V-$_Tmap_traits@U_GUID@@UHmdInfo@@U-$less@U_GUID@@@std@@V-$allocator@U-$pair@$$CB.c)
 *     ?_Erase_unchecked@?$_Tree@V?$_Tmap_traits@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@AEAAPEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180140CA4 (-_Erase_unchecked@-$_Tree@V-$_Tmap_traits@_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@U-$less@_J@std@.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800F56AC (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$function.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@Z @ 0x1800FB384 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@PEAU32@@Z @ 0x1800FB3D4 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@SAPEAU-$.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@Z @ 0x1800FB45C (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$function@$$A6AX_N@Z@std@@@std@@@std.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>::_Extract(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 *v7; // r11
  __int64 v8; // r10
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 *v14; // rcx
  char v15; // dl
  __int64 v16; // rdi
  __int64 *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 *v21; // [rsp+38h] [rbp+10h] BYREF

  v21 = (__int64 *)a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>,std::_Iterator_base0>::operator++(
    (__int64 *)&v21,
    a2,
    a3,
    a4);
  v8 = v7[2];
  if ( *(_BYTE *)(*v7 + 25) )
    goto LABEL_5;
  if ( *(_BYTE *)(v8 + 25) )
  {
    v8 = *v7;
LABEL_5:
    v10 = v7[1];
    if ( !*(_BYTE *)(v8 + 25) )
      *(_QWORD *)(v8 + 8) = v10;
    if ( *(__int64 **)(*a1 + 8LL) == v7 )
    {
      *(_QWORD *)(*a1 + 8LL) = v8;
    }
    else if ( *(__int64 **)v10 == v7 )
    {
      *(_QWORD *)v10 = v8;
    }
    else
    {
      *(_QWORD *)(v10 + 16) = v8;
    }
    v6 = *a1;
    if ( *(__int64 **)*a1 == v7 )
    {
      if ( *(_BYTE *)(v8 + 25) )
        v11 = v10;
      else
        v11 = std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>::_Min(v8, v5, v6, v10);
      *(_QWORD *)v6 = v11;
    }
    if ( *(__int64 **)(*a1 + 16LL) == v7 )
    {
      if ( *(_BYTE *)(v8 + 25) )
      {
        v12 = v10;
      }
      else
      {
        v13 = *(_QWORD *)(v8 + 16);
        v12 = v8;
        while ( !*(_BYTE *)(v13 + 25) )
        {
          v12 = v13;
          v13 = *(_QWORD *)(v13 + 16);
        }
      }
      *(_QWORD *)(*a1 + 16LL) = v12;
    }
    goto LABEL_35;
  }
  v9 = (__int64)v21;
  v8 = v21[2];
  if ( v21 == v7 )
    goto LABEL_5;
  *(_QWORD *)(*v7 + 8) = v21;
  *(_QWORD *)v9 = *v7;
  if ( v9 == v7[2] )
  {
    v10 = v9;
  }
  else
  {
    v10 = *(_QWORD *)(v9 + 8);
    if ( !*(_BYTE *)(v8 + 25) )
      *(_QWORD *)(v8 + 8) = v10;
    *(_QWORD *)v10 = v8;
    *(_QWORD *)(v9 + 16) = v7[2];
    *(_QWORD *)(v7[2] + 8) = v9;
  }
  if ( *(__int64 **)(*a1 + 8LL) == v7 )
  {
    *(_QWORD *)(*a1 + 8LL) = v9;
  }
  else
  {
    v14 = (__int64 *)v7[1];
    if ( (__int64 *)*v14 == v7 )
      *v14 = v9;
    else
      v14[2] = v9;
  }
  v15 = *(_BYTE *)(v9 + 24);
  *(_QWORD *)(v9 + 8) = v7[1];
  *(_BYTE *)(v9 + 24) = *((_BYTE *)v7 + 24);
  *((_BYTE *)v7 + 24) = v15;
LABEL_35:
  if ( *((_BYTE *)v7 + 24) == 1 )
  {
    if ( v8 != *(_QWORD *)(*a1 + 8LL) )
    {
      do
      {
        v16 = v10;
        if ( *(_BYTE *)(v8 + 24) != 1 )
          break;
        v17 = *(__int64 **)v10;
        if ( v8 == *(_QWORD *)v10 )
        {
          v17 = *(__int64 **)(v10 + 16);
          if ( !*((_BYTE *)v17 + 24) )
          {
            *((_BYTE *)v17 + 24) = 1;
            *(_BYTE *)(v10 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>::_Lrotate(a1, v10);
            v17 = *(__int64 **)(v10 + 16);
          }
          if ( *((_BYTE *)v17 + 25) )
            goto LABEL_53;
          v6 = *v17;
          if ( *(_BYTE *)(*v17 + 24) != 1 || *(_BYTE *)(v17[2] + 24) != 1 )
          {
            if ( *(_BYTE *)(v17[2] + 24) == 1 )
            {
              *(_BYTE *)(v6 + 24) = 1;
              *((_BYTE *)v17 + 24) = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>::_Rrotate(
                a1,
                v17,
                v6,
                v10);
              v17 = *(__int64 **)(v10 + 16);
            }
            *((_BYTE *)v17 + 24) = *(_BYTE *)(v10 + 24);
            *(_BYTE *)(v10 + 24) = 1;
            *(_BYTE *)(v17[2] + 24) = 1;
            std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>::_Lrotate(a1, v10);
            break;
          }
        }
        else
        {
          if ( !*((_BYTE *)v17 + 24) )
          {
            *((_BYTE *)v17 + 24) = 1;
            *(_BYTE *)(v10 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>::_Rrotate(
              a1,
              v10,
              v6,
              v10);
            v17 = *(__int64 **)v10;
          }
          if ( *((_BYTE *)v17 + 25) )
            goto LABEL_53;
          v18 = v17[2];
          if ( *(_BYTE *)(v18 + 24) != 1 || *(_BYTE *)(*v17 + 24) != 1 )
          {
            if ( *(_BYTE *)(*v17 + 24) == 1 )
            {
              *(_BYTE *)(v18 + 24) = 1;
              *((_BYTE *)v17 + 24) = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>::_Lrotate(
                a1,
                v17);
              v17 = *(__int64 **)v10;
            }
            *((_BYTE *)v17 + 24) = *(_BYTE *)(v10 + 24);
            *(_BYTE *)(v10 + 24) = 1;
            *(_BYTE *)(*v17 + 24) = 1;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>::_Rrotate(
              a1,
              v10,
              v6,
              v10);
            break;
          }
        }
        *((_BYTE *)v17 + 24) = 0;
LABEL_53:
        v8 = v16;
        v10 = *(_QWORD *)(v10 + 8);
      }
      while ( v16 != *(_QWORD *)(*a1 + 8LL) );
    }
    *(_BYTE *)(v8 + 24) = 1;
  }
  v19 = a1[1];
  if ( v19 )
    a1[1] = v19 - 1;
  return v7;
}

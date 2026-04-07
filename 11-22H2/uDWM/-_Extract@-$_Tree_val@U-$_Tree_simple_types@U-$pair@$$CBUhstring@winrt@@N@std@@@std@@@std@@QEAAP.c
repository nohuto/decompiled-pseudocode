/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@N@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@N@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800B8888
 * Callers:
 *     ?OnWindowDataDestroyed@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@@Z @ 0x1800551B4 (-OnWindowDataDestroyed@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@@2@V32@@Z @ 0x1800B8E30 (-erase@-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWindowData@@@std@@V-$allocator@PEAV.c)
 *     ?Remove@?$map_base@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@N@winrt@@QEAAXAEBUhstring@2@@Z @ 0x1800FEE0C (-Remove@-$map_base@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$less@Uhstring@winrt@@.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@N@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800B7684 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winr.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@N@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@2@@Z @ 0x1800B8C6C (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@N@std@@@std@@@std@@QEAAX.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@SAPEAU?$_Tree_node@PEAVCWindowData@@PEAX@2@PEAU32@@Z @ 0x1800B8CBC (-_Min@-$_Tree_val@U-$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@SAPEAU-$_Tree_node@PEAVCWin.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@QEAAXPEAU?$_Tree_node@PEAVCWindowData@@PEAX@2@@Z @ 0x1800B8CE0 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@QEAAXPEAU-$_Tree_node@P.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,double>>>::_Extract(
        __int64 **a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 *v4; // r11
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 *v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 *v12; // rcx
  char v13; // dl
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *v17; // rcx
  __int64 *v19; // [rsp+38h] [rbp+10h] BYREF

  v19 = (__int64 *)a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,double>>>,std::_Iterator_base0>::operator++((__int64 *)&v19);
  v5 = v4[2];
  if ( *(_BYTE *)(*v4 + 25) )
    goto LABEL_5;
  if ( *(_BYTE *)(v5 + 25) )
  {
    v5 = *v4;
LABEL_5:
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
    if ( (__int64 *)**a1 == v4 )
    {
      if ( *(_BYTE *)(v5 + 25) )
        v9 = v7;
      else
        v9 = std::_Tree_val<std::_Tree_simple_types<CWindowData *>>::_Min(v5, v3, v8);
      *v8 = v9;
    }
    if ( (__int64 *)(*a1)[2] == v4 )
    {
      if ( *(_BYTE *)(v5 + 25) )
      {
        v10 = v7;
      }
      else
      {
        v11 = *(_QWORD *)(v5 + 16);
        v10 = v5;
        while ( !*(_BYTE *)(v11 + 25) )
        {
          v10 = v11;
          v11 = *(_QWORD *)(v11 + 16);
        }
      }
      (*a1)[2] = v10;
    }
    goto LABEL_35;
  }
  v6 = (__int64)v19;
  v5 = v19[2];
  if ( v19 == v4 )
    goto LABEL_5;
  *(_QWORD *)(*v4 + 8) = v19;
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
    v12 = (__int64 *)v4[1];
    if ( (__int64 *)*v12 == v4 )
      *v12 = v6;
    else
      v12[2] = v6;
  }
  v13 = *(_BYTE *)(v6 + 24);
  *(_QWORD *)(v6 + 8) = v4[1];
  *(_BYTE *)(v6 + 24) = *((_BYTE *)v4 + 24);
  *((_BYTE *)v4 + 24) = v13;
LABEL_35:
  if ( *((_BYTE *)v4 + 24) == 1 )
  {
    if ( v5 != (*a1)[1] )
    {
      do
      {
        v14 = v7;
        if ( *(_BYTE *)(v5 + 24) != 1 )
          break;
        v15 = *(_QWORD *)v7;
        if ( v5 == *(_QWORD *)v7 )
        {
          v15 = *(_QWORD *)(v7 + 16);
          if ( !*(_BYTE *)(v15 + 24) )
          {
            *(_BYTE *)(v15 + 24) = 1;
            *(_BYTE *)(v7 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,double>>>::_Lrotate(a1);
            v15 = *(_QWORD *)(v7 + 16);
          }
          if ( *(_BYTE *)(v15 + 25) )
            goto LABEL_53;
          if ( *(_BYTE *)(*(_QWORD *)v15 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(v15 + 16) + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(v15 + 16) + 24LL) == 1 )
            {
              *(_BYTE *)(*(_QWORD *)v15 + 24LL) = 1;
              *(_BYTE *)(v15 + 24) = 0;
              std::_Tree_val<std::_Tree_simple_types<CWindowData *>>::_Rrotate(a1, v15);
              v15 = *(_QWORD *)(v7 + 16);
            }
            *(_BYTE *)(v15 + 24) = *(_BYTE *)(v7 + 24);
            *(_BYTE *)(v7 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)(v15 + 16) + 24LL) = 1;
            std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,double>>>::_Lrotate(a1);
            break;
          }
        }
        else
        {
          if ( !*(_BYTE *)(v15 + 24) )
          {
            *(_BYTE *)(v15 + 24) = 1;
            *(_BYTE *)(v7 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<CWindowData *>>::_Rrotate(a1, v7);
            v15 = *(_QWORD *)v7;
          }
          if ( *(_BYTE *)(v15 + 25) )
            goto LABEL_53;
          v16 = *(_QWORD *)(v15 + 16);
          if ( *(_BYTE *)(v16 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v15 + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)v15 + 24LL) == 1 )
            {
              *(_BYTE *)(v16 + 24) = 1;
              *(_BYTE *)(v15 + 24) = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,double>>>::_Lrotate(a1);
              v15 = *(_QWORD *)v7;
            }
            *(_BYTE *)(v15 + 24) = *(_BYTE *)(v7 + 24);
            *(_BYTE *)(v7 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)v15 + 24LL) = 1;
            std::_Tree_val<std::_Tree_simple_types<CWindowData *>>::_Rrotate(a1, v7);
            break;
          }
        }
        *(_BYTE *)(v15 + 24) = 0;
LABEL_53:
        v5 = v14;
        v7 = *(_QWORD *)(v7 + 8);
      }
      while ( v14 != (*a1)[1] );
    }
    *(_BYTE *)(v5 + 24) = 1;
  }
  v17 = a1[1];
  if ( v17 )
    a1[1] = (__int64 *)((char *)v17 - 1);
  return v4;
}

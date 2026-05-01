/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18002E9AC
 * Callers:
 *     ?OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800998E0 (-OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHAN.c)
 *     _lambda_16e39da7052e4c67737ceb9c18ac8be9_::operator() @ 0x180109928 (_lambda_16e39da7052e4c67737ceb9c18ac8be9_--operator().c)
 *     _lambda_687e5a8c7a4f05ed052b2b78739515ed_::operator() @ 0x18041BC48 (_lambda_687e5a8c7a4f05ed052b2b78739515ed_--operator().c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18002EA80 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x1801B81D8 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$ComPtr@UIObjectCollection@@@WRL@Micr.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@2@@Z @ 0x1801B8228 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x1803E74E0 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,DisplayRegionInfo>>>::_Extract(
        __int64 **a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 *v4; // r11
  __int64 v5; // r10
  __int64 v6; // r9
  __int64 *v7; // r8
  __int64 *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  char v11; // dl
  __int64 *v12; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 *v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // [rsp+38h] [rbp+10h] BYREF

  v20 = a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>>>,std::_Iterator_base0>::operator++(&v20);
  v5 = v4[2];
  if ( *(_BYTE *)(*v4 + 25) )
    goto LABEL_2;
  if ( *(_BYTE *)(v5 + 25) )
  {
    v5 = *v4;
LABEL_2:
    v6 = v4[1];
    if ( !*(_BYTE *)(v5 + 25) )
      *(_QWORD *)(v5 + 8) = v6;
    if ( (__int64 *)(*a1)[1] == v4 )
    {
      (*a1)[1] = v5;
    }
    else if ( *(__int64 **)v6 == v4 )
    {
      *(_QWORD *)v6 = v5;
    }
    else
    {
      *(_QWORD *)(v6 + 16) = v5;
    }
    v7 = *a1;
    v8 = *a1;
    if ( (__int64 *)**a1 == v4 )
    {
      if ( *(_BYTE *)(v5 + 25) )
        v9 = v6;
      else
        v9 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>::_Min(
               v5,
               v3,
               v7,
               v6);
      *v7 = v9;
      v7 = *a1;
      v8 = *a1;
    }
    if ( (__int64 *)v8[2] == v4 )
    {
      if ( *(_BYTE *)(v5 + 25) )
      {
        v10 = v6;
      }
      else
      {
        v15 = *(_QWORD *)(v5 + 16);
        v10 = v5;
        if ( !*(_BYTE *)(v15 + 25) )
        {
          do
          {
            v10 = v15;
            v15 = *(_QWORD *)(v15 + 16);
          }
          while ( !*(_BYTE *)(v15 + 25) );
          v8 = v7;
        }
      }
      v8[2] = v10;
    }
    v11 = *((_BYTE *)v4 + 24);
    goto LABEL_15;
  }
  v14 = v20;
  v5 = *(_QWORD *)(v20 + 16);
  if ( (__int64 *)v20 == v4 )
    goto LABEL_2;
  *(_QWORD *)(*v4 + 8) = v20;
  *(_QWORD *)v14 = *v4;
  if ( v14 == v4[2] )
  {
    v6 = v14;
  }
  else
  {
    v6 = *(_QWORD *)(v14 + 8);
    if ( !*(_BYTE *)(v5 + 25) )
      *(_QWORD *)(v5 + 8) = v6;
    *(_QWORD *)v6 = v5;
    *(_QWORD *)(v14 + 16) = v4[2];
    *(_QWORD *)(v4[2] + 8) = v14;
  }
  if ( (__int64 *)(*a1)[1] == v4 )
  {
    (*a1)[1] = v14;
  }
  else
  {
    v16 = (__int64 *)v4[1];
    if ( (__int64 *)*v16 == v4 )
      *v16 = v14;
    else
      v16[2] = v14;
  }
  v11 = *(_BYTE *)(v14 + 24);
  *(_QWORD *)(v14 + 8) = v4[1];
  *(_BYTE *)(v14 + 24) = *((_BYTE *)v4 + 24);
  *((_BYTE *)v4 + 24) = v11;
LABEL_15:
  if ( v11 != 1 )
    goto LABEL_18;
  if ( v5 != (*a1)[1] )
  {
    do
    {
      v17 = v6;
      if ( *(_BYTE *)(v5 + 24) != 1 )
        break;
      v18 = *(_QWORD *)v6;
      if ( v5 == *(_QWORD *)v6 )
      {
        v18 = *(_QWORD *)(v6 + 16);
        if ( !*(_BYTE *)(v18 + 24) )
        {
          *(_BYTE *)(v18 + 24) = 1;
          *(_BYTE *)(v6 + 24) = 0;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(a1);
          v18 = *(_QWORD *)(v6 + 16);
        }
        if ( *(_BYTE *)(v18 + 25) )
          goto LABEL_58;
        if ( *(_BYTE *)(*(_QWORD *)v18 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(v18 + 16) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(v18 + 16) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v18 + 24LL) = 1;
            *(_BYTE *)(v18 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(a1, v18);
            v18 = *(_QWORD *)(v6 + 16);
          }
          *(_BYTE *)(v18 + 24) = *(_BYTE *)(v6 + 24);
          *(_BYTE *)(v6 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(v18 + 16) + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(a1);
          break;
        }
      }
      else
      {
        if ( !*(_BYTE *)(v18 + 24) )
        {
          *(_BYTE *)(v18 + 24) = 1;
          *(_BYTE *)(v6 + 24) = 0;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(a1, v6);
          v18 = *(_QWORD *)v6;
        }
        if ( *(_BYTE *)(v18 + 25) )
          goto LABEL_58;
        v19 = *(_QWORD *)(v18 + 16);
        if ( *(_BYTE *)(v19 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v18 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v18 + 24LL) == 1 )
          {
            *(_BYTE *)(v19 + 24) = 1;
            *(_BYTE *)(v18 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(a1);
            v18 = *(_QWORD *)v6;
          }
          *(_BYTE *)(v18 + 24) = *(_BYTE *)(v6 + 24);
          *(_BYTE *)(v6 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v18 + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(a1, v6);
          break;
        }
      }
      *(_BYTE *)(v18 + 24) = 0;
LABEL_58:
      v5 = v17;
      v6 = *(_QWORD *)(v6 + 8);
    }
    while ( v17 != (*a1)[1] );
  }
  *(_BYTE *)(v5 + 24) = 1;
LABEL_18:
  v12 = a1[1];
  if ( v12 )
    a1[1] = (__int64 *)((char *)v12 - 1);
  return v4;
}

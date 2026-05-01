/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18010A5A0
 * Callers:
 *     _lambda_37b02de6af5cc70082ddb03b5db08654_::operator() @ 0x180108738 (_lambda_37b02de6af5cc70082ddb03b5db08654_--operator().c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18010A684 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4WindowingEn.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x1801B81D8 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$ComPtr@UIObjectCollection@@@WRL@Micr.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@2@@Z @ 0x1801B8228 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x1803E74E0 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>>>::_Extract(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 *v6; // r11
  __int64 v7; // r10
  __int64 v8; // r9
  __int64 *v9; // r8
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  char v13; // dl
  __int64 *v14; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 *v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // [rsp+38h] [rbp+10h] BYREF

  v22 = a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(
    &v22,
    a2,
    a3,
    a4);
  v7 = v6[2];
  if ( *(_BYTE *)(*v6 + 25) )
    goto LABEL_2;
  if ( *(_BYTE *)(v7 + 25) )
  {
    v7 = *v6;
LABEL_2:
    v8 = v6[1];
    if ( !*(_BYTE *)(v7 + 25) )
      *(_QWORD *)(v7 + 8) = v8;
    if ( (__int64 *)(*a1)[1] == v6 )
    {
      (*a1)[1] = v7;
    }
    else if ( *(__int64 **)v8 == v6 )
    {
      *(_QWORD *)v8 = v7;
    }
    else
    {
      *(_QWORD *)(v8 + 16) = v7;
    }
    v9 = *a1;
    v10 = *a1;
    if ( (__int64 *)**a1 == v6 )
    {
      if ( *(_BYTE *)(v7 + 25) )
        v11 = v8;
      else
        v11 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>::_Min(
                v7,
                v5,
                v9,
                v8);
      *v9 = v11;
      v9 = *a1;
      v10 = *a1;
    }
    if ( (__int64 *)v10[2] == v6 )
    {
      if ( *(_BYTE *)(v7 + 25) )
      {
        v12 = v8;
      }
      else
      {
        v17 = *(_QWORD *)(v7 + 16);
        v12 = v7;
        if ( !*(_BYTE *)(v17 + 25) )
        {
          do
          {
            v12 = v17;
            v17 = *(_QWORD *)(v17 + 16);
          }
          while ( !*(_BYTE *)(v17 + 25) );
          v10 = v9;
        }
      }
      v10[2] = v12;
    }
    v13 = *((_BYTE *)v6 + 24);
    goto LABEL_15;
  }
  v16 = v22;
  v7 = *(_QWORD *)(v22 + 16);
  if ( (__int64 *)v22 == v6 )
    goto LABEL_2;
  *(_QWORD *)(*v6 + 8) = v22;
  *(_QWORD *)v16 = *v6;
  if ( v16 == v6[2] )
  {
    v8 = v16;
  }
  else
  {
    v8 = *(_QWORD *)(v16 + 8);
    if ( !*(_BYTE *)(v7 + 25) )
      *(_QWORD *)(v7 + 8) = v8;
    *(_QWORD *)v8 = v7;
    *(_QWORD *)(v16 + 16) = v6[2];
    *(_QWORD *)(v6[2] + 8) = v16;
  }
  if ( (__int64 *)(*a1)[1] == v6 )
  {
    (*a1)[1] = v16;
  }
  else
  {
    v18 = (__int64 *)v6[1];
    if ( (__int64 *)*v18 == v6 )
      *v18 = v16;
    else
      v18[2] = v16;
  }
  v13 = *(_BYTE *)(v16 + 24);
  *(_QWORD *)(v16 + 8) = v6[1];
  *(_BYTE *)(v16 + 24) = *((_BYTE *)v6 + 24);
  *((_BYTE *)v6 + 24) = v13;
LABEL_15:
  if ( v13 != 1 )
    goto LABEL_18;
  if ( v7 != (*a1)[1] )
  {
    do
    {
      v19 = v8;
      if ( *(_BYTE *)(v7 + 24) != 1 )
        break;
      v20 = *(_QWORD *)v8;
      if ( v7 == *(_QWORD *)v8 )
      {
        v20 = *(_QWORD *)(v8 + 16);
        if ( !*(_BYTE *)(v20 + 24) )
        {
          *(_BYTE *)(v20 + 24) = 1;
          *(_BYTE *)(v8 + 24) = 0;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(a1);
          v20 = *(_QWORD *)(v8 + 16);
        }
        if ( *(_BYTE *)(v20 + 25) )
          goto LABEL_58;
        if ( *(_BYTE *)(*(_QWORD *)v20 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(v20 + 16) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(v20 + 16) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v20 + 24LL) = 1;
            *(_BYTE *)(v20 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(a1, v20);
            v20 = *(_QWORD *)(v8 + 16);
          }
          *(_BYTE *)(v20 + 24) = *(_BYTE *)(v8 + 24);
          *(_BYTE *)(v8 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(v20 + 16) + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(a1);
          break;
        }
      }
      else
      {
        if ( !*(_BYTE *)(v20 + 24) )
        {
          *(_BYTE *)(v20 + 24) = 1;
          *(_BYTE *)(v8 + 24) = 0;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(a1, v8);
          v20 = *(_QWORD *)v8;
        }
        if ( *(_BYTE *)(v20 + 25) )
          goto LABEL_58;
        v21 = *(_QWORD *)(v20 + 16);
        if ( *(_BYTE *)(v21 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v20 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v20 + 24LL) == 1 )
          {
            *(_BYTE *)(v21 + 24) = 1;
            *(_BYTE *)(v20 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(a1);
            v20 = *(_QWORD *)v8;
          }
          *(_BYTE *)(v20 + 24) = *(_BYTE *)(v8 + 24);
          *(_BYTE *)(v8 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v20 + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(a1, v8);
          break;
        }
      }
      *(_BYTE *)(v20 + 24) = 0;
LABEL_58:
      v7 = v19;
      v8 = *(_QWORD *)(v8 + 8);
    }
    while ( v19 != (*a1)[1] );
  }
  *(_BYTE *)(v7 + 24) = 1;
LABEL_18:
  v14 = a1[1];
  if ( v14 )
    a1[1] = (__int64 *)((char *)v14 - 1);
  return v6;
}

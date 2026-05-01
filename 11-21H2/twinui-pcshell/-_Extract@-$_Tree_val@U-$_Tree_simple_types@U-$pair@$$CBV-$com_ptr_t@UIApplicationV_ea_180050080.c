/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180050080
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA_KAEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18004FF64 (-erase@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180050150 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x1801B81D8 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$ComPtr@UIObjectCollection@@@WRL@Micr.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@2@@Z @ 0x1801B8228 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x1803E74E0 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem,wil::err_exception_policy>>>>::_Extract(
        __int64 **a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdx
  __int64 *v5; // r11
  __int64 v6; // r10
  __int64 v7; // r9
  __int64 *v8; // r8
  __int64 *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  char v12; // dl
  __int64 *v13; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // [rsp+38h] [rbp+10h] BYREF

  v21 = a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(
    &v21,
    a2,
    a3);
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
    if ( (__int64 *)(*a1)[1] == v5 )
    {
      (*a1)[1] = v6;
    }
    else if ( *(__int64 **)v7 == v5 )
    {
      *(_QWORD *)v7 = v6;
    }
    else
    {
      *(_QWORD *)(v7 + 16) = v6;
    }
    v8 = *a1;
    v9 = *a1;
    if ( (__int64 *)**a1 == v5 )
    {
      if ( *(_BYTE *)(v6 + 25) )
        v10 = v7;
      else
        v10 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>::_Min(
                v6,
                v4,
                v8,
                v7);
      *v8 = v10;
      v8 = *a1;
      v9 = *a1;
    }
    if ( (__int64 *)v9[2] == v5 )
    {
      if ( *(_BYTE *)(v6 + 25) )
      {
        v11 = v7;
      }
      else
      {
        v16 = *(_QWORD *)(v6 + 16);
        v11 = v6;
        if ( !*(_BYTE *)(v16 + 25) )
        {
          do
          {
            v11 = v16;
            v16 = *(_QWORD *)(v16 + 16);
          }
          while ( !*(_BYTE *)(v16 + 25) );
          v9 = v8;
        }
      }
      v9[2] = v11;
    }
    v12 = *((_BYTE *)v5 + 24);
    goto LABEL_16;
  }
  v15 = v21;
  v6 = *(_QWORD *)(v21 + 16);
  if ( (__int64 *)v21 == v5 )
    goto LABEL_2;
  *(_QWORD *)(*v5 + 8) = v21;
  *(_QWORD *)v15 = *v5;
  if ( v15 == v5[2] )
  {
    v7 = v15;
  }
  else
  {
    v7 = *(_QWORD *)(v15 + 8);
    if ( !*(_BYTE *)(v6 + 25) )
      *(_QWORD *)(v6 + 8) = v7;
    *(_QWORD *)v7 = v6;
    *(_QWORD *)(v15 + 16) = v5[2];
    *(_QWORD *)(v5[2] + 8) = v15;
  }
  if ( (__int64 *)(*a1)[1] == v5 )
  {
    (*a1)[1] = v15;
  }
  else
  {
    v17 = (__int64 *)v5[1];
    if ( (__int64 *)*v17 == v5 )
      *v17 = v15;
    else
      v17[2] = v15;
  }
  v12 = *(_BYTE *)(v15 + 24);
  *(_QWORD *)(v15 + 8) = v5[1];
  *(_BYTE *)(v15 + 24) = *((_BYTE *)v5 + 24);
  *((_BYTE *)v5 + 24) = v12;
LABEL_16:
  if ( v12 != 1 )
    goto LABEL_17;
  if ( v6 != (*a1)[1] )
  {
    do
    {
      v18 = v7;
      if ( *(_BYTE *)(v6 + 24) != 1 )
        break;
      v19 = *(_QWORD *)v7;
      if ( v6 == *(_QWORD *)v7 )
      {
        v19 = *(_QWORD *)(v7 + 16);
        if ( !*(_BYTE *)(v19 + 24) )
        {
          *(_BYTE *)(v19 + 24) = 1;
          *(_BYTE *)(v7 + 24) = 0;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(a1);
          v19 = *(_QWORD *)(v7 + 16);
        }
        if ( *(_BYTE *)(v19 + 25) )
          goto LABEL_57;
        if ( *(_BYTE *)(*(_QWORD *)v19 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(v19 + 16) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(v19 + 16) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v19 + 24LL) = 1;
            *(_BYTE *)(v19 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(a1, v19);
            v19 = *(_QWORD *)(v7 + 16);
          }
          *(_BYTE *)(v19 + 24) = *(_BYTE *)(v7 + 24);
          *(_BYTE *)(v7 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(v19 + 16) + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(a1);
          break;
        }
      }
      else
      {
        if ( !*(_BYTE *)(v19 + 24) )
        {
          *(_BYTE *)(v19 + 24) = 1;
          *(_BYTE *)(v7 + 24) = 0;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(a1, v7);
          v19 = *(_QWORD *)v7;
        }
        if ( *(_BYTE *)(v19 + 25) )
          goto LABEL_57;
        v20 = *(_QWORD *)(v19 + 16);
        if ( *(_BYTE *)(v20 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v19 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v19 + 24LL) == 1 )
          {
            *(_BYTE *)(v20 + 24) = 1;
            *(_BYTE *)(v19 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(a1);
            v19 = *(_QWORD *)v7;
          }
          *(_BYTE *)(v19 + 24) = *(_BYTE *)(v7 + 24);
          *(_BYTE *)(v7 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v19 + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(a1, v7);
          break;
        }
      }
      *(_BYTE *)(v19 + 24) = 0;
LABEL_57:
      v6 = v18;
      v7 = *(_QWORD *)(v7 + 8);
    }
    while ( v18 != (*a1)[1] );
  }
  *(_BYTE *)(v6 + 24) = 1;
LABEL_17:
  v13 = a1[1];
  if ( v13 )
    a1[1] = (__int64 *)((char *)v13 - 1);
  return v5;
}

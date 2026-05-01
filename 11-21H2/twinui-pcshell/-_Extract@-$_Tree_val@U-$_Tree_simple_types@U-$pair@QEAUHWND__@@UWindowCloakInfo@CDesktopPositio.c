/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18002E210
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEAUHWND__@@@Z @ 0x1801414D0 (-erase@-$_Tree@V-$_Tmap_traits@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U-$less@PEAUHWND.c)
 * Callees:
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@PEAX@2@@Z @ 0x180042FB4 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@UIApplicationView@@Uerr_exc.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180139FF4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_ea_180139FF4.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x1801B81D8 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$ComPtr@UIObjectCollection@@@WRL@Micr.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Extract(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 *v3; // r11
  __int64 **v4; // r10
  __int64 *v5; // r9
  __int64 *v6; // rax
  char v7; // dl
  __int64 v8; // rcx
  __int64 *i; // rcx
  __int64 *v11; // rax
  __int64 *v12; // rdx
  __int64 *v13; // rcx
  __int64 **v14; // rcx
  __int64 *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // [rsp+38h] [rbp+10h] BYREF

  v18 = a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++(&v18);
  v4 = (__int64 **)v3[2];
  if ( *(_BYTE *)(*v3 + 25) )
    goto LABEL_2;
  if ( *((_BYTE *)v4 + 25) )
  {
    v4 = (__int64 **)*v3;
    goto LABEL_2;
  }
  v11 = v18;
  v4 = (__int64 **)v18[2];
  if ( v18 == v3 )
  {
LABEL_2:
    v5 = (__int64 *)v3[1];
    if ( !*((_BYTE *)v4 + 25) )
      v4[1] = v5;
    if ( *(__int64 **)(*a1 + 8LL) == v3 )
    {
      *(_QWORD *)(*a1 + 8LL) = v4;
    }
    else if ( (__int64 *)*v5 == v3 )
    {
      *v5 = (__int64)v4;
    }
    else
    {
      v5[2] = (__int64)v4;
    }
    if ( *(__int64 **)*a1 == v3 )
    {
      if ( *((_BYTE *)v4 + 25) )
      {
        i = v5;
      }
      else
      {
        v12 = *v4;
        for ( i = (__int64 *)v4; !*((_BYTE *)v12 + 25); v12 = (__int64 *)*v12 )
          i = v12;
      }
      *(_QWORD *)*a1 = i;
    }
    if ( *(__int64 **)(*a1 + 16LL) == v3 )
    {
      if ( *((_BYTE *)v4 + 25) )
      {
        v6 = v5;
      }
      else
      {
        v13 = v4[2];
        v6 = (__int64 *)v4;
        while ( !*((_BYTE *)v13 + 25) )
        {
          v6 = v13;
          v13 = (__int64 *)v13[2];
        }
      }
      *(_QWORD *)(*a1 + 16LL) = v6;
    }
    v7 = *((_BYTE *)v3 + 24);
    goto LABEL_13;
  }
  *(_QWORD *)(*v3 + 8) = v18;
  *v11 = *v3;
  if ( v11 == (__int64 *)v3[2] )
  {
    v5 = v11;
  }
  else
  {
    v5 = (__int64 *)v11[1];
    if ( !*((_BYTE *)v4 + 25) )
      v4[1] = v5;
    *v5 = (__int64)v4;
    v11[2] = v3[2];
    *(_QWORD *)(v3[2] + 8) = v11;
  }
  if ( *(__int64 **)(*a1 + 8LL) == v3 )
  {
    *(_QWORD *)(*a1 + 8LL) = v11;
  }
  else
  {
    v14 = (__int64 **)v3[1];
    if ( *v14 == v3 )
      *v14 = v11;
    else
      v14[2] = v11;
  }
  v7 = *((_BYTE *)v11 + 24);
  v11[1] = v3[1];
  *((_BYTE *)v11 + 24) = *((_BYTE *)v3 + 24);
  *((_BYTE *)v3 + 24) = v7;
LABEL_13:
  if ( v7 != 1 )
    goto LABEL_14;
  if ( v4 != *(__int64 ***)(*a1 + 8LL) )
  {
    do
    {
      v15 = v5;
      if ( *((_BYTE *)v4 + 24) != 1 )
        break;
      v16 = *v5;
      if ( v4 == (__int64 **)*v5 )
      {
        v16 = v5[2];
        if ( !*(_BYTE *)(v16 + 24) )
        {
          *(_BYTE *)(v16 + 24) = 1;
          *((_BYTE *)v5 + 24) = 0;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(a1);
          v16 = v5[2];
        }
        if ( *(_BYTE *)(v16 + 25) )
          goto LABEL_60;
        if ( *(_BYTE *)(*(_QWORD *)v16 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(v16 + 16) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(v16 + 16) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v16 + 24LL) = 1;
            *(_BYTE *)(v16 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>::_Rrotate(
              a1,
              v16);
            v16 = v5[2];
          }
          *(_BYTE *)(v16 + 24) = *((_BYTE *)v5 + 24);
          *((_BYTE *)v5 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(v16 + 16) + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(a1);
          break;
        }
      }
      else
      {
        if ( !*(_BYTE *)(v16 + 24) )
        {
          *(_BYTE *)(v16 + 24) = 1;
          *((_BYTE *)v5 + 24) = 0;
          std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>::_Rrotate(
            a1,
            v5);
          v16 = *v5;
        }
        if ( *(_BYTE *)(v16 + 25) )
          goto LABEL_60;
        v17 = *(_QWORD *)(v16 + 16);
        if ( *(_BYTE *)(v17 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v16 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v16 + 24LL) == 1 )
          {
            *(_BYTE *)(v17 + 24) = 1;
            *(_BYTE *)(v16 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(a1);
            v16 = *v5;
          }
          *(_BYTE *)(v16 + 24) = *((_BYTE *)v5 + 24);
          *((_BYTE *)v5 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v16 + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>::_Rrotate(
            a1,
            v5);
          break;
        }
      }
      *(_BYTE *)(v16 + 24) = 0;
LABEL_60:
      v4 = (__int64 **)v15;
      v5 = (__int64 *)v5[1];
    }
    while ( v15 != *(__int64 **)(*a1 + 8LL) );
  }
  *((_BYTE *)v4 + 24) = 1;
LABEL_14:
  v8 = a1[1];
  if ( v8 )
    a1[1] = v8 - 1;
  return v3;
}

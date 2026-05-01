/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEAUHWND__@@@Z @ 0x1801414D0
 * Callers:
 *     ?OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800998E0 (-OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHAN.c)
 * Callees:
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18002E210 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositio.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@1@@Z @ 0x1800AAC88 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositione.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180139FF4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_ea_180139FF4.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<HWND__ *,CDesktopPositioner::WindowCloakInfo,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>,0>>::erase(
        __int64 **a1,
        unsigned __int64 *a2)
{
  __int64 *v2; // rdi
  __int64 *v4; // r10
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // rcx
  __int64 *v9; // rax
  __int64 v10; // rsi
  __int64 *v11; // r10
  __int64 *v12; // rax
  __int64 *v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v4 = *a1;
  v5 = *a1;
  v6 = (*a1)[1];
  v7 = v6;
  if ( !*(_BYTE *)(v6 + 25) )
  {
    v8 = *a2;
    do
    {
      if ( *(_QWORD *)(v7 + 32) < v8 )
      {
        v7 = *(_QWORD *)(v7 + 16);
      }
      else
      {
        if ( *((_BYTE *)v5 + 25) && v8 < *(_QWORD *)(v7 + 32) )
          v5 = (__int64 *)v7;
        v4 = (__int64 *)v7;
        v7 = *(_QWORD *)v7;
      }
    }
    while ( !*(_BYTE *)(v7 + 25) );
  }
  if ( !*((_BYTE *)v5 + 25) )
    v6 = *v5;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    if ( *a2 < *(_QWORD *)(v6 + 32) )
    {
      v5 = (__int64 *)v6;
      v6 = *(_QWORD *)v6;
    }
    else
    {
      v6 = *(_QWORD *)(v6 + 16);
    }
  }
  v9 = v4;
  v10 = 0LL;
  v14 = v4;
  while ( v9 != v5 )
  {
    ++v10;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++(&v14);
    v9 = v14;
  }
  v14 = v4;
  if ( v4 == (__int64 *)*v2 && *((_BYTE *)v5 + 25) )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *>>>(
      (__int64)a1,
      (__int64)a1,
      (__int64 *)v2[1]);
    v2[1] = (__int64)v2;
    *v2 = (__int64)v2;
    v2[2] = (__int64)v2;
    a1[1] = 0LL;
  }
  else
  {
    while ( v4 != v5 )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++(&v14);
      v12 = std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Extract(
              a1,
              v11);
      std::_Deallocate<16,0>(v12, 0x30uLL);
      v4 = v14;
    }
  }
  return v10;
}

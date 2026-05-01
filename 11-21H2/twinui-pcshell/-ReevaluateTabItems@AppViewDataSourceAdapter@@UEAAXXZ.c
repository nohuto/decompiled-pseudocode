/*
 * XREFs of ?ReevaluateTabItems@AppViewDataSourceAdapter@@UEAAXXZ @ 0x180454FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?RemoveItemForView@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationView@@@Z @ 0x18004F31C (-RemoveItemForView@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationView@@@Z.c)
 *     ?InitializeAppViewItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x18004FB10 (-InitializeAppViewItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 *     ??0?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@@Z @ 0x18004FE34 (--0-$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@@.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180050150 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x18010A6CC (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@1@PEAU?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@1@@Z @ 0x1804534B4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@.c)
 *     ??$insert@$0A@$0A@@?$_Tree@V?$_Tset_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@_N@1@AEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1804536E4 (--$insert@$0A@$0A@@-$_Tree@V-$_Tset_traits@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall AppViewDataSourceAdapter::ReevaluateTabItems(AppViewDataSourceAdapter *this)
{
  size_t size_of; // rax
  _QWORD *v2; // rax
  ApplicationViewHelpers *v3; // rbx
  const char *v4; // r9
  const char *v5; // r9
  AppViewDataSourceAdapter *v6; // rsi
  __int64 v7; // rax
  __int64 i; // rax
  ApplicationViewHelpers *v9; // rcx
  struct IApplicationView *v10; // rdx
  HWND WindowForView; // rax
  HANDLE PropW; // rbx
  __int64 v13; // rdx
  struct IApplicationView *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // [rsp+20h] [rbp-58h] BYREF
  __int128 v23; // [rsp+28h] [rbp-50h] BYREF
  char v24[16]; // [rsp+38h] [rbp-40h] BYREF
  char v25[48]; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  ApplicationViewHelpers *v29; // [rsp+88h] [rbp+10h] BYREF
  ApplicationViewHelpers *v30; // [rsp+90h] [rbp+18h] BYREF
  __int64 v31; // [rsp+98h] [rbp+20h] BYREF

  try
  {
    v6 = this;
    v23 = 0LL;
    size_of = std::_Get_size_of_n<40>(1uLL);
    v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *v2 = v2;
    v2[1] = v2;
    v2[2] = v2;
    *((_WORD *)v2 + 12) = 257;
    *(_QWORD *)&v23 = v2;
    v18 = **((_QWORD **)v6 - 6);
    v22 = v18;
    while ( v18 != *((_QWORD *)v6 - 6) )
    {
      wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>::com_ptr_t<IApplicationView,wil::err_returncode_policy>(
        &v30,
        *(_QWORD *)(v18 + 32));
      WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(
                              (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v30,
                              v10);
      PropW = GetPropW(WindowForView, (LPCWSTR)0xA920);
      if ( PropW )
      {
        std::_Tree<std::_Tset_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,0>>::insert<0,0>(
          (__int64 *)&v23,
          (__int64)v24,
          (__int64 *)&v30);
        v13 = **((_QWORD **)v6 - 6);
        v31 = v13;
        while ( !*(_BYTE *)(v13 + 25) )
        {
          wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>::com_ptr_t<IApplicationView,wil::err_returncode_policy>(
            &v29,
            *(_QWORD *)(v13 + 32));
          if ( PropW == (HANDLE)ApplicationViewHelpers::GetWindowForView(
                                  (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v29,
                                  v14) )
          {
            std::_Tree<std::_Tset_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,0>>::insert<0,0>(
              (__int64 *)&v23,
              (__int64)v25,
              (__int64 *)&v29);
            wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v29);
            break;
          }
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v29);
          std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(
            &v31,
            v19,
            v20,
            v21);
          v13 = v31;
        }
      }
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v30);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(
        &v22,
        v15,
        v16,
        v17);
      v18 = v22;
    }
    v3 = *(ApplicationViewHelpers **)v23;
    while ( 1 )
    {
      v29 = v3;
      if ( v3 == (ApplicationViewHelpers *)v23 )
        break;
      try
      {
        AppViewDataSourceAdapterBase::RemoveItemForView(
          (AppViewDataSourceAdapter *)((char *)v6 - 184),
          *((struct IApplicationView **)v3 + 4));
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x118,
          (int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
          v5);
        v6 = this;
        v3 = v29;
      }
      v7 = *((_QWORD *)v3 + 2);
      if ( *(_BYTE *)(v7 + 25) )
      {
        for ( i = *((_QWORD *)v3 + 1);
              !*(_BYTE *)(i + 25) && v3 == *(ApplicationViewHelpers **)(i + 16);
              i = *(_QWORD *)(i + 8) )
        {
          v3 = (ApplicationViewHelpers *)i;
        }
        v3 = (ApplicationViewHelpers *)i;
      }
      else
      {
        v3 = (ApplicationViewHelpers *)*((_QWORD *)v3 + 2);
        v9 = *(ApplicationViewHelpers **)v7;
        if ( !*(_BYTE *)(*(_QWORD *)v7 + 25LL) )
        {
          do
          {
            v3 = v9;
            v9 = *(ApplicationViewHelpers **)v9;
          }
          while ( !*((_BYTE *)v9 + 25) );
        }
      }
    }
    AppViewDataSourceAdapter::InitializeAppViewItems((__int64 **)v6 - 24);
    std::_Tree_val<std::_Tree_simple_types<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>>::_Erase_tree<std::allocator<std::_Tree_node<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,void *>>>(
      (__int64)&v23,
      (__int64)&v23,
      *(_QWORD *)(v23 + 8));
    std::_Deallocate<16,0>((void *)v23, 0x28uLL);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x11E,
      (int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      v4);
  }
}

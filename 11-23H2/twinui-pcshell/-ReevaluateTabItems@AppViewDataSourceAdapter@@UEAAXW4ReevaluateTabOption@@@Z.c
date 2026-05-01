/*
 * XREFs of ?ReevaluateTabItems@AppViewDataSourceAdapter@@UEAAXW4ReevaluateTabOption@@@Z @ 0x18078F000
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InitializeAppViewItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x180082560 (-InitializeAppViewItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 *     ??0?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@@Z @ 0x180082848 (--0-$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@@.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1800C28A0 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUhstring@winrt@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801E8DE0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUhstring@win.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@1@PEAU?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@1@@Z @ 0x18078DC6C (--$_Erase_tree@V-$allocator@U-$_Tree_node@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@.c)
 *     ??$insert@$0A@$0A@@?$_Tree@V?$_Tset_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@_N@1@AEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18078E0B0 (--$insert@$0A@$0A@@-$_Tree@V-$_Tset_traits@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy.c)
 *     ?RemoveItemForView@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationView@@@Z @ 0x18078F4B0 (-RemoveItemForView@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall AppViewDataSourceAdapter::ReevaluateTabItems(__int64 a1, int a2)
{
  size_t size_of; // rax
  _QWORD *v4; // rax
  ApplicationViewHelpers *v5; // rbx
  const char *v6; // r9
  const char *v7; // r9
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 i; // rax
  ApplicationViewHelpers *v11; // rcx
  struct IApplicationView *v12; // rdx
  HWND WindowForView; // rax
  HANDLE PropW; // rbx
  __int64 v15; // rdx
  struct IApplicationView *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // [rsp+20h] [rbp-58h] BYREF
  __int64 v25; // [rsp+28h] [rbp-50h] BYREF
  __int128 v26; // [rsp+30h] [rbp-48h] BYREF
  char v27[16]; // [rsp+40h] [rbp-38h] BYREF
  char v28[40]; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  ApplicationViewHelpers *v31; // [rsp+90h] [rbp+18h] BYREF
  ApplicationViewHelpers *v32; // [rsp+98h] [rbp+20h] BYREF

  try
  {
    v8 = a1;
    v26 = 0LL;
    size_of = std::_Get_size_of_n<40>(1uLL);
    v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *v4 = v4;
    v4[1] = v4;
    v4[2] = v4;
    *((_WORD *)v4 + 12) = 257;
    *(_QWORD *)&v26 = v4;
    v20 = **(_QWORD **)(v8 - 32);
    v25 = v20;
    while ( v20 != *(_QWORD *)(v8 - 32) )
    {
      wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>::com_ptr_t<IApplicationView,wil::err_returncode_policy>(
        &v32,
        *(_QWORD *)(v20 + 32));
      WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(
                              (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v32,
                              v12);
      PropW = GetPropW(WindowForView, (LPCWSTR)0xA920);
      if ( PropW )
      {
        std::_Tree<std::_Tset_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,0>>::insert<0,0>(
          (__int64 *)&v26,
          (__int64)v27,
          (__int64 *)&v32);
        if ( !a2 )
        {
          v15 = **(_QWORD **)(v8 - 32);
          v24 = v15;
          while ( !*(_BYTE *)(v15 + 25) )
          {
            wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>::com_ptr_t<IApplicationView,wil::err_returncode_policy>(
              &v31,
              *(_QWORD *)(v15 + 32));
            if ( PropW == (HANDLE)ApplicationViewHelpers::GetWindowForView(
                                    (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v31,
                                    v16) )
            {
              std::_Tree<std::_Tset_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,0>>::insert<0,0>(
                (__int64 *)&v26,
                (__int64)v28,
                (__int64 *)&v31);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v31);
              break;
            }
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v31);
            std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,winrt::hstring>>>,std::_Iterator_base0>::operator++(
              &v24,
              v21,
              v22,
              v23);
            v15 = v24;
          }
        }
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v32);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,winrt::hstring>>>,std::_Iterator_base0>::operator++(
        &v25,
        v17,
        v18,
        v19);
      v20 = v25;
    }
    v5 = *(ApplicationViewHelpers **)v26;
    while ( 1 )
    {
      v31 = v5;
      if ( v5 == (ApplicationViewHelpers *)v26 )
        break;
      try
      {
        AppViewDataSourceAdapterBase::RemoveItemForView(
          (AppViewDataSourceAdapterBase *)(v8 - 128),
          *((struct IApplicationView **)v5 + 4));
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x120,
          (int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
          v7);
        v8 = a1;
        v5 = v31;
      }
      v9 = *((_QWORD *)v5 + 2);
      if ( *(_BYTE *)(v9 + 25) )
      {
        for ( i = *((_QWORD *)v5 + 1);
              !*(_BYTE *)(i + 25) && v5 == *(ApplicationViewHelpers **)(i + 16);
              i = *(_QWORD *)(i + 8) )
        {
          v5 = (ApplicationViewHelpers *)i;
        }
        v5 = (ApplicationViewHelpers *)i;
      }
      else
      {
        v5 = (ApplicationViewHelpers *)*((_QWORD *)v5 + 2);
        v11 = *(ApplicationViewHelpers **)v9;
        if ( !*(_BYTE *)(*(_QWORD *)v9 + 25LL) )
        {
          do
          {
            v5 = v11;
            v11 = *(ApplicationViewHelpers **)v11;
          }
          while ( !*((_BYTE *)v11 + 25) );
        }
      }
    }
    AppViewDataSourceAdapter::InitializeAppViewItems((AppViewDataSourceAdapter *)(v8 - 136));
    std::_Tree_val<std::_Tree_simple_types<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>>::_Erase_tree<std::allocator<std::_Tree_node<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,void *>>>(
      (__int64)&v26,
      (__int64)&v26,
      *(_QWORD *)(v26 + 8));
    std::_Deallocate<16,0>((void *)v26, 0x28uLL);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x126,
      (int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      v6);
  }
}

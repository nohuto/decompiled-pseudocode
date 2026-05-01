/*
 * XREFs of ??$_Insert_or_assign@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@?$map@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@U?$less@W4ShellView@Shell@UI@WindowsUdk@winrt@@@7@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@@7@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@PEAX@std@@_N@1@$$QEAW4ShellView@Shell@UI@WindowsUdk@winrt@@$$QEAV?$shared_ptr@VInputAppViewCoodinatorHandler@@@1@@Z @ 0x180094B70
 * Callers:
 *     ?InitializeViewCoordinators@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180094F5C (-InitializeViewCoordinators@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180093CF4 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winr.c)
 *     ?_Check_grow_by_1@?$_Tree@V?$_Tmap_traits@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@U?$less@W4ShellView@Shell@UI@WindowsUdk@winrt@@@7@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@@7@$0A@@std@@@std@@IEAAXXZ @ 0x180093D24 (-_Check_grow_by_1@-$_Tree@V-$_Tmap_traits@W4ShellView@Shell@UI@WindowsUdk@winrt@@V-$shared_ptr@V.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x180094A94 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winr.c)
 *     ??$_Find_lower_bound@W4ShellView@Shell@UI@WindowsUdk@winrt@@@?$_Tree@V?$_Tmap_traits@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@U?$less@W4ShellView@Shell@UI@WindowsUdk@winrt@@@7@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@@7@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@PEAX@std@@@1@AEBW4ShellView@Shell@UI@WindowsUdk@winrt@@@Z @ 0x180094C28 (--$_Find_lower_bound@W4ShellView@Shell@UI@WindowsUdk@winrt@@@-$_Tree@V-$_Tmap_traits@W4ShellView.c)
 *     ??$?0W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@PEAX@1@$$QEAW4ShellView@Shell@UI@WindowsUdk@winrt@@$$QEAV?$shared_ptr@VInputAppViewCoodinatorHandler@@@1@@Z @ 0x180094C70 (--$-0W4ShellView@Shell@UI@WindowsUdk@winrt@@V-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall std::map<enum winrt::WindowsUdk::UI::Shell::ShellView,std::shared_ptr<InputAppViewCoodinatorHandler>>::_Insert_or_assign<enum winrt::WindowsUdk::UI::Shell::ShellView,std::shared_ptr<InputAppViewCoodinatorHandler>>(
        _QWORD *a1,
        __int64 a2,
        _DWORD *a3,
        __int64 *a4)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  std::_Ref_count_base *v14; // rcx
  _BYTE v15[16]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<enum winrt::WindowsUdk::UI::Shell::ShellView,std::shared_ptr<InputAppViewCoodinatorHandler>,std::less<enum winrt::WindowsUdk::UI::Shell::ShellView>,std::allocator<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,std::shared_ptr<InputAppViewCoodinatorHandler>>>,0>>::_Find_lower_bound<enum winrt::WindowsUdk::UI::Shell::ShellView>(
    a1,
    &v16);
  v8 = v17;
  if ( *(_BYTE *)(v17 + 25) || *a3 < *(_DWORD *)(v17 + 32) )
  {
    std::_Tree<std::_Tmap_traits<enum winrt::WindowsUdk::UI::Shell::ShellView,std::shared_ptr<InputAppViewCoodinatorHandler>,std::less<enum winrt::WindowsUdk::UI::Shell::ShellView>,std::allocator<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,std::shared_ptr<InputAppViewCoodinatorHandler>>>,0>>::_Check_grow_by_1((__int64)a1);
    v9 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,std::shared_ptr<InputAppViewCoodinatorHandler>>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,std::shared_ptr<InputAppViewCoodinatorHandler>>,void *>>>(
           (unsigned int)v15,
           (_DWORD)a1,
           *a1,
           (_DWORD)a3,
           (__int64)a4);
    v10 = *(_QWORD *)(v9 + 8);
    *(_QWORD *)(v9 + 8) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,std::shared_ptr<InputAppViewCoodinatorHandler>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,std::shared_ptr<InputAppViewCoodinatorHandler>>,void *>>>((__int64)v15);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,std::shared_ptr<InputAppViewCoodinatorHandler>>>>::_Insert_node(
                      a1,
                      (__int64)&v16,
                      v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    v12 = *a4;
    *a4 = 0LL;
    v13 = a4[1];
    a4[1] = 0LL;
    v14 = *(std::_Ref_count_base **)(v8 + 48);
    *(_QWORD *)(v8 + 40) = v12;
    *(_QWORD *)(v8 + 48) = v13;
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}

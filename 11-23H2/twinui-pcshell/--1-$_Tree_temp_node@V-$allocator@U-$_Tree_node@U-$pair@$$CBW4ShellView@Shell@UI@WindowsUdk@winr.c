/*
 * XREFs of ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180093CF4
 * Callers:
 *     ??$_Insert_or_assign@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@?$map@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@U?$less@W4ShellView@Shell@UI@WindowsUdk@winrt@@@7@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@@7@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@PEAX@std@@_N@1@$$QEAW4ShellView@Shell@UI@WindowsUdk@winrt@@$$QEAV?$shared_ptr@VInputAppViewCoodinatorHandler@@@1@@Z @ 0x180094B70 (--$_Insert_or_assign@W4ShellView@Shell@UI@WindowsUdk@winrt@@V-$shared_ptr@VInputAppViewCoodinato.c)
 *     ??$_Try_emplace@W4ShellView@Shell@UI@WindowsUdk@winrt@@$$V@?$map@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@U?$less@W4ShellView@Shell@UI@WindowsUdk@winrt@@@7@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@@7@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@PEAX@std@@_N@1@$$QEAW4ShellView@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18050AB48 (--$_Try_emplace@W4ShellView@Shell@UI@WindowsUdk@winrt@@$$V@-$map@W4ShellView@Shell@UI@WindowsUdk.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,std::shared_ptr<InputAppViewCoodinatorHandler>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,std::shared_ptr<InputAppViewCoodinatorHandler>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  std::_Ref_count_base *v4; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v4 = *(std::_Ref_count_base **)(v2 + 48);
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
  }
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    std::_Deallocate<16,0>(v3, 56LL);
}

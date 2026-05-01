/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAW4ShellView@Shell@UI@WindowsUdk@winrt@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAW4ShellView@Shell@UI@WindowsUdk@winrt@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1805082C8
 * Callers:
 *     ??$_Try_emplace@W4ShellView@Shell@UI@WindowsUdk@winrt@@$$V@?$map@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@U?$less@W4ShellView@Shell@UI@WindowsUdk@winrt@@@7@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@@7@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@PEAX@std@@_N@1@$$QEAW4ShellView@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18050AB48 (--$_Try_emplace@W4ShellView@Shell@UI@WindowsUdk@winrt@@$$V@-$map@W4ShellView@Shell@UI@WindowsUdk.c)
 * Callees:
 *     ??0?$_Tree_temp_node_alloc@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@PEAX@std@@@1@@Z @ 0x180094D04 (--0-$_Tree_temp_node_alloc@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4ShellView@Shell@UI@WindowsUd.c)
 */

_QWORD *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,std::shared_ptr<InputAppViewCoodinatorHandler>>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,std::shared_ptr<InputAppViewCoodinatorHandler>>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD **a5)
{
  __int64 v7; // r9
  __int64 v8; // rcx

  std::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,std::shared_ptr<InputAppViewCoodinatorHandler>>,void *>>>::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,std::shared_ptr<InputAppViewCoodinatorHandler>>,void *>>>(
    a1,
    a2);
  v7 = a1[1];
  *(_DWORD *)(v7 + 32) = **a5;
  *(_QWORD *)(v7 + 40) = 0LL;
  v8 = 0LL;
  *(_QWORD *)(v7 + 48) = 0LL;
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  do
  {
    *(_BYTE *)(v8 + a1[1] + 24) = 0;
    ++v8;
  }
  while ( v8 < 2 );
  return a1;
}

/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBG@Z @ 0x180199F70
 * Callers:
 *     ?TaskSwitcherInvokedCallback@ControllerProcessor@@AEAAJAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z @ 0x1801987E0 (-TaskSwitcherInvokedCallback@ControllerProcessor@@AEAAJAEAV-$vector@U-$pair@G_N@std@@V-$allocato.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000E920 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_Erase_bucket@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@2@_K@Z @ 0x18009811C (-_Erase_bucket@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_comp.c)
 *     ??$_Find_last@G@?$_Hash@V?$_Umap_traits@GV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@PEAX@std@@@1@AEBG_K@Z @ 0x180194800 (--$_Find_last@G@-$_Hash@V-$_Umap_traits@GV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@.c)
 *     ?_Unchecked_erase@?$list@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@2@QEAU32@@Z @ 0x180199EAC (-_Unchecked_erase@-$list@U-$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@V-$allocat.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::erase(
        _QWORD *a1,
        const unsigned __int8 *a2)
{
  unsigned __int64 appended; // rdi
  _WORD *v4; // rdx
  _QWORD *v5; // rdx
  _QWORD **v6; // rdx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  appended = std::_Fnv1a_append_bytes((__int64)a1, a2, 2uLL);
  v5 = (_QWORD *)std::_Hash<std::_Umap_traits<unsigned short,std::unique_ptr<unsigned char [0]>,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>>,0>>::_Find_last<unsigned short>(
                   a1,
                   v8,
                   v4,
                   appended)[1];
  if ( !v5 )
    return 0LL;
  std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::_Erase_bucket(
    (__int64)a1,
    v5,
    appended & a1[6]);
  std::list<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>::_Unchecked_erase(
    (__int64)(a1 + 1),
    v6);
  return 1LL;
}

/*
 * XREFs of ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@1@V21@@Z @ 0x1801061A8
 * Callers:
 *     ?DoConvergedHitTestCallback@Win32kInterop@@AEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x18000AAC0 (-DoConvergedHitTestCallback@Win32kInterop@@AEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResul.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000F030 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_Erase_bucket@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@2@_K@Z @ 0x1800AA6F4 (-_Erase_bucket@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_comp.c)
 *     ?_Unchecked_erase@?$list@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@2@QEAU32@@Z @ 0x18010A4B8 (-_Unchecked_erase@-$list@U-$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V-$allocator@U-$pair@$.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned long,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>>>,0>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  unsigned __int64 appended; // rax
  _QWORD *v6; // r11

  appended = std::_Fnv1a_append_bytes(a1, (const unsigned __int8 *const)(a3 + 16), 4uLL);
  std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::_Erase_bucket(
    a1,
    v6,
    *(_QWORD *)(a1 + 48) & appended);
  *a2 = std::list<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>::_Unchecked_erase(a1 + 8);
  return a2;
}

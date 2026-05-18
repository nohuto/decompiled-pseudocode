/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1800DE198
 * Callers:
 *     ??1?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@2@@std@@QEAA@XZ @ 0x1800DE230 (--1-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@VConfigurationValue@Ut.c)
 *     ??1JsonConfigurationManager@Utils@Spectre@@UEAA@XZ @ 0x1800DE264 (--1JsonConfigurationManager@Utils@Spectre@@UEAA@XZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@PEAX@1@@Z @ 0x1800DD62C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@_WU-$char_tra_ea_1800DD62C.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<std::wstring,Spectre::Utils::ConfigurationValue,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>>,0>>::~_Tree<std::_Tmap_traits<std::wstring,Spectre::Utils::ConfigurationValue,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>>,0>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((char **)*a1 + 1));
  std::_Deallocate<16,0>(*a1, 0xC0uLL);
}

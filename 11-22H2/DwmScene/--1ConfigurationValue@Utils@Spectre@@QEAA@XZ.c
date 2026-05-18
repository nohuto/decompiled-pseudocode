/*
 * XREFs of ??1ConfigurationValue@Utils@Spectre@@QEAA@XZ @ 0x1800DF964
 * Callers:
 *     ??1?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@QEAA@XZ @ 0x1800DE23C (--1-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@VConfigurationVal.c)
 *     ?ClearConfiguration@JsonConfigurationManager@Utils@Spectre@@UEAAXXZ @ 0x1800DE580 (-ClearConfiguration@JsonConfigurationManager@Utils@Spectre@@UEAAXXZ.c)
 *     _Spectre::Utils::JsonConfigurationManager::ClearConfiguration_::_1_::dtor$2 @ 0x1800F1E76 (_Spectre--Utils--JsonConfigurationManager--ClearConfiguration_--_1_--dtor$2.c)
 * Callees:
 *     ??1?$_Hash@V?$_Umap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1800DE0A4 (--1-$_Hash@V-$_Umap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@VCon.c)
 */

void __fastcall Spectre::Utils::ConfigurationValue::~ConfigurationValue(Spectre::Utils::ConfigurationValue *this)
{
  std::_Hash<std::_Umap_traits<std::wstring,Spectre::Utils::ConfigurationValue,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>>,0>>::~_Hash<std::_Umap_traits<std::wstring,Spectre::Utils::ConfigurationValue,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>>,0>>((__int64)this + 64);
  std::wstring::_Tidy_deallocate((__int64)this + 8);
}

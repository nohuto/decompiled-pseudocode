/*
 * XREFs of ??1JsonConfigurationManager@Utils@Spectre@@UEAA@XZ @ 0x1800DE264
 * Callers:
 *     ??_GJsonConfigurationManager@Utils@Spectre@@UEAAPEAXI@Z @ 0x1800DE430 (--_GJsonConfigurationManager@Utils@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$_Tree@V?$_Tmap_traits@HV?$function@$$A6AXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$function@$$A6AXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1800DE168 (--1-$_Tree@V-$_Tmap_traits@HV-$function@$$A6AXAEBV-$basic_string@_WU-$char_traits@_W@std@@V-$all.c)
 *     ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1800DE198 (--1-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@VCon.c)
 */

void __fastcall Spectre::Utils::JsonConfigurationManager::~JsonConfigurationManager(void **this)
{
  *this = &Spectre::Utils::JsonConfigurationManager::`vftable';
  std::_Tree<std::_Tmap_traits<int,std::function<void (std::wstring const &)>,std::less<int>,std::allocator<std::pair<int const,std::function<void (std::wstring const &)>>>,0>>::~_Tree<std::_Tmap_traits<int,std::function<void (std::wstring const &)>,std::less<int>,std::allocator<std::pair<int const,std::function<void (std::wstring const &)>>>,0>>(this + 30);
  _Mtx_destroy_in_situ((_Mtx_t)(this + 20));
  std::_Tree<std::_Tmap_traits<std::wstring,Spectre::Utils::ConfigurationValue,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>>,0>>::~_Tree<std::_Tmap_traits<std::wstring,Spectre::Utils::ConfigurationValue,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>>,0>>(this + 18);
  _Mtx_destroy_in_situ((_Mtx_t)(this + 8));
  Spectre::Utils::IConfigurationManager::~IConfigurationManager((Spectre::Utils::IConfigurationManager *)this);
}

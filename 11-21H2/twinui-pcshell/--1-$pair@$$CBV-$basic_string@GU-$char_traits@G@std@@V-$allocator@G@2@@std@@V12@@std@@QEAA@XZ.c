/*
 * XREFs of ??1?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@QEAA@XZ @ 0x1800E6138
 * Callers:
 *     _dynamic_atexit_destructor_for__c_retailDemoHotspot__ @ 0x180224680 (_dynamic_atexit_destructor_for__c_retailDemoHotspot__.c)
 *     _dynamic_atexit_destructor_for__c_retailDemoHotspot___0 @ 0x180224990 (_dynamic_atexit_destructor_for__c_retailDemoHotspot___0.c)
 *     _api_alchemy_config::InitConfig_::_1_::dtor$5 @ 0x1805DDE56 (_api_alchemy_config--InitConfig_--_1_--dtor$5.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::pair<std::wstring const,std::wstring>::~pair<std::wstring const,std::wstring>(__int64 a1)
{
  std::wstring::_Tidy_deallocate(a1 + 32);
  return std::wstring::_Tidy_deallocate(a1);
}

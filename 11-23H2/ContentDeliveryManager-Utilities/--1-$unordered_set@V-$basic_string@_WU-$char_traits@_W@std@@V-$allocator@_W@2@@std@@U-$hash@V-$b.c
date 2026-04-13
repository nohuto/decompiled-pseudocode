/*
 * XREFs of ??1?$unordered_set@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAA@XZ @ 0x1800AC884
 * Callers:
 *     _CreativeFramework::NotificationManager::ToastHelpers::EnforceSchemaAndValidate_::_1_::dtor$0 @ 0x1800DC653 (_CreativeFramework--NotificationManager--ToastHelpers--EnforceSchemaAndValidate_--_1_--dtor$0.c)
 *     _CreativeFramework::NotificationManager::ToastHelpers::GetMacros_::_1_::dtor$0 @ 0x1800DC731 (_CreativeFramework--NotificationManager--ToastHelpers--GetMacros_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::unordered_set<std::wstring>::~unordered_set<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>,std::allocator<std::wstring>>(
        __int64 a1)
{
  return std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::~_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>(a1);
}

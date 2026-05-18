/*
 * XREFs of ?ClearConfiguration@JsonConfigurationManager@Utils@Spectre@@UEAAXXZ @ 0x1800DE580
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@PEAX@1@@Z @ 0x1800DD62C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@_WU-$char_tra_ea_1800DD62C.c)
 *     ??$_Try_emplace@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$$V@?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@PEAX@std@@_N@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x1800DD9C8 (--$_Try_emplace@AEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@_ea_1800DD9C8.c)
 *     ??4ConfigurationValue@Utils@Spectre@@QEAAAEAV012@AEBV012@@Z @ 0x1800DE344 (--4ConfigurationValue@Utils@Spectre@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??0ConfigurationValue@Utils@Spectre@@QEAA@XZ @ 0x1800DF8D4 (--0ConfigurationValue@Utils@Spectre@@QEAA@XZ.c)
 *     ??1ConfigurationValue@Utils@Spectre@@QEAA@XZ @ 0x1800DF964 (--1ConfigurationValue@Utils@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Utils::JsonConfigurationManager::ClearConfiguration(
        Spectre::Utils::JsonConfigurationManager *this)
{
  __int64 *v1; // rsi
  struct _Mtx_internal_imp_t *v2; // rbx
  _QWORD *v3; // rdi
  __int64 v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // rdi
  _QWORD *v7; // rax
  _BYTE v8[24]; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v9[128]; // [rsp+40h] [rbp-98h] BYREF

  v1 = (__int64 *)((char *)this + 144);
  v2 = (Spectre::Utils::JsonConfigurationManager *)((char *)this + 64);
  std::_Mutex_base::lock((Spectre::Utils::JsonConfigurationManager *)((char *)this + 64));
  v3 = (_QWORD *)*v1;
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>,void *>>>(
    (__int64)v1,
    (__int64)v1,
    *(char **)(*v1 + 8));
  v3[1] = v3;
  *v3 = v3;
  v3[2] = v3;
  v1[1] = 0LL;
  v4 = Spectre::Utils::ConfigurationValue::ConfigurationValue((Spectre::Utils::ConfigurationValue *)v9);
  v5 = (_QWORD *)std::map<std::wstring,Spectre::Utils::ConfigurationValue>::_Try_emplace<std::wstring const &,>(
                   v1,
                   (__int64)v8,
                   Spectre::Utils::kConfigurationDomain_Standard);
  Spectre::Utils::ConfigurationValue::operator=(*v5 + 64LL, v4);
  Spectre::Utils::ConfigurationValue::~ConfigurationValue((Spectre::Utils::ConfigurationValue *)v9);
  v6 = Spectre::Utils::ConfigurationValue::ConfigurationValue((Spectre::Utils::ConfigurationValue *)v9);
  v7 = (_QWORD *)std::map<std::wstring,Spectre::Utils::ConfigurationValue>::_Try_emplace<std::wstring const &,>(
                   v1,
                   (__int64)v8,
                   Spectre::Utils::kConfigurationDomain_Internal);
  Spectre::Utils::ConfigurationValue::operator=(*v7 + 64LL, v6);
  Spectre::Utils::ConfigurationValue::~ConfigurationValue((Spectre::Utils::ConfigurationValue *)v9);
  _Mtx_unlock(v2);
}

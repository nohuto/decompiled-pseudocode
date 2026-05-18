/*
 * XREFs of ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@2@@std@@QEAAAEAVConfigurationValue@Utils@Spectre@@$$QEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x1800DE3E4
 * Callers:
 *     ??$TryGetValue@H@JsonConfigurationManager@Utils@Spectre@@IEBA?AW4QueryResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAH@Z @ 0x1800DCCF0 (--$TryGetValue@H@JsonConfigurationManager@Utils@Spectre@@IEBA-AW4QueryResult@12@AEBV-$basic_stri.c)
 *     ??$TryGetValue@N@JsonConfigurationManager@Utils@Spectre@@IEBA?AW4QueryResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAN@Z @ 0x1800DCEBC (--$TryGetValue@N@JsonConfigurationManager@Utils@Spectre@@IEBA-AW4QueryResult@12@AEBV-$basic_stri.c)
 *     ??$TryGetValue@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@JsonConfigurationManager@Utils@Spectre@@IEBA?AW4QueryResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAV45@@Z @ 0x1800DD08C (--$TryGetValue@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@JsonConfigurati.c)
 *     ??$TryGetValue@_N@JsonConfigurationManager@Utils@Spectre@@IEBA?AW4QueryResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEA_N@Z @ 0x1800DD288 (--$TryGetValue@_N@JsonConfigurationManager@Utils@Spectre@@IEBA-AW4QueryResult@12@AEBV-$basic_str.c)
 *     ?GetPropertyType@JsonConfigurationManager@Utils@Spectre@@UEBA?AW4EConfigurationPropertyType@23@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800DE910 (-GetPropertyType@JsonConfigurationManager@Utils@Spectre@@UEBA-AW4EConfigurationPropertyType@23@A.c)
 *     ?HasProperty@JsonConfigurationManager@Utils@Spectre@@UEBA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800DEBE0 (-HasProperty@JsonConfigurationManager@Utils@Spectre@@UEBA_NAEBV-$basic_string@_WU-$char_traits@_.c)
 * Callees:
 *     ??$_Try_emplace@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$$V@?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x1800DDBE4 (--$_Try_emplace@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@$$V@-$map@V-$ba.c)
 */

__int64 __fastcall std::map<std::wstring,Spectre::Utils::ConfigurationValue>::operator[](__int64 *a1, _QWORD *a2)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  return *(_QWORD *)std::map<std::wstring,Spectre::Utils::ConfigurationValue>::_Try_emplace<std::wstring,>(
                      a1,
                      (__int64)v3,
                      a2)
       + 64LL;
}

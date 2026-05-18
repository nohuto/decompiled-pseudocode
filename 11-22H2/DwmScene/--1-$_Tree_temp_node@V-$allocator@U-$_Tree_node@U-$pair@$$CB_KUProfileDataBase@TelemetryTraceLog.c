/*
 * XREFs of ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18003195C
 * Callers:
 *     ??$_Try_emplace@AEB_K$$V@?$map@_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@@std@@@6@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18002FA6C (--$_Try_emplace@AEB_K$$V@-$map@_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@U-$less@_K.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 */

void __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,Spectre::Utils::TelemetryTraceLogger::ProfileDataBase>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,Spectre::Utils::TelemetryTraceLogger::ProfileDataBase>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    std::wstring::_Tidy_deallocate(v2 + 64);
  std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::string const,std::string>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::string const,std::string>,void *>>>(a1);
}

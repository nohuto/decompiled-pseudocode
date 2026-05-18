/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@@std@@@6@$0A@@std@@@std@@QEAA@XZ @ 0x18003183C
 * Callers:
 *     ??1?$map@_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@@std@@@6@@std@@QEAA@XZ @ 0x180031AD4 (--1-$map@_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@U-$less@_K@std@@V-$allocator@U-$.c)
 *     ??1GpuProfileData@TelemetryTraceLogger@Utils@Spectre@@QEAA@XZ @ 0x180031F1C (--1GpuProfileData@TelemetryTraceLogger@Utils@Spectre@@QEAA@XZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@@std@@PEAX@1@@Z @ 0x18002E9B4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KUProfileDataBase@TelemetryTraceLogger@Ut.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<unsigned __int64,Spectre::Utils::TelemetryTraceLogger::ProfileDataBase,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,Spectre::Utils::TelemetryTraceLogger::ProfileDataBase>>,0>>::~_Tree<std::_Tmap_traits<unsigned __int64,Spectre::Utils::TelemetryTraceLogger::ProfileDataBase,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,Spectre::Utils::TelemetryTraceLogger::ProfileDataBase>>,0>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,Spectre::Utils::TelemetryTraceLogger::ProfileDataBase>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,Spectre::Utils::TelemetryTraceLogger::ProfileDataBase>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16,0>(*a1, 0x60uLL);
}

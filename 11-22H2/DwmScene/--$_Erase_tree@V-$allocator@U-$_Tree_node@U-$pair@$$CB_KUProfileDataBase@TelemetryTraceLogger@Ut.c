/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@@std@@PEAX@1@@Z @ 0x18002E9B4
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@@std@@PEAX@1@@Z @ 0x18002E9B4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KUProfileDataBase@TelemetryTraceLogger@Ut.c)
 *     ??1?$_Tree@V?$_Tmap_traits@_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@@std@@@6@$0A@@std@@@std@@QEAA@XZ @ 0x18003183C (--1-$_Tree@V-$_Tmap_traits@_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@U-$less@_K@std.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@@std@@PEAX@1@@Z @ 0x18002E9B4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KUProfileDataBase@TelemetryTraceLogger@Ut.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,Spectre::Utils::TelemetryTraceLogger::ProfileDataBase>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,Spectre::Utils::TelemetryTraceLogger::ProfileDataBase>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rdi
  void *v6; // rbx

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,Spectre::Utils::TelemetryTraceLogger::ProfileDataBase>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,Spectre::Utils::TelemetryTraceLogger::ProfileDataBase>,void *>>>(
        a1,
        a2,
        v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      std::wstring::_Tidy_deallocate((__int64)v6 + 64);
      std::_Deallocate<16,0>(v6, 0x60uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
}

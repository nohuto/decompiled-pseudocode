/*
 * XREFs of ??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@QEAA@XZ @ 0x180031AF0
 * Callers:
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18002F120 (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_traits_ea_18002F120.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800318CC (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$cha_ea_1800318CC.c)
 *     _Spectre::SendEngineInitializedTelemetry::Engine::SendEngineInitializedTelemetry_::_1_::dtor$1 @ 0x1800E5EE1 (_Spectre--SendEngineInitializedTelemetry--Engine--SendEngineInitializedTelemetry_--_1_--dtor$1.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 */

void __fastcall std::pair<std::string const,std::string>::~pair<std::string const,std::string>(__int64 a1)
{
  std::string::_Tidy_deallocate(a1 + 32);
  std::string::_Tidy_deallocate(a1);
}

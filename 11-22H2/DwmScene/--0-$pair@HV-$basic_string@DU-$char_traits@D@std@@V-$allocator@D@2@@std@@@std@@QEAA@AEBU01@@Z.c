/*
 * XREFs of ??0?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@QEAA@AEBU01@@Z @ 0x1800592E0
 * Callers:
 *     ??$_Copy_nodes@U_Copy_tag@?$_Tree@V?$_Tmap_traits@U?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@U?$less@U?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@@std@@@2@$0A@@std@@@std@@@?$_Tree@V?$_Tmap_traits@U?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@U?$less@U?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@@std@@PEAX@1@PEAU21@0U_Copy_tag@01@@Z @ 0x180058804 (--$_Copy_nodes@U_Copy_tag@-$_Tree@V-$_Tmap_traits@U-$pair@HV-$basic_string@DU-$char_traits@D@std.c)
 *     ??$_Try_emplace@AEBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@$$V@?$map@U?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@U?$less@U?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@@std@@PEAX@std@@_N@1@AEBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@@Z @ 0x180058D64 (--$_Try_emplace@AEBU-$pair@HV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@std@@.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall std::pair<int,std::string>::pair<int,std::string>(__int64 a1, _DWORD *a2)
{
  *(_DWORD *)a1 = *a2;
  std::string::string((_QWORD *)(a1 + 8), (__int64)(a2 + 2));
  return a1;
}

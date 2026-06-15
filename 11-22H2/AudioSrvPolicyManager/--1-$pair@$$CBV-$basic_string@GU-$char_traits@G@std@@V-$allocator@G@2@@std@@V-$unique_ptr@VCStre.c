/*
 * XREFs of ??1?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@QEAA@XZ @ 0x18003227C
 * Callers:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800320E8 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@GU-$char_traits_ea_1800320E8.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180032200 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@_ea_180032200.c)
 * Callees:
 *     ??1?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@std@@QEAA@XZ @ 0x1800322A4 (--1-$unique_ptr@VCStreamClassPolicyGains@@U-$default_delete@VCStreamClassPolicyGains@@@std@@@std.c)
 */

__int64 __fastcall std::pair<std::wstring const,std::unique_ptr<CStreamClassPolicyGains>>::~pair<std::wstring const,std::unique_ptr<CStreamClassPolicyGains>>(
        _QWORD *a1)
{
  std::unique_ptr<CStreamClassPolicyGains>::~unique_ptr<CStreamClassPolicyGains>(a1 + 4);
  return std::wstring::~wstring(a1);
}

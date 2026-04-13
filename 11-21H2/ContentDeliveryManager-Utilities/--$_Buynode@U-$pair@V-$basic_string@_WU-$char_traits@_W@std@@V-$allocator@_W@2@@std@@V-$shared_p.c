/*
 * XREFs of ??$_Buynode@U?$pair@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@?$_Tree_buy@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@PEAX@1@$$QEAU?$pair@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@1@@Z @ 0x1800A7FC0
 * Callers:
 *     ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@Uless@Details@CommonHelper@CreativeFramework@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x1800A8FF0 (--A-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$shared_ptr@VISettin.c)
 *     ?ResolveContainers@SettingsContainer@CommonHelper@CreativeFramework@@AEAAXXZ @ 0x1800ED214 (-ResolveContainers@SettingsContainer@CommonHelper@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180066A7C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?_Buynode0@?$_Tree_buy@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@PEAX@2@XZ @ 0x1800AE3F8 (-_Buynode0@-$_Tree_buy@U-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@s.c)
 */

__int64 __fastcall std::_Tree_buy<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>::_Buynode<std::pair<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 *v4; // rbx
  __int64 *v5; // rdx
  __int64 v6; // rcx

  v3 = std::_Tree_buy<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>::_Buynode0();
  *(_WORD *)(v3 + 24) = 0;
  *(_QWORD *)(v3 + 56) = 7LL;
  *(_QWORD *)(v3 + 48) = 0LL;
  *(_WORD *)(v3 + 32) = 0;
  std::wstring::_Assign_rv((_QWORD *)(v3 + 32), a2);
  v4 = (__int64 *)(v3 + 64);
  v5 = a2 + 4;
  *(_QWORD *)(v3 + 64) = 0LL;
  *(_QWORD *)(v3 + 72) = 0LL;
  if ( (_QWORD *)(v3 + 64) != a2 + 4 )
  {
    *(_QWORD *)(v3 + 72) = a2[5];
    a2[5] = 0LL;
    v6 = *v4;
    *v4 = *v5;
    *v5 = v6;
  }
  return v3;
}

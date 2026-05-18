/*
 * XREFs of ??$ForEachComponent@VComponent@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAXAEBV?$function@$$A6AXAEBV?$shared_ptr@VComponent@Engine@Spectre@@@std@@@Z@std@@@Z @ 0x18002DD80
 * Callers:
 *     ?CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180032CC0 (-CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@.c)
 *     ?DetachDevice@Engine@1Spectre@@QEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18003395C (-DetachDevice@Engine@1Spectre@@QEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D378 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDevic.c)
 *     ??$ForEachComponent@VComponent@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAXAEBV?$function@$$A6AXAEBV?$shared_ptr@VComponent@Engine@Spectre@@@std@@@Z@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@4@@Z @ 0x18002DEB4 (--$ForEachComponent@VComponent@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAXAEBV-$fu_ea_18002DEB4.c)
 */

void __fastcall Spectre::Engine::Scene::ForEachComponent<Spectre::Engine::Component>(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // rax
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  v4 = **(_QWORD **)(a1 + 88);
  v7 = v4;
  while ( !*(_BYTE *)(v4 + 25) )
  {
    v5 = std::wstring::wstring(v6, v4 + 32);
    Spectre::Engine::Scene::ForEachComponent<Spectre::Engine::Component>(a1, a2, v5);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v7);
    v4 = v7;
  }
}

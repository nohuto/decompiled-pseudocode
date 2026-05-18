/*
 * XREFs of ??0?$_Tree_temp_node_alloc@V?$allocator@U?$_Tree_node@U?$pair@$$CBHV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBHV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@std@@PEAX@std@@@1@@Z @ 0x180063C6C
 * Callers:
 *     ??$_Try_emplace@H$$V@?$map@HV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBHV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@std@@PEAX@std@@_N@1@$$QEAH@Z @ 0x180062EC0 (--$_Try_emplace@H$$V@-$map@HV-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@U-$less@H@2@V-$alloc.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<int const,std::shared_ptr<Spectre::Engine::LightProbe>>,void *>>>::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<int const,std::shared_ptr<Spectre::Engine::LightProbe>>,void *>>>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  a1[1] = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  return a1;
}

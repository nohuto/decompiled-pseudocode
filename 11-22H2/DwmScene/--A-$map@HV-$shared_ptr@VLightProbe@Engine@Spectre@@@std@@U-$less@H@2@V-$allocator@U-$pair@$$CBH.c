/*
 * XREFs of ??A?$map@HV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@1@$$QEAH@Z @ 0x180064264
 * Callers:
 *     ?Clone@ViewerSceneData@ViewerEngine@Engine@Spectre@@UEAA?AV?$shared_ptr@USceneCustomData@Engine@Spectre@@@std@@AEBVScene@34@AEAV734@@Z @ 0x1800657E0 (-Clone@ViewerSceneData@ViewerEngine@Engine@Spectre@@UEAA-AV-$shared_ptr@USceneCustomData@Engine@.c)
 *     ?CreateStandardLights@ViewerEngine@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180065C40 (-CreateStandardLights@ViewerEngine@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@.c)
 * Callees:
 *     ??$_Try_emplace@H$$V@?$map@HV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBHV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@std@@PEAX@std@@_N@1@$$QEAH@Z @ 0x180062EC0 (--$_Try_emplace@H$$V@-$map@HV-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@U-$less@H@2@V-$alloc.c)
 */

__int64 __fastcall std::map<int,std::shared_ptr<Spectre::Engine::LightProbe>>::operator[](__int64 *a1, int *a2)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  return *(_QWORD *)std::map<int,std::shared_ptr<Spectre::Engine::LightProbe>>::_Try_emplace<int,>(a1, (__int64)v3, a2)
       + 40LL;
}

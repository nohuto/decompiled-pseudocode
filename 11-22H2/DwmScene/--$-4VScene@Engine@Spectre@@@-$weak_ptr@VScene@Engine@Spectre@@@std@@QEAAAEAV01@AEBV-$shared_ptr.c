/*
 * XREFs of ??$?4VScene@Engine@Spectre@@@?$weak_ptr@VScene@Engine@Spectre@@@std@@QEAAAEAV01@AEBV?$shared_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x18002A670
 * Callers:
 *     ?SetCpuProfiler@RenderOutput@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VCpuProfiler@Engine@Spectre@@@std@@@Z @ 0x18002C9B0 (-SetCpuProfiler@RenderOutput@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VCpuProfiler@Engine@Spectre@@.c)
 *     ??0CpuProfilerScope@Engine@Spectre@@QEAA@AEBV?$weak_ptr@VCpuProfiler@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z @ 0x180030F54 (--0CpuProfilerScope@Engine@Spectre@@QEAA@AEBV-$weak_ptr@VCpuProfiler@Engine@Spectre@@@std@@AEBV-.c)
 *     ?SetNextNode@SceneNode@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18003D450 (-SetNextNode@SceneNode@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ?SetParent@SceneNode@Engine@Spectre@@AEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18003D484 (-SetParent@SceneNode@Engine@Spectre@@AEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ?SetPreviousNode@SceneNode@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18003D834 (-SetPreviousNode@SceneNode@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VSceneNode@Engine@Spectre@@@std.c)
 *     ??$?0VScene@Engine@Spectre@@$0A@@?$shared_ptr@VScene@Engine@Spectre@@@std@@QEAA@PEAVScene@Engine@Spectre@@@Z @ 0x18003EED4 (--$-0VScene@Engine@Spectre@@$0A@@-$shared_ptr@VScene@Engine@Spectre@@@std@@QEAA@PEAVScene@Engine.c)
 *     ??$?0VSceneNode@Engine@Spectre@@$0A@@?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@QEAA@PEAVSceneNode@Engine@Spectre@@@Z @ 0x18003EF90 (--$-0VSceneNode@Engine@Spectre@@$0A@@-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@QEAA@PEAVScen.c)
 *     ?AttachShaderFamily@Material@Engine@Spectre@@AEAAXV?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@@Z @ 0x180044188 (-AttachShaderFamily@Material@Engine@Spectre@@AEAAXV-$shared_ptr@VShaderFamily@Engine@Spectre@@@s.c)
 *     ??$make_shared@VMaterial@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VMaterial@Engine@Spectre@@@0@XZ @ 0x18005F5D4 (--$make_shared@VMaterial@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VMaterial@Engine@Spectre@@@0.c)
 *     ?CreateMaterial@ShaderFamily@Engine@Spectre@@QEAA?AV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@XZ @ 0x1800600C8 (-CreateMaterial@ShaderFamily@Engine@Spectre@@QEAA-AV-$shared_ptr@VMaterial@Engine@Spectre@@@std@.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?0VScene@Engine@Spectre@@$0A@@?$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x180015604 (--$-0VScene@Engine@Spectre@@$0A@@-$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 */

__int64 *__fastcall std::weak_ptr<Spectre::Engine::Scene>::operator=<Spectre::Engine::Scene>(__int64 *a1, _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // r8
  __int64 v5; // r8
  std::_Ref_count_base *v6; // rcx
  std::_Ref_count_base *v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(v8, a2);
  v4 = *v3;
  *v3 = *a1;
  *a1 = v4;
  v5 = v3[1];
  v3[1] = a1[1];
  v6 = v8[1];
  a1[1] = v5;
  if ( v6 )
    std::_Ref_count_base::_Decwref(v6);
  return a1;
}

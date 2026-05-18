/*
 * XREFs of ??0?$weak_ptr@VMaterial@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18002B398
 * Callers:
 *     ?GetCpuProfiler@RenderOutput@Engine@Spectre@@UEBA?AV?$weak_ptr@VCpuProfiler@Engine@Spectre@@@std@@XZ @ 0x18002BF20 (-GetCpuProfiler@RenderOutput@Engine@Spectre@@UEBA-AV-$weak_ptr@VCpuProfiler@Engine@Spectre@@@std.c)
 *     ??$_Emplace_reallocate@AEBV?$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@@?$vector@V?$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$weak_ptr@VLoaderBase@Engine@Spectre@@@1@QEAV21@AEBV21@@Z @ 0x18002E634 (--$_Emplace_reallocate@AEBV-$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@@-$vector@V-$weak_ptr@VL.c)
 *     ?RemoveExpiredLoaders@Engine@1Spectre@@IEAAXXZ @ 0x180035B10 (-RemoveExpiredLoaders@Engine@1Spectre@@IEAAXXZ.c)
 *     ?Release@Material@Engine@Spectre@@QEAAXXZ @ 0x180044568 (-Release@Material@Engine@Spectre@@QEAAXXZ.c)
 *     ??4?$weak_ptr@VMorphController@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18004AF10 (--4-$weak_ptr@VMorphController@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?RenderScene@Camera@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005C210 (-RenderScene@Camera@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AE.c)
 *     ??$_Copy_nodes@U_Copy_tag@?$_Tree@V?$_Tset_traits@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@U?$owner_less@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@V?$allocator@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@$0A@@std@@@std@@@?$_Tree@V?$_Tset_traits@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@U?$owner_less@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@V?$allocator@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@1@PEAU21@0U_Copy_tag@01@@Z @ 0x18005EDA8 (--$_Copy_nodes@U_Copy_tag@-$_Tree@V-$_Tset_traits@V-$weak_ptr@VMaterial@Engine@Spectre@@@std@@U-.c)
 *     ?ApplyCameraEffect@ImageProcessingManager@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@V?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@5@V45@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x1800721C0 (-ApplyCameraEffect@ImageProcessingManager@Engine@Spectre@@QEBA-AV-$shared_ptr@VTexture@Engine@Sp.c)
 *     ?ProcessScene@ImageProcessingManager@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@_N@Z @ 0x1800735A4 (-ProcessScene@ImageProcessingManager@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VIRenderOutput@Engine.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::weak_ptr<Spectre::Engine::Material>::weak_ptr<Spectre::Engine::Material>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  if ( a2[1] )
  {
    *a1 = *a2;
    v2 = a2[1];
    a1[1] = v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 12));
  }
  return a1;
}

/*
 * XREFs of ?SetCpuProfiler@CommandList@Engine@Spectre@@QEAAXV?$weak_ptr@VCpuProfiler@Engine@Spectre@@@std@@@Z @ 0x180039648
 * Callers:
 *     ?RenderScene@Camera@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005C210 (-RenderScene@Camera@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AE.c)
 *     ?ApplyCameraEffect@ImageProcessingManager@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@V?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@5@V45@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x1800721C0 (-ApplyCameraEffect@ImageProcessingManager@Engine@Spectre@@QEBA-AV-$shared_ptr@VTexture@Engine@Sp.c)
 *     ?ProcessScene@ImageProcessingManager@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@_N@Z @ 0x1800735A4 (-ProcessScene@ImageProcessingManager@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VIRenderOutput@Engine.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall Spectre::Engine::CommandList::SetCpuProfiler(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  std::_Ref_count_base *v5; // rax
  std::_Ref_count_base *v6; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = a2[1];
  a2[1] = 0LL;
  *(_QWORD *)(a1 + 128) = v2;
  v5 = *(std::_Ref_count_base **)(a1 + 136);
  *(_QWORD *)(a1 + 136) = v4;
  if ( v5 )
    std::_Ref_count_base::_Decwref(v5);
  v6 = (std::_Ref_count_base *)a2[1];
  if ( v6 )
    std::_Ref_count_base::_Decwref(v6);
}

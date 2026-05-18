/*
 * XREFs of ??0?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x180057058
 * Callers:
 *     ?RenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@5@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180067B00 (-RenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@AEB.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@0@@Z @ 0x18002E26C (--$_Destroy_range@V-$allocator@V-$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@std@@@std@@Y.c)
 *     ??1?$_Tidy_guard@V?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@@std@@QEAA@XZ @ 0x180057210 (--1-$_Tidy_guard@V-$vector@V-$shared_ptr@VCamera@Engine@Spectre@@@std@@V-$allocator@V-$shared_pt.c)
 *     ?_Buy_nonzero@?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@AEAAX_K@Z @ 0x180058440 (-_Buy_nonzero@-$vector@V-$shared_ptr@VCamera@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VC.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<Spectre::Engine::Camera>>::vector<std::shared_ptr<Spectre::Engine::Camera>>(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // r8
  _QWORD *v5; // rdx
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 4 )
  {
    std::vector<std::shared_ptr<Spectre::Engine::Camera>>::_Buy_nonzero();
    v4 = *(_QWORD **)(a2 + 8);
    v5 = *(_QWORD **)a2;
    v6 = (_QWORD *)*a1;
    while ( v5 != v4 )
    {
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(v6, v5);
      v6 += 2;
      v5 = (_QWORD *)(v7 + 16);
    }
    std::_Destroy_range<std::allocator<std::shared_ptr<Spectre::Engine::ShaderPipeline>>>((__int64)v6, (__int64)v6);
    v9 = 0LL;
    a1[1] = v6;
    std::_Tidy_guard<std::vector<std::shared_ptr<Spectre::Engine::Camera>>>::~_Tidy_guard<std::vector<std::shared_ptr<Spectre::Engine::Camera>>>(&v9);
  }
  return a1;
}

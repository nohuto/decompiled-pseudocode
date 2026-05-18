/*
 * XREFs of ??$?0PEBV?$shared_ptr@VShadowMapCamera@Engine@Spectre@@@std@@$0A@@?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@QEAA@PEBV?$shared_ptr@VShadowMapCamera@Engine@Spectre@@@1@0AEBV?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@1@@Z @ 0x18006164C
 * Callers:
 *     ?RenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@5@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180067B00 (-RenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@AEB.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@0@@Z @ 0x18002E26C (--$_Destroy_range@V-$allocator@V-$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@std@@@std@@Y.c)
 *     ??1?$_Tidy_guard@V?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@@std@@QEAA@XZ @ 0x180057210 (--1-$_Tidy_guard@V-$vector@V-$shared_ptr@VCamera@Engine@Spectre@@@std@@V-$allocator@V-$shared_pt.c)
 *     ?_Buy_nonzero@?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@AEAAX_K@Z @ 0x180058440 (-_Buy_nonzero@-$vector@V-$shared_ptr@VCamera@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VC.c)
 */

_QWORD *std::vector<std::shared_ptr<Spectre::Engine::Camera>>::vector<std::shared_ptr<Spectre::Engine::Camera>>(
        _QWORD *a1,
        char *a2,
        char *a3,
        ...)
{
  char *v3; // rsi
  unsigned __int64 v4; // rdx
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
  *a1 = 0LL;
  v3 = a2;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = (a3 - a2) >> 4;
  if ( v4 )
  {
    std::vector<std::shared_ptr<Spectre::Engine::Camera>>::_Buy_nonzero(a1, v4);
    v7 = (_QWORD *)*a1;
    while ( v3 != a3 )
    {
      *v7 = 0LL;
      v7[1] = 0LL;
      v8 = *((_QWORD *)v3 + 1);
      if ( v8 )
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      *v7 = *(_QWORD *)v3;
      v7[1] = *((_QWORD *)v3 + 1);
      v7 += 2;
      v3 += 16;
    }
    std::_Destroy_range<std::allocator<std::shared_ptr<Spectre::Engine::ShaderPipeline>>>((__int64)v7, (__int64)v7);
    v10 = 0LL;
    a1[1] = v7;
    std::_Tidy_guard<std::vector<std::shared_ptr<Spectre::Engine::Camera>>>::~_Tidy_guard<std::vector<std::shared_ptr<Spectre::Engine::Camera>>>((__int64 *)va);
  }
  return a1;
}

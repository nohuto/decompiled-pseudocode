/*
 * XREFs of ??$_Uninitialized_move@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@YAPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@0@@Z @ 0x18002FFB8
 * Callers:
 *     ??$_Emplace_reallocate@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VCamera@Engine@Spectre@@@1@QEAV21@$$QEAV21@@Z @ 0x18002E72C (--$_Emplace_reallocate@V-$shared_ptr@VCamera@Engine@Spectre@@@std@@@-$vector@V-$shared_ptr@VCame.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VComponent@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VComponent@Engine@Spectre@@@1@QEAV21@AEBV21@@Z @ 0x18003A324 (--$_Emplace_reallocate@AEBV-$shared_ptr@VComponent@Engine@Spectre@@@std@@@-$vector@V-$shared_ptr.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VCamera@Engine@Spectre@@@1@QEAV21@AEBV21@@Z @ 0x180056C54 (--$_Emplace_reallocate@AEBV-$shared_ptr@VCamera@Engine@Spectre@@@std@@@-$vector@V-$shared_ptr@VC.c)
 *     ??$_Emplace_reallocate@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@1@QEAV21@$$QEAV21@@Z @ 0x18005F06C (--$_Emplace_reallocate@V-$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@-$vector@V-$shared_p.c)
 *     ?_Reallocate_exactly@?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@AEAAX_K@Z @ 0x18006EA00 (-_Reallocate_exactly@-$vector@V-$shared_ptr@VCamera@Engine@Spectre@@@std@@V-$allocator@V-$shared.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@1@QEAV21@AEBV21@@Z @ 0x1800983CC (--$_Emplace_reallocate@AEBV-$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@-$vector@V-$share.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@0@@Z @ 0x18002E26C (--$_Destroy_range@V-$allocator@V-$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@std@@@std@@Y.c)
 */

_QWORD *__fastcall std::_Uninitialized_move<std::shared_ptr<Spectre::Engine::Camera> *,std::allocator<std::shared_ptr<Spectre::Engine::Camera>>>(
        char *a1,
        char *a2,
        _QWORD *a3)
{
  _QWORD *v3; // rbx
  signed __int64 v4; // r8

  v3 = a3;
  if ( a1 != a2 )
  {
    v4 = a1 - (char *)a3;
    do
    {
      *v3 = 0LL;
      v3[1] = 0LL;
      *v3 = *(_QWORD *)((char *)v3 + v4);
      v3[1] = *(_QWORD *)((char *)v3 + v4 + 8);
      *(_QWORD *)((char *)v3 + v4) = 0LL;
      *(_QWORD *)((char *)v3 + v4 + 8) = 0LL;
      v3 += 2;
    }
    while ( (char *)v3 + v4 != a2 );
  }
  std::_Destroy_range<std::allocator<std::shared_ptr<Spectre::Engine::ShaderPipeline>>>((__int64)v3, (__int64)v3);
  return v3;
}

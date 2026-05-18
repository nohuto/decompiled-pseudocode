/*
 * XREFs of ?_Change_array@?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@VCamera@Engine@Spectre@@@2@_K1@Z @ 0x180037F1C
 * Callers:
 *     ??$_Emplace_reallocate@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VCamera@Engine@Spectre@@@1@QEAV21@$$QEAV21@@Z @ 0x18002E72C (--$_Emplace_reallocate@V-$shared_ptr@VCamera@Engine@Spectre@@@std@@@-$vector@V-$shared_ptr@VCame.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VComponent@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VComponent@Engine@Spectre@@@1@QEAV21@AEBV21@@Z @ 0x18003A324 (--$_Emplace_reallocate@AEBV-$shared_ptr@VComponent@Engine@Spectre@@@std@@@-$vector@V-$shared_ptr.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VCamera@Engine@Spectre@@@1@QEAV21@AEBV21@@Z @ 0x180056C54 (--$_Emplace_reallocate@AEBV-$shared_ptr@VCamera@Engine@Spectre@@@std@@@-$vector@V-$shared_ptr@VC.c)
 *     ??$_Emplace_reallocate@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@1@QEAV21@$$QEAV21@@Z @ 0x18005F06C (--$_Emplace_reallocate@V-$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@-$vector@V-$shared_p.c)
 *     ?_Reallocate_exactly@?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@AEAAX_K@Z @ 0x18006EA00 (-_Reallocate_exactly@-$vector@V-$shared_ptr@VCamera@Engine@Spectre@@@std@@V-$allocator@V-$shared.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@1@QEAV21@AEBV21@@Z @ 0x1800983CC (--$_Emplace_reallocate@AEBV-$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@-$vector@V-$share.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@0@@Z @ 0x18002E26C (--$_Destroy_range@V-$allocator@V-$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@std@@@std@@Y.c)
 */

void __fastcall std::vector<std::shared_ptr<Spectre::Engine::Camera>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx

  v6 = *(void **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<Spectre::Engine::ShaderPipeline>>>(
      (__int64)v6,
      *(_QWORD *)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
}

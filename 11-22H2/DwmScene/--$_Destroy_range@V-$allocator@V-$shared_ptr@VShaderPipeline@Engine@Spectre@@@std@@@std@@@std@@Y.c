/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@0@@Z @ 0x18002E26C
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@YAPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@0@@Z @ 0x18002FFB8 (--$_Uninitialized_move@PEAV-$shared_ptr@VCamera@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@VCamera@Engine@Spectre@@@2@_K1@Z @ 0x180037F1C (-_Change_array@-$vector@V-$shared_ptr@VCamera@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@V.c)
 *     ?_Tidy@?$vector@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x180038548 (-_Tidy@-$vector@V-$shared_ptr@VComponent@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VCompo.c)
 *     ??0?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x180057058 (--0-$vector@V-$shared_ptr@VCamera@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VCamera@Engin.c)
 *     ??$?0PEBV?$shared_ptr@VShadowMapCamera@Engine@Spectre@@@std@@$0A@@?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@QEAA@PEBV?$shared_ptr@VShadowMapCamera@Engine@Spectre@@@1@0AEBV?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@1@@Z @ 0x18006164C (--$-0PEBV-$shared_ptr@VShadowMapCamera@Engine@Spectre@@@std@@$0A@@-$vector@V-$shared_ptr@VCamera.c)
 * Callees:
 *     ??_G?$shared_ptr@VCamera@Engine@Spectre@@@std@@QEAAPEAXI@Z @ 0x1800325D0 (--_G-$shared_ptr@VCamera@Engine@Spectre@@@std@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<std::shared_ptr<Spectre::Engine::ShaderPipeline>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = std::shared_ptr<Spectre::Engine::Camera>::`scalar deleting destructor'(v3);
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
  return result;
}

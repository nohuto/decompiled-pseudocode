/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@@std@@QEAA@XZ @ 0x180057210
 * Callers:
 *     ??0?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x180057058 (--0-$vector@V-$shared_ptr@VCamera@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VCamera@Engin.c)
 *     ??$?0PEBV?$shared_ptr@VShadowMapCamera@Engine@Spectre@@@std@@$0A@@?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@QEAA@PEBV?$shared_ptr@VShadowMapCamera@Engine@Spectre@@@1@0AEBV?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@1@@Z @ 0x18006164C (--$-0PEBV-$shared_ptr@VShadowMapCamera@Engine@Spectre@@@std@@$0A@@-$vector@V-$shared_ptr@VCamera.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x180038548 (-_Tidy@-$vector@V-$shared_ptr@VComponent@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VCompo.c)
 */

void __fastcall std::_Tidy_guard<std::vector<std::shared_ptr<Spectre::Engine::Camera>>>::~_Tidy_guard<std::vector<std::shared_ptr<Spectre::Engine::Camera>>>(
        __int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::vector<std::shared_ptr<Spectre::Engine::Component>>::_Tidy(v1);
}

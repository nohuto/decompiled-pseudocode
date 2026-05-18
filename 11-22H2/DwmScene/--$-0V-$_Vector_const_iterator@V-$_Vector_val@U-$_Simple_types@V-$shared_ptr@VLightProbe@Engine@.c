/*
 * XREFs of ??$?0V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@std@@@std@@@std@@$0A@@?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@QEAA@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@std@@@std@@@1@0AEBV?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@1@@Z @ 0x1800A3FD8
 * Callers:
 *     ?Gather@LightGatherer@Engine@Spectre@@SAXAEBV?$vector@V?$shared_ptr@VLight@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLight@Engine@Spectre@@@std@@@2@@std@@AEBV?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@5@AEBV?$unique_ptr@ULightConstants@Engine@Spectre@@V?$function@$$A6AXPEAULightConstants@Engine@Spectre@@@Z@std@@@5@AEAV?$shared_ptr@$$CBVLightProbe@Engine@Spectre@@@5@AEAV?$array@V?$shared_ptr@$$CBVShadowMapCamera@Engine@Spectre@@@std@@$02@5@@Z @ 0x1800A4544 (-Gather@LightGatherer@Engine@Spectre@@SAXAEBV-$vector@V-$shared_ptr@VLight@Engine@Spectre@@@std@.c)
 * Callees:
 *     ??$_Construct_n@PEBV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@PEBV12@@?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@AEAAX_K$$QEAPEBV?$shared_ptr@VLightProbe@Engine@Spectre@@@1@1@Z @ 0x1800A402C (--$_Construct_n@PEBV-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@PEBV12@@-$vector@V-$shared_pt.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::vector<std::shared_ptr<Spectre::Engine::LightProbe>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v5 = a2;
  v6 = a3;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::_Construct_n<std::shared_ptr<Spectre::Engine::LightProbe> const *,std::shared_ptr<Spectre::Engine::LightProbe> const *>(
    a1,
    (a3 - a2) >> 4,
    &v5,
    &v6);
  return a1;
}

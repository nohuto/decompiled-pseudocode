/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@2@@std@@@std@@QEAA@XZ @ 0x18003178C
 * Callers:
 *     ??$_Construct_n@AEBQEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBQEAV12@@?$vector@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@2@@std@@AEAAX_KAEBQEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@1@1@Z @ 0x18002E178 (--$_Construct_n@AEBQEAV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBQEAV12@@-$vector@V-$s.c)
 *     ??$?0V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@std@@@std@@@std@@$0A@@?$vector@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@2@@std@@QEAA@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@std@@@std@@@1@0AEBV?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@1@@Z @ 0x180096FAC (--$-0V-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@VResourceLoadedFnc@.c)
 *     ??$_Construct_n@$$V@?$vector@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@2@@std@@AEAAX_K@Z @ 0x180097124 (--$_Construct_n@$$V@-$vector@V-$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V-$allocator.c)
 *     ??$_Construct_n@PEBV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@PEBV12@@?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@AEAAX_K$$QEAPEBV?$shared_ptr@VLightProbe@Engine@Spectre@@@1@1@Z @ 0x1800A402C (--$_Construct_n@PEBV-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@PEBV12@@-$vector@V-$shared_pt.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x180013300 (-_Tidy@-$vector@V-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VLigh.c)
 */

void __fastcall std::_Tidy_guard<std::vector<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc>>>::~_Tidy_guard<std::vector<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc>>>(
        __int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::_Tidy(v1);
}

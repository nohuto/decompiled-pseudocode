/*
 * XREFs of ??$GetEffect@VImageProcessingEffectBloom@Engine@Spectre@@@ImageProcessingManager@Engine@Spectre@@QEBA?AV?$shared_ptr@VImageProcessingEffectBloom@Engine@Spectre@@@std@@XZ @ 0x1800628EC
 * Callers:
 *     ?ApplyImageProcessing@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180064B30 (-ApplyImageProcessing@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x180013300 (-_Tidy@-$vector@V-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VLigh.c)
 *     ??$static_pointer_cast@IX@std@@YA?AV?$shared_ptr@I@0@AEBV?$shared_ptr@X@0@@Z @ 0x180047A7C (--$static_pointer_cast@IX@std@@YA-AV-$shared_ptr@I@0@AEBV-$shared_ptr@X@0@@Z.c)
 *     ?GetEffects@ImageProcessingManager@Engine@Spectre@@QEBA?AV?$vector@V?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@@2@@std@@AEBVtype_index@5@@Z @ 0x18007334C (-GetEffects@ImageProcessingManager@Engine@Spectre@@QEBA-AV-$vector@V-$shared_ptr@VImageProcessin.c)
 */

_QWORD *__fastcall Spectre::Engine::ImageProcessingManager::GetEffect<Spectre::Engine::ImageProcessingEffectBloom>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *v3; // rax
  char v4; // bl
  __int64 v5; // rcx
  std::_Ref_count_base *v6; // rdi
  char v8; // [rsp+28h] [rbp-48h] BYREF
  std::_Ref_count_base *v9; // [rsp+30h] [rbp-40h]
  __int64 v10[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v11; // [rsp+48h] [rbp-28h] BYREF
  std::_Ref_count_base *v12; // [rsp+50h] [rbp-20h]
  _QWORD *v13[3]; // [rsp+58h] [rbp-18h] BYREF
  void ***v14; // [rsp+88h] [rbp+18h] BYREF

  v14 = &Spectre::Engine::ImageProcessingEffectBloom `RTTI Type Descriptor';
  Spectre::Engine::ImageProcessingManager::GetEffects(a1, v13, &v14);
  if ( ((char *)v13[1] - (char *)v13[0]) >> 4 )
  {
    v3 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           &v11,
           v13[0]);
    v4 = 1;
    v5 = *v3;
  }
  else
  {
    v9 = 0LL;
    v3 = (__int64 *)&v8;
    v5 = 0LL;
    v4 = 2;
  }
  v6 = (std::_Ref_count_base *)v3[1];
  v3[1] = 0LL;
  *v3 = 0LL;
  v10[0] = v5;
  v10[1] = (__int64)v6;
  if ( (v4 & 2) != 0 )
  {
    v4 &= ~2u;
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
  }
  if ( (v4 & 1) != 0 && v12 )
    std::_Ref_count_base::_Decref(v12);
  std::static_pointer_cast<unsigned int,void>(a2, v10);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::_Tidy((__int64)v13);
  return a2;
}

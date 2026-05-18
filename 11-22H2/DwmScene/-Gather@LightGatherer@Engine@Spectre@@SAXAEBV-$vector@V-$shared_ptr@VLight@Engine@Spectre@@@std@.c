/*
 * XREFs of ?Gather@LightGatherer@Engine@Spectre@@SAXAEBV?$vector@V?$shared_ptr@VLight@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLight@Engine@Spectre@@@std@@@2@@std@@AEBV?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@5@AEBV?$unique_ptr@ULightConstants@Engine@Spectre@@V?$function@$$A6AXPEAULightConstants@Engine@Spectre@@@Z@std@@@5@AEAV?$shared_ptr@$$CBVLightProbe@Engine@Spectre@@@5@AEAV?$array@V?$shared_ptr@$$CBVShadowMapCamera@Engine@Spectre@@@std@@$02@5@@Z @ 0x1800A4544
 * Callers:
 *     ?OnFrameRender@StandardShaderExtension@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18007DF80 (-OnFrameRender@StandardShaderExtension@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VCamera@Engine@Spec.c)
 *     ?OnFrameRender@BackgroundUnlitShaderExtension@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180080C30 (-OnFrameRender@BackgroundUnlitShaderExtension@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VCamera@Engi.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18000B4B0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x180013300 (-_Tidy@-$vector@V-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VLigh.c)
 *     ??$?0V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@std@@@std@@@std@@$0A@@?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@QEAA@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@std@@@std@@@1@0AEBV?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@1@@Z @ 0x1800A3FD8 (--$-0V-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@VLightProbe@Engine@.c)
 *     ?SortLightProbes@LightGatherer@Engine@Spectre@@CAXAEAV?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@@Z @ 0x1800A46B8 (-SortLightProbes@LightGatherer@Engine@Spectre@@CAXAEAV-$vector@V-$shared_ptr@VLightProbe@Engine@.c)
 *     ?SortLights@LightGatherer@Engine@Spectre@@CAXAEAV?$vector@V?$shared_ptr@VLight@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLight@Engine@Spectre@@@std@@@2@@std@@@Z @ 0x1800A4740 (-SortLights@LightGatherer@Engine@Spectre@@CAXAEAV-$vector@V-$shared_ptr@VLight@Engine@Spectre@@@.c)
 *     ?UpdateLightConstants@LightGatherer@Engine@Spectre@@CA?AV?$array@V?$shared_ptr@$$CBVShadowMapCamera@Engine@Spectre@@@std@@$02@std@@AEBV?$vector@V?$shared_ptr@VLight@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLight@Engine@Spectre@@@std@@@2@@5@AEBV?$unique_ptr@ULightConstants@Engine@Spectre@@V?$function@$$A6AXPEAULightConstants@Engine@Spectre@@@Z@std@@@5@@Z @ 0x1800A4764 (-UpdateLightConstants@LightGatherer@Engine@Spectre@@CA-AV-$array@V-$shared_ptr@$$CBVShadowMapCam.c)
 *     ?UpdateProbeConstants@LightGatherer@Engine@Spectre@@CA?AV?$shared_ptr@$$CBVLightProbe@Engine@Spectre@@@std@@AEBV?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@5@AEBV?$unique_ptr@ULightConstants@Engine@Spectre@@V?$function@$$A6AXPEAULightConstants@Engine@Spectre@@@Z@std@@@5@@Z @ 0x1800A4F20 (-UpdateProbeConstants@LightGatherer@Engine@Spectre@@CA-AV-$shared_ptr@$$CBVLightProbe@Engine@Spe.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::LightGatherer::Gather(__int64 *a1, __int64 *a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  std::_Ref_count_base **v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rsi
  std::_Ref_count_base *v11; // rcx
  std::_Ref_count_base *v12; // rax
  std::_Ref_count_base *v13; // rcx
  __int64 *updated; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  std::_Ref_count_base *v17; // rcx
  _QWORD v18[3]; // [rsp+20h] [rbp-51h] BYREF
  _QWORD v19[3]; // [rsp+38h] [rbp-39h] BYREF
  _BYTE v20[8]; // [rsp+50h] [rbp-21h] BYREF
  std::_Ref_count_base *v21; // [rsp+58h] [rbp-19h]
  char v22[48]; // [rsp+60h] [rbp-11h] BYREF

  std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::vector<std::shared_ptr<Spectre::Engine::LightProbe>>(
    v19,
    *a1,
    a1[1]);
  std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::vector<std::shared_ptr<Spectre::Engine::LightProbe>>(
    v18,
    *a2,
    a2[1]);
  if ( (unsigned __int64)((__int64)(v19[1] - v19[0]) >> 4) > 3 )
    Spectre::Engine::LightGatherer::SortLights(v19);
  if ( (unsigned __int64)((__int64)(v18[1] - v18[0]) >> 4) > 1 )
    Spectre::Engine::LightGatherer::SortLightProbes(v18);
  v8 = (std::_Ref_count_base **)(a5 + 8);
  v9 = Spectre::Engine::LightGatherer::UpdateLightConstants(v22, v19, a3) - a5;
  v10 = 3LL;
  do
  {
    v11 = *(std::_Ref_count_base **)((char *)v8 + v9 - 8);
    v12 = *(std::_Ref_count_base **)((char *)v8 + v9);
    *(std::_Ref_count_base **)((char *)v8 + v9 - 8) = 0LL;
    *(std::_Ref_count_base **)((char *)v8 + v9) = 0LL;
    *(v8 - 1) = v11;
    v13 = *v8;
    *v8 = v12;
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    v8 += 2;
    --v10;
  }
  while ( v10 );
  `eh vector destructor iterator'(
    v22,
    16LL,
    3LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::DeviceVertexLayout>::~shared_ptr<Spectre::Engine::DeviceVertexLayout>);
  updated = (__int64 *)Spectre::Engine::LightGatherer::UpdateProbeConstants(v20, v18, a3);
  v15 = *updated;
  v16 = updated[1];
  *updated = 0LL;
  updated[1] = 0LL;
  *a4 = v15;
  v17 = (std::_Ref_count_base *)a4[1];
  a4[1] = v16;
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
  if ( v21 )
    std::_Ref_count_base::_Decref(v21);
  std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::_Tidy((__int64)v18);
  std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::_Tidy((__int64)v19);
}

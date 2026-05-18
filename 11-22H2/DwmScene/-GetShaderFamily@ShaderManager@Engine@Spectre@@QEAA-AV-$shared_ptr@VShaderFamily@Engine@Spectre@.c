/*
 * XREFs of ?GetShaderFamily@ShaderManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x180050224
 * Callers:
 *     ?CreateMaterial@SpectreRenderer@@UEAAJPEAPEAUISpectreMaterial@@@Z @ 0x1800183C0 (-CreateMaterial@SpectreRenderer@@UEAAJPEAPEAUISpectreMaterial@@@Z.c)
 *     ?AddExtension@ShaderManager@Engine@Spectre@@QEAAXV?$shared_ptr@VIShaderExtension@Engine@Spectre@@@std@@@Z @ 0x18004EF08 (-AddExtension@ShaderManager@Engine@Spectre@@QEAAXV-$shared_ptr@VIShaderExtension@Engine@Spectre@.c)
 *     ?RenderScene@Camera@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005C210 (-RenderScene@Camera@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AE.c)
 *     ?FillBackground@ViewerEngine@Engine@Spectre@@MEAAXAEAVShaderManager@23@AEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x1800666A0 (-FillBackground@ViewerEngine@Engine@Spectre@@MEAAXAEAVShaderManager@23@AEBV-$shared_ptr@VScene@E.c)
 *     ?PreRenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180067590 (-PreRenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@.c)
 *     ?UpdateBackground@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@_NM@Z @ 0x180067E30 (-UpdateBackground@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std.c)
 *     ?UpdateCameraEffectsDiagnostics@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180068BA0 (-UpdateCameraEffectsDiagnostics@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine.c)
 *     ?UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV?$shared_ptr@VScene@Engine@Spectre@@@5@@Z @ 0x18006BE30 (-UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VRenderDevice@Engine.c)
 *     ?Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z @ 0x180072750 (-Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z.c)
 *     ?OnCreate@ImageProcessingShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x18007E880 (-OnCreate@ImageProcessingShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@.c)
 *     ?CreateBloomResources@ImageProcessingEffectBloom@Engine@Spectre@@MEAAXPEAVRenderDevice@23@@Z @ 0x180096160 (-CreateBloomResources@ImageProcessingEffectBloom@Engine@Spectre@@MEAAXPEAVRenderDevice@23@@Z.c)
 *     ?CreateBlurResources@ImageProcessingEffectBlur@Engine@Spectre@@IEAAXPEAVRenderDevice@23@@Z @ 0x18009CAD4 (-CreateBlurResources@ImageProcessingEffectBlur@Engine@Spectre@@IEAAXPEAVRenderDevice@23@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Try_emplace@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$V@?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@2@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@2@@std@@PEAX@std@@_N@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x18004DBB0 (--$_Try_emplace@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@$$V@-$map@V-$ba.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@@std@@@std@@@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z @ 0x180050C30 (-find@-$_Tree@V-$_Tmap_traits@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@USha.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Spectre::Engine::ShaderManager::GetShaderFamily(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 *v5; // rsi
  __int64 v6; // rax
  _QWORD v8[3]; // [rsp+28h] [rbp-40h] BYREF

  v8[0] = a2;
  v8[2] = a3;
  v5 = (__int64 *)(a1 + 18560);
  std::_Tree<std::_Tmap_traits<std::string,Spectre::Engine::ShaderManager::ShaderInfo,std::less<std::string>,std::allocator<std::pair<std::string const,Spectre::Engine::ShaderManager::ShaderInfo>>,0>>::find(
    a1 + 18560,
    v8,
    a3);
  if ( v8[0] == *v5 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v6 = std::map<std::string,std::shared_ptr<Spectre::Engine::ShaderFamily>>::_Try_emplace<std::string const &,>(
           v5,
           (__int64)v8,
           a3);
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
      a2,
      (_QWORD *)(*(_QWORD *)v6 + 64LL));
  }
  std::string::_Tidy_deallocate((__int64)a3);
  return a2;
}

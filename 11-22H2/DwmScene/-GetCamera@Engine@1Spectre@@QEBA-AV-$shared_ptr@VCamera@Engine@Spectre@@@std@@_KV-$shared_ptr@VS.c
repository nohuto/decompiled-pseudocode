/*
 * XREFs of ?GetCamera@Engine@1Spectre@@QEBA?AV?$shared_ptr@VCamera@Engine@Spectre@@@std@@_KV?$shared_ptr@VScene@Engine@Spectre@@@4@@Z @ 0x180033E34
 * Callers:
 *     ?Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z @ 0x180018F90 (-Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z.c)
 *     ?CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180032CC0 (-CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@.c)
 *     ?ApplyModelTransformFromConfiguration@ViewerEngine@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180064DC0 (-ApplyModelTransformFromConfiguration@ViewerEngine@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VScene@.c)
 *     ?UpdateBackground@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@_NM@Z @ 0x180067E30 (-UpdateBackground@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std.c)
 *     ?UpdateCameraFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$unordered_set@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@5@@Z @ 0x180068DE8 (-UpdateCameraFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@.c)
 *     ?UpdateConfigurationFromCamera@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x1800696D0 (-UpdateConfigurationFromCamera@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@.c)
 *     ?UpdateGeneralSettings@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x18006A614 (-UpdateGeneralSettings@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@.c)
 *     ?UpdateKeyboardInput@ViewerEngine@Engine@Spectre@@AEAA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBVInput@23@@Z @ 0x18006AF64 (-UpdateKeyboardInput@ViewerEngine@Engine@Spectre@@AEAA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@.c)
 *     ?UpdateLightingFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x18006B21C (-UpdateLightingFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engin.c)
 *     ?UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV?$shared_ptr@VScene@Engine@Spectre@@@5@@Z @ 0x18006BE30 (-UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VRenderDevice@Engine.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?0VScene@Engine@Spectre@@$0A@@?$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x180015604 (--$-0VScene@Engine@Spectre@@$0A@@-$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 *     ??$_Find@V?$weak_ptr@VScene@Engine@Spectre@@@std@@@?$_Tree@V?$_Tmap_traits@V?$weak_ptr@VScene@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@2@U?$owner_less@V?$weak_ptr@VScene@Engine@Spectre@@@std@@@2@V?$allocator@U?$pair@$$CBV?$weak_ptr@VScene@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@2@@std@@@2@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VScene@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@2@@std@@PEAX@1@AEBV?$weak_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x18002EADC (--$_Find@V-$weak_ptr@VScene@Engine@Spectre@@@std@@@-$_Tree@V-$_Tmap_traits@V-$weak_ptr@VScene@En.c)
 *     ?GetDefaultScene@Engine@1Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x180034098 (-GetDefaultScene@Engine@1Spectre@@QEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Spectre::Engine::Engine::GetCamera(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  __int64 *DefaultScene; // rax
  _QWORD *v8; // rbp
  __int64 v9; // rbx
  _QWORD *v10; // rdx
  std::_Ref_count_base *v11; // rcx
  __int64 v13; // [rsp+28h] [rbp-20h] BYREF
  std::_Ref_count_base *v14; // [rsp+30h] [rbp-18h]

  if ( !*a4 )
  {
    DefaultScene = (__int64 *)Spectre::Engine::Engine::GetDefaultScene(a1, &v13);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(a4, DefaultScene);
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
  }
  v8 = (_QWORD *)(a1 + 728);
  std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(&v13, a4);
  v9 = std::_Tree<std::_Tmap_traits<std::weak_ptr<Spectre::Engine::Scene>,std::vector<std::shared_ptr<Spectre::Engine::Camera>>,std::owner_less<std::weak_ptr<Spectre::Engine::Scene>>,std::allocator<std::pair<std::weak_ptr<Spectre::Engine::Scene> const,std::vector<std::shared_ptr<Spectre::Engine::Camera>>>>,0>>::_Find<std::weak_ptr<Spectre::Engine::Scene>>(
         a1 + 728,
         (__int64)&v13);
  if ( v14 )
    std::_Ref_count_base::_Decwref(v14);
  if ( v9 == *v8 || (v10 = *(_QWORD **)(v9 + 48), !((__int64)(*(_QWORD *)(v9 + 56) - (_QWORD)v10) >> 4)) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(a2, v10);
  }
  v11 = (std::_Ref_count_base *)a4[1];
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  return a2;
}

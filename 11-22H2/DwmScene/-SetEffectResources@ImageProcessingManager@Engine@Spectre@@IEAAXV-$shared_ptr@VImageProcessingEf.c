/*
 * XREFs of ?SetEffectResources@ImageProcessingManager@Engine@Spectre@@IEAAXV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@@Z @ 0x180073ACC
 * Callers:
 *     ?AddEffect@ImageProcessingManager@Engine@Spectre@@QEAAXV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@@Z @ 0x18007210C (-AddEffect@ImageProcessingManager@Engine@Spectre@@QEAAXV-$shared_ptr@VImageProcessingEffect@Engi.c)
 *     ?UpdateEffectBuffers@ImageProcessingManager@Engine@Spectre@@IEAAXPEAVRenderDevice@23@@Z @ 0x180073BA8 (-UpdateEffectBuffers@ImageProcessingManager@Engine@Spectre@@IEAAXPEAVRenderDevice@23@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     std::_Test_callable__lambda_c3255ca82109f45dbf65110c90bf1ea2___ @ 0x180071B10 (std--_Test_callable__lambda_c3255ca82109f45dbf65110c90bf1ea2___.c)
 *     ?GetOffscreenDepthBuffer@ImageProcessingManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@W4OffscreenTargetSize@123@@Z @ 0x180073374 (-GetOffscreenDepthBuffer@ImageProcessingManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VDepthBuffer.c)
 *     ?SetResources@ImageProcessingEffect@Engine@Spectre@@UEAAXV?$shared_ptr@VImageProcessingCamera@Engine@Spectre@@@std@@V?$shared_ptr@VSampler@Engine@Spectre@@@5@V?$shared_ptr@VDepthBuffer@Engine@Spectre@@@5@V?$function@$$A6A?AU?$pair@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V?$shared_ptr@VMesh@Engine@Spectre@@@2@@std@@XZ@5@V?$shared_ptr@VMaterial@Engine@Spectre@@@5@@Z @ 0x180097EB0 (-SetResources@ImageProcessingEffect@Engine@Spectre@@UEAAXV-$shared_ptr@VImageProcessingCamera@En.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::ImageProcessingManager::SetEffectResources(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rsi
  _QWORD *v5; // r14
  unsigned int v6; // eax
  int v7; // r8d
  int v8; // r9d
  std::_Ref_count_base *v9; // rcx
  __int64 v10; // [rsp+30h] [rbp-49h] BYREF
  __int64 v11; // [rsp+40h] [rbp-39h] BYREF
  __int64 v12; // [rsp+50h] [rbp-29h] BYREF
  __int64 v13; // [rsp+60h] [rbp-19h] BYREF
  _QWORD v14[7]; // [rsp+70h] [rbp-9h] BYREF
  _QWORD *v15; // [rsp+A8h] [rbp+2Fh]

  v4 = *a2;
  v5 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v10,
         a1 + 44);
  v15 = 0LL;
  if ( std::_Test_callable__lambda_c3255ca82109f45dbf65110c90bf1ea2___() )
  {
    v14[0] = &std::_Func_impl_no_alloc<_lambda_c3255ca82109f45dbf65110c90bf1ea2_,std::pair<std::shared_ptr<Spectre::Engine::SceneNode>,std::shared_ptr<Spectre::Engine::Mesh>>,>::`vftable';
    v14[1] = a1;
    v15 = v14;
  }
  Spectre::Engine::ImageProcessingManager::GetOffscreenDepthBuffer((__int64)a1, &v11, 0);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    &v12,
    a1 + 38);
  v6 = (unsigned int)std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
                       &v13,
                       a1 + 34);
  Spectre::Engine::ImageProcessingEffect::SetResources(v4, v6, v7, v8, (__int64)v14, (__int64)v5);
  v9 = (std::_Ref_count_base *)a2[1];
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
}

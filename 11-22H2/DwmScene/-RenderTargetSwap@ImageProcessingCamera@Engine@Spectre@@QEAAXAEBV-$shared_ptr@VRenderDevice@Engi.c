/*
 * XREFs of ?RenderTargetSwap@ImageProcessingCamera@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@5@V?$shared_ptr@VTexture@Engine@Spectre@@@5@I@Z @ 0x180097BD0
 * Callers:
 *     ?Display@ImageProcessingManager@Engine@Spectre@@IEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@5@@Z @ 0x180072F50 (-Display@ImageProcessingManager@Engine@Spectre@@IEAAXAEBV-$shared_ptr@VIRenderOutput@Engine@Spec.c)
 *     ?ApplyBlur@ImageProcessingEffectBlur@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@V?$shared_ptr@VTexture@Engine@Spectre@@@5@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@5@@Z @ 0x18009C150 (-ApplyBlur@ImageProcessingEffectBlur@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderDevice@Engine@.c)
 *     ?ApplyDownsample@ImageProcessingEffectBlur@Engine@Spectre@@MEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@V45@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@5@@Z @ 0x18009C400 (-ApplyDownsample@ImageProcessingEffectBlur@Engine@Spectre@@MEAA-AV-$shared_ptr@VTexture@Engine@S.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?RenderTargetSwap@CommandList@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@5@I@Z @ 0x180039474 (-RenderTargetSwap@CommandList@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VFrameBuffer@Engine@Spectre@.c)
 *     ?GetCommandList@Camera@Engine@Spectre@@QEBA?AV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@@Z @ 0x18005BA04 (-GetCommandList@Camera@Engine@Spectre@@QEBA-AV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@AE.c)
 *     ?SetFrameBuffer@Camera@Engine@Spectre@@QEAAXV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@Z @ 0x18005D1EC (-SetFrameBuffer@Camera@Engine@Spectre@@QEAAXV-$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::ImageProcessingCamera::RenderTargetSwap(
        Spectre::Engine::Camera *this,
        __int64 *a2,
        _QWORD *a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 *v8; // rax
  std::_Ref_count_base *v9; // rcx
  std::_Ref_count_base *v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v12; // [rsp+28h] [rbp-20h]
  _QWORD v13[3]; // [rsp+30h] [rbp-18h] BYREF

  Spectre::Engine::Camera::GetCommandList((__int64)this, &v11, a2);
  Spectre::Engine::CommandList::RenderTargetSwap(v11, (__int64)a3, a4, a5);
  v8 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         v13,
         a3);
  Spectre::Engine::Camera::SetFrameBuffer(this, v8);
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  v9 = (std::_Ref_count_base *)a3[1];
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  v10 = *(std::_Ref_count_base **)(a4 + 8);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
}

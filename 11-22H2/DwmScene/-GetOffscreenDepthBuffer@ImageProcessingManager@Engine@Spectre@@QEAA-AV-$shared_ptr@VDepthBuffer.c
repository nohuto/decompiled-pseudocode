/*
 * XREFs of ?GetOffscreenDepthBuffer@ImageProcessingManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@W4OffscreenTargetSize@123@@Z @ 0x180073374
 * Callers:
 *     ?ApplyOutputState@Camera@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@Z @ 0x180059F50 (-ApplyOutputState@Camera@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VIRenderOutput@Engine@Spectre@@@s.c)
 *     ?UpdatePlanarReflection@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@IAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18006D03C (-UpdatePlanarReflection@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre.c)
 *     ?SetEffectResources@ImageProcessingManager@Engine@Spectre@@IEAAXV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@@Z @ 0x180073ACC (-SetEffectResources@ImageProcessingManager@Engine@Spectre@@IEAAXV-$shared_ptr@VImageProcessingEf.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$CreateResource@VDepthBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@XZ @ 0x1800248C4 (--$CreateResource@VDepthBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ea_1800248C4.c)
 *     ?GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ @ 0x180026598 (-GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?Create@DepthBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z @ 0x18006F640 (-Create@DepthBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z.c)
 *     ?GetActiveSizeForOffscreenRenderBuffers@ImageProcessingManager@Engine@Spectre@@QEBA?AUVector2@Math@Utils@3@W4OffscreenTargetSize@123@@Z @ 0x1800732B0 (-GetActiveSizeForOffscreenRenderBuffers@ImageProcessingManager@Engine@Spectre@@QEBA-AUVector2@Ma.c)
 *     _anonymous_namespace_::GetBufferPixelSize @ 0x1800732F0 (_anonymous_namespace_--GetBufferPixelSize.c)
 */

_QWORD *__fastcall Spectre::Engine::ImageProcessingManager::GetOffscreenDepthBuffer(__int64 a1, _QWORD *a2, int a3)
{
  __int64 **v6; // rdi
  struct Spectre::Engine::Engine *Engine; // rax
  __int64 *v8; // rax
  __int64 *ActiveSizeForOffscreenRenderBuffers; // rax
  __int64 v11; // [rsp+38h] [rbp-30h] BYREF
  std::_Ref_count_base *v12; // [rsp+40h] [rbp-28h]
  float v13; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v14; // [rsp+78h] [rbp+10h] BYREF

  v14 = a2;
  v6 = (__int64 **)(a1 + 16 * (a3 + 11LL));
  if ( !*v6 )
  {
    Engine = Spectre::Engine::RenderDevice::GetEngine(*(Spectre::Engine::RenderDevice **)(a1 + 32));
    v8 = Spectre::Engine::Engine::CreateResource<Spectre::Engine::DepthBuffer,>((__int64)Engine, &v11);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v6, v8);
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    ActiveSizeForOffscreenRenderBuffers = (__int64 *)Spectre::Engine::ImageProcessingManager::GetActiveSizeForOffscreenRenderBuffers(
                                                       a1,
                                                       &v13,
                                                       a3);
    anonymous_namespace_::GetBufferPixelSize((int *)&v14, *ActiveSizeForOffscreenRenderBuffers);
    Spectre::Engine::DepthBuffer::Create(*v6, (unsigned int)v14, HIDWORD(v14), 1u, 0, *(_QWORD *)(a1 + 32));
  }
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(a2, v6);
  return a2;
}

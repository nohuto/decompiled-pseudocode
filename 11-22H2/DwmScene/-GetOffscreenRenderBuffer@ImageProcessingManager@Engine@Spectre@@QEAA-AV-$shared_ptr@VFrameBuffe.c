/*
 * XREFs of ?GetOffscreenRenderBuffer@ImageProcessingManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@W4OffscreenTargetSize@123@@Z @ 0x180073438
 * Callers:
 *     ?ApplyOutputState@Camera@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@Z @ 0x180059F50 (-ApplyOutputState@Camera@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VIRenderOutput@Engine@Spectre@@@s.c)
 *     ?UpdatePlanarReflection@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@IAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18006D03C (-UpdatePlanarReflection@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$CreateResource@VFrameBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@W4ResourceDevicePolicy@01@@Z @ 0x18001085C (--$CreateResource@VFrameBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr@VFrameBu.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x18001C59C (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C59C.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEBD$$QEAV10@@Z @ 0x18001C668 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C668.c)
 *     ?GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ @ 0x180026598 (-GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ??$_Integral_to_string@DH@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@H@Z @ 0x180027C00 (--$_Integral_to_string@DH@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@0@H@.c)
 *     ?Create@FrameBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z @ 0x18002836C (-Create@FrameBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z.c)
 *     ?SetName@RendererResource@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800297A4 (-SetName@RendererResource@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 *     ?GetActiveSizeForOffscreenRenderBuffers@ImageProcessingManager@Engine@Spectre@@QEBA?AUVector2@Math@Utils@3@W4OffscreenTargetSize@123@@Z @ 0x1800732B0 (-GetActiveSizeForOffscreenRenderBuffers@ImageProcessingManager@Engine@Spectre@@QEBA-AUVector2@Ma.c)
 *     _anonymous_namespace_::GetBufferPixelSize @ 0x1800732F0 (_anonymous_namespace_--GetBufferPixelSize.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall Spectre::Engine::ImageProcessingManager::GetOffscreenRenderBuffer(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // rbx
  __int64 *v6; // rsi
  struct Spectre::Engine::Engine *Engine; // rax
  __int64 *ActiveSizeForOffscreenRenderBuffers; // rax
  _QWORD *v9; // rax
  __int64 v10; // rbx
  void **v11; // rax
  int v13[4]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v14; // [rsp+40h] [rbp-59h] BYREF
  std::_Ref_count_base *v15; // [rsp+48h] [rbp-51h]
  _BYTE v16[32]; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v17[4]; // [rsp+80h] [rbp-19h] BYREF
  _QWORD v18[4]; // [rsp+A0h] [rbp+7h] BYREF

  v3 = a3;
  *(_QWORD *)v13 = a2;
  v6 = (__int64 *)(a1 + 16 * (a3 + 5LL));
  if ( !*v6 )
  {
    Engine = Spectre::Engine::RenderDevice::GetEngine(*(Spectre::Engine::RenderDevice **)(a1 + 32));
    Spectre::Engine::Engine::CreateResource<Spectre::Engine::FrameBuffer,>((__int64)Engine, &v14);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v6, &v14);
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
    ActiveSizeForOffscreenRenderBuffers = (__int64 *)Spectre::Engine::ImageProcessingManager::GetActiveSizeForOffscreenRenderBuffers(
                                                       a1,
                                                       (float *)&v14,
                                                       v3);
    anonymous_namespace_::GetBufferPixelSize(v13, *ActiveSizeForOffscreenRenderBuffers);
    std::_Integral_to_string<char,int>((__int64)v16, (int)flt_180113050[v3]);
    v9 = std::operator+<char>(v18, (__int64)"ImageProcessing Scaled ", v16);
    std::operator+<char>(v17, v9, (__int64)"x");
    std::string::_Tidy_deallocate((__int64)v18);
    std::string::_Tidy_deallocate((__int64)v16);
    v10 = *v6;
    v11 = (void **)std::string::string(&v14, (__int64)v17);
    Spectre::Engine::RendererResource::SetName(v10, v11);
    Spectre::Engine::FrameBuffer::Create(
      (Spectre::Engine::FrameBuffer *)*v6,
      v13[0],
      v13[1],
      *(_DWORD *)(a1 + 20),
      *(_DWORD *)(a1 + 28) & 0xFFFFFFBF,
      *(struct Spectre::Engine::RenderDevice **)(a1 + 32));
    std::string::_Tidy_deallocate((__int64)v17);
  }
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(a2, v6);
  return a2;
}

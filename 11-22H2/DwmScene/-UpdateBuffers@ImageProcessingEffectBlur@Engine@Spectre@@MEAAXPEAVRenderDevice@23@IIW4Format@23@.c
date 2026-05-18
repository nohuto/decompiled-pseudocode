/*
 * XREFs of ?UpdateBuffers@ImageProcessingEffectBlur@Engine@Spectre@@MEAAXPEAVRenderDevice@23@IIW4Format@23@I@Z @ 0x18009D410
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _o_ceilf_0 @ 0x18000BFFC (_o_ceilf_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$CreateResource@VFrameBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@W4ResourceDevicePolicy@01@@Z @ 0x18001085C (--$CreateResource@VFrameBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr@VFrameBu.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x18001C59C (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C59C.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEBD$$QEAV10@@Z @ 0x18001C668 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C668.c)
 *     ?GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ @ 0x180026598 (-GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?clear@?$vector@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@2@@std@@QEAAXXZ @ 0x1800278E4 (-clear@-$vector@V-$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VFra.c)
 *     ??$_Integral_to_string@DH@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@H@Z @ 0x180027C00 (--$_Integral_to_string@DH@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@0@H@.c)
 *     ?Create@FrameBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z @ 0x18002836C (-Create@FrameBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z.c)
 *     ?SetName@RendererResource@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800297A4 (-SetName@RendererResource@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@1@QEAV21@AEBV21@@Z @ 0x18002E528 (--$_Emplace_reallocate@AEBV-$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@-$vector@V-$shared_p.c)
 *     ?push_back@?$vector@UVector2@Math@Utils@Spectre@@V?$allocator@UVector2@Math@Utils@Spectre@@@std@@@std@@QEAAX$$QEAUVector2@Math@Utils@Spectre@@@Z @ 0x18008D5DC (-push_back@-$vector@UVector2@Math@Utils@Spectre@@V-$allocator@UVector2@Math@Utils@Spectre@@@std@.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall Spectre::Engine::ImageProcessingEffectBlur::UpdateBuffers(
        __int64 a1,
        Spectre::Engine::RenderDevice *a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  float v8; // xmm1_4
  float v9; // xmm8_4
  float v10; // xmm0_4
  float v11; // xmm9_4
  float v12; // xmm6_4
  unsigned int v13; // r14d
  unsigned int v14; // r15d
  Spectre::Engine::FrameBuffer **v15; // rsi
  Spectre::Engine::FrameBuffer *v16; // rbx
  void **v17; // rax
  Spectre::Engine::FrameBuffer **v18; // rsi
  Spectre::Engine::FrameBuffer *v19; // rbx
  void **v20; // rax
  __int64 v21; // rsi
  char **v22; // r14
  int v23; // edi
  int v24; // r15d
  _QWORD *v25; // rax
  Spectre::Engine::FrameBuffer *v26; // rbx
  void **v27; // rax
  float v28; // xmm0_4
  _QWORD *v29; // rcx
  __int64 v30; // [rsp+38h] [rbp-D0h] BYREF
  Spectre::Engine::FrameBuffer *v31; // [rsp+40h] [rbp-C8h] BYREF
  std::_Ref_count_base *v32; // [rsp+48h] [rbp-C0h]
  struct Spectre::Engine::Engine *Engine; // [rsp+50h] [rbp-B8h]
  _QWORD v34[4]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v35[4]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v36[32]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v37[4]; // [rsp+C0h] [rbp-48h] BYREF

  v8 = (float)*(int *)(a1 + 376);
  v9 = (float)a3;
  v10 = (float)a3 / v8;
  v11 = (float)a4;
  v12 = (float)a4 / v8;
  *(float *)(a1 + 264) = v10;
  *(float *)(a1 + 268) = v12;
  v13 = (int)o_ceilf_0(v10);
  v14 = (int)o_ceilf_0(v12);
  if ( !v13 )
    v13 = 1;
  if ( !v14 )
    v14 = 1;
  LODWORD(v30) = *(_DWORD *)(a1 + 376);
  Engine = Spectre::Engine::RenderDevice::GetEngine(a2);
  Spectre::Engine::Engine::CreateResource<Spectre::Engine::FrameBuffer,>((__int64)Engine, &v31);
  v15 = (Spectre::Engine::FrameBuffer **)(a1 + 184);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(a1 + 184), (__int64 *)&v31);
  if ( v32 )
    std::_Ref_count_base::_Decref(v32);
  v16 = *v15;
  v17 = (void **)std::string::string(v35, (__int64)"ImageProcessingBlurX");
  Spectre::Engine::RendererResource::SetName((__int64)v16, v17);
  Spectre::Engine::FrameBuffer::Create(*v15, v13, v14, a5, a6, 0LL);
  Spectre::Engine::Engine::CreateResource<Spectre::Engine::FrameBuffer,>((__int64)Engine, &v31);
  v18 = (Spectre::Engine::FrameBuffer **)(a1 + 200);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(a1 + 200), (__int64 *)&v31);
  if ( v32 )
    std::_Ref_count_base::_Decref(v32);
  v19 = *v18;
  v20 = (void **)std::string::string(v35, (__int64)"ImageProcessingBlurY");
  Spectre::Engine::RendererResource::SetName((__int64)v19, v20);
  Spectre::Engine::FrameBuffer::Create(*v18, v13, v14, a5, a6, 0LL);
  v21 = a1 + 216;
  std::vector<std::shared_ptr<Spectre::Engine::FrameBuffer>>::clear((__int64 *)(a1 + 216));
  v22 = (char **)(a1 + 240);
  *(_QWORD *)(a1 + 248) = *(_QWORD *)(a1 + 240);
  v23 = 2;
  v24 = v30;
  while ( v23 <= v24 )
  {
    Spectre::Engine::Engine::CreateResource<Spectre::Engine::FrameBuffer,>((__int64)Engine, &v31);
    std::_Integral_to_string<char,int>((__int64)v36, v23);
    v25 = std::operator+<char>(v37, (__int64)"ImageProcessingBlur Downsample ", v36);
    std::operator+<char>(v35, v25, (__int64)"x");
    std::string::_Tidy_deallocate((__int64)v37);
    std::string::_Tidy_deallocate((__int64)v36);
    v26 = v31;
    v27 = (void **)std::string::string(v34, (__int64)v35);
    Spectre::Engine::RendererResource::SetName((__int64)v26, v27);
    LODWORD(v26) = (int)o_ceilf_0(v9 / (float)v23);
    v28 = o_ceilf_0(v11 / (float)v23);
    Spectre::Engine::FrameBuffer::Create(v31, (unsigned int)v26, (int)v28, a5, a6, 0LL);
    v29 = *(_QWORD **)(v21 + 8);
    if ( v29 == *(_QWORD **)(v21 + 16) )
    {
      std::vector<std::shared_ptr<Spectre::Engine::FrameBuffer>>::_Emplace_reallocate<std::shared_ptr<Spectre::Engine::FrameBuffer> const &>(
        (_QWORD *)v21,
        *(char **)(v21 + 8),
        &v31);
    }
    else
    {
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
        v29,
        &v31);
      *(_QWORD *)(v21 + 8) += 16LL;
    }
    *(float *)&v30 = v9 / (float)v23;
    *((float *)&v30 + 1) = v11 / (float)v23;
    std::vector<Spectre::Utils::Math::Vector2>::push_back(v22, &v30);
    v23 *= 2;
    std::string::_Tidy_deallocate((__int64)v35);
    if ( v32 )
      std::_Ref_count_base::_Decref(v32);
  }
}

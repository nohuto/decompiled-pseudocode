/*
 * XREFs of ?CreateBuffers@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@AEBUImageProcessingConfiguration@23@@Z @ 0x180072BE8
 * Callers:
 *     ?UpdateRenderTarget@RenderOutput@Engine@Spectre@@UEAAXMMMM@Z @ 0x18002D130 (-UpdateRenderTarget@RenderOutput@Engine@Spectre@@UEAAXMMMM@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$CreateResource@VFrameBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@W4ResourceDevicePolicy@01@@Z @ 0x18001085C (--$CreateResource@VFrameBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr@VFrameBu.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$CreateResource@VTexture@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ @ 0x180016268 (--$CreateResource@VTexture@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr_ea_180016268.c)
 *     ??$CreateResource@VDepthBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@XZ @ 0x1800248C4 (--$CreateResource@VDepthBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ea_1800248C4.c)
 *     ?GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ @ 0x180026598 (-GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?GetID@RenderDevice@Engine@Spectre@@QEBA?AW4RenderDeviceID@23@XZ @ 0x1800265D0 (-GetID@RenderDevice@Engine@Spectre@@QEBA-AW4RenderDeviceID@23@XZ.c)
 *     ?Create@FrameBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z @ 0x18002836C (-Create@FrameBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z.c)
 *     ?SetName@RendererResource@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800297A4 (-SetName@RendererResource@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 *     ?GetSampleCount@Texture@Engine@Spectre@@QEBAIW4RenderDeviceID@23@@Z @ 0x18002C348 (-GetSampleCount@Texture@Engine@Spectre@@QEBAIW4RenderDeviceID@23@@Z.c)
 *     ?GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z @ 0x180034014 (-GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z.c)
 *     ?Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z @ 0x180055E20 (-Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z.c)
 *     ?Create@DepthBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z @ 0x18006F640 (-Create@DepthBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z.c)
 *     ?UpdateEffectBuffers@ImageProcessingManager@Engine@Spectre@@IEAAXPEAVRenderDevice@23@@Z @ 0x180073BA8 (-UpdateEffectBuffers@ImageProcessingManager@Engine@Spectre@@IEAAXPEAVRenderDevice@23@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::ImageProcessingManager::CreateBuffers(
        Spectre::Engine::ImageProcessingManager *this,
        struct Spectre::Engine::RenderDevice *a2,
        const struct Spectre::Engine::ImageProcessingConfiguration *a3)
{
  struct Spectre::Engine::Engine *Engine; // rax
  _BYTE *v7; // rdx
  __int64 v8; // r8
  int v9; // r15d
  bool v10; // cl
  _QWORD *v11; // rbx
  unsigned int v12; // eax
  int v13; // r15d
  std::_Ref_count_base *v14; // rcx
  _QWORD *i; // rbx
  std::_Ref_count_base *v16; // rcx
  Spectre::Engine::FrameBuffer **v17; // r12
  Spectre::Engine::FrameBuffer *v18; // rbx
  void **v19; // rax
  struct Spectre::Utils::IConfigurationManager *Configuration; // rax
  bool v21; // cl
  int v22; // r12d
  __int64 *v23; // rax
  __int64 **v24; // r15
  __int64 *v25; // rbx
  void **v26; // rax
  unsigned int ID; // eax
  __int64 *v28; // r15
  __int64 v29; // rcx
  unsigned int v30; // r12d
  __int64 *v31; // rax
  __int64 v32; // rbx
  void **v33; // rax
  rsize_t v34; // [rsp+40h] [rbp-30h]
  std::_Ref_count_base *v35[2]; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v36; // [rsp+B0h] [rbp+40h]
  Spectre::Engine::Engine *v37; // [rsp+C0h] [rbp+50h]

  if ( *((_QWORD *)this + 1) != *(_QWORD *)a3
    || *((_DWORD *)this + 4) != *((_DWORD *)a3 + 2)
    || *((_DWORD *)this + 5) != *((_DWORD *)a3 + 3)
    || *((_DWORD *)this + 6) != *((_DWORD *)a3 + 4)
    || *((_DWORD *)this + 7) != *((_DWORD *)a3 + 5) )
  {
    *(_OWORD *)((char *)this + 8) = *(_OWORD *)a3;
    *((_QWORD *)this + 3) = *((_QWORD *)a3 + 2);
    Engine = Spectre::Engine::RenderDevice::GetEngine(a2);
    v9 = *(_DWORD *)(v8 + 20);
    v37 = Engine;
    v10 = (v7[328] & 1) != 0
       && (*(unsigned __int8 (__fastcall **)(struct Spectre::Engine::RenderDevice *, __int64))(*(_QWORD *)v7 + 96LL))(
            a2,
            8LL);
    v11 = (_QWORD *)((char *)this + 80);
    v12 = v9 & 0xFFFFFFBF;
    v13 = v9 | 0x40;
    if ( !v10 )
      v13 = v12;
    while ( v11 != (_QWORD *)((char *)this + 176) )
    {
      *v11 = 0LL;
      v14 = (std::_Ref_count_base *)v11[1];
      v11[1] = 0LL;
      if ( v14 )
        std::_Ref_count_base::_Decref(v14);
      v11 += 2;
    }
    for ( i = (_QWORD *)((char *)this + 176); i != (_QWORD *)((char *)this + 272); i += 2 )
    {
      *i = 0LL;
      v16 = (std::_Ref_count_base *)i[1];
      i[1] = 0LL;
      if ( v16 )
        std::_Ref_count_base::_Decref(v16);
    }
    Spectre::Engine::Engine::CreateResource<Spectre::Engine::FrameBuffer,>((__int64)v37, v35);
    v17 = (Spectre::Engine::FrameBuffer **)((char *)this + 456);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 57, (__int64 *)v35);
    if ( v35[1] )
      std::_Ref_count_base::_Decref(v35[1]);
    v18 = *v17;
    v19 = (void **)std::string::string(v35, (__int64)"ImageProcessing Input FrameBuffer");
    Spectre::Engine::RendererResource::SetName((__int64)v18, v19);
    Spectre::Engine::FrameBuffer::Create(*v17, *(_DWORD *)a3, *((_DWORD *)a3 + 1), *((_DWORD *)a3 + 2), v13, a2);
    Configuration = Spectre::Engine::Engine::GetConfiguration(v37, 1);
    v21 = (*(unsigned __int8 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kRenderer_RenderPasses_DepthPrepassReadable,
            0LL)
       && (*(unsigned __int8 (__fastcall **)(struct Spectre::Engine::RenderDevice *, __int64))(*(_QWORD *)a2 + 96LL))(
            a2,
            6LL);
    v22 = v13 | 0x100;
    v36 = v21 + 1;
    if ( !v21 )
      v22 = v13;
    v23 = Spectre::Engine::Engine::CreateResource<Spectre::Engine::DepthBuffer,>((__int64)v37, v35);
    v24 = (__int64 **)((char *)this + 472);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 59, v23);
    if ( v35[1] )
      std::_Ref_count_base::_Decref(v35[1]);
    v25 = *v24;
    v26 = (void **)std::string::string(v35, (__int64)"ImageProcessing Input DepthBuffer)");
    Spectre::Engine::RendererResource::SetName((__int64)v25, v26);
    Spectre::Engine::DepthBuffer::Create(*v24, *(_DWORD *)a3, *((_DWORD *)a3 + 1), v36, v22, (__int64)a2);
    ID = Spectre::Engine::RenderDevice::GetID((__int64)a2);
    v28 = (__int64 *)((char *)this + 64);
    v29 = *(_QWORD *)(*((_QWORD *)this + 57) + 136LL);
    if ( v29 && (unsigned int)Spectre::Engine::Texture::GetSampleCount(v29, ID) > 1 )
    {
      v30 = *((_DWORD *)a3 + 5) & 0xFFFFFFBC | 3;
      v31 = Spectre::Engine::Engine::CreateResource<Spectre::Engine::Texture,>((__int64)v37, v35);
      std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 8, v31);
      if ( v35[1] )
        std::_Ref_count_base::_Decref(v35[1]);
      v32 = *v28;
      v33 = (void **)std::string::string(v35, (__int64)"ImageProcessing Input Texture");
      Spectre::Engine::RendererResource::SetName(v32, v33);
      LODWORD(v34) = 0;
      Spectre::Engine::Texture::Create(
        *v28,
        *(_DWORD *)a3,
        *((_DWORD *)a3 + 1),
        0,
        *((_DWORD *)a3 + 2),
        0,
        v30,
        0LL,
        v34,
        a2);
    }
    else
    {
      *(_OWORD *)v35 = 0LL;
      std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 8, (__int64 *)v35);
      if ( v35[1] )
        std::_Ref_count_base::_Decref(v35[1]);
    }
    Spectre::Engine::ImageProcessingManager::UpdateEffectBuffers(this, a2);
  }
}

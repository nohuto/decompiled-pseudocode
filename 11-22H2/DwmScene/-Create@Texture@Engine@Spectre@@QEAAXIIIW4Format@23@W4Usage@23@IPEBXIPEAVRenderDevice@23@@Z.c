/*
 * XREFs of ?Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z @ 0x180055E20
 * Callers:
 *     ?Create@FrameBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z @ 0x18002836C (-Create@FrameBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z.c)
 *     ?CreateDeviceTextureConstantColor@LightProbe@Engine@Spectre@@AEAAXUColor@Math@Utils@3@@Z @ 0x1800518C8 (-CreateDeviceTextureConstantColor@LightProbe@Engine@Spectre@@AEAAXUColor@Math@Utils@3@@Z.c)
 *     ?Create@Texture@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@I@Z @ 0x180055D68 (-Create@Texture@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@I@Z.c)
 *     ?CreatePatternTexture@Texture@Engine@Spectre@@QEAAXW4EPatternType@123@IPEAVRenderDevice@23@@Z @ 0x180056470 (-CreatePatternTexture@Texture@Engine@Spectre@@QEAAXW4EPatternType@123@IPEAVRenderDevice@23@@Z.c)
 *     ?CreateEmptyTexture@Engine@Spectre@@YA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@PEAV112@IIW4Format@12@W4Usage@12@I@Z @ 0x18006FA04 (-CreateEmptyTexture@Engine@Spectre@@YA-AV-$shared_ptr@VTexture@Engine@Spectre@@@std@@PEAV112@IIW.c)
 *     ?CreateBuffers@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@AEBUImageProcessingConfiguration@23@@Z @ 0x180072BE8 (-CreateBuffers@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@AEBUImageProcessi.c)
 *     ?CreateTexture@ColorTransform@Engine@Spectre@@AEAAXXZ @ 0x18008F910 (-CreateTexture@ColorTransform@Engine@Spectre@@AEAAXXZ.c)
 *     _lambda_5efd0f16faa6f6439fdb99826dc3e8ab_::operator() @ 0x1800D5AEC (_lambda_5efd0f16faa6f6439fdb99826dc3e8ab_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     memcpy_s @ 0x18000FF54 (memcpy_s.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x180013300 (-_Tidy@-$vector@V-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VLigh.c)
 *     ??1?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@std@@@std@@QEAA@XZ @ 0x180025A6C (--1-$unique_ptr@$$BY0A@IU-$default_delete@$$BY0A@I@std@@@std@@QEAA@XZ.c)
 *     ?GetEngine@SharedResource@Engine@Spectre@@UEBAPEAV223@XZ @ 0x1800295B0 (-GetEngine@SharedResource@Engine@Spectre@@UEBAPEAV223@XZ.c)
 *     ?GetOption@RendererResource@Engine@Spectre@@QEBA_NW4EResourceOption@123@@Z @ 0x1800295E4 (-GetOption@RendererResource@Engine@Spectre@@QEBA_NW4EResourceOption@123@@Z.c)
 *     ?SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z @ 0x1800297F0 (-SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z.c)
 *     ?SafeGetDeviceList@Engine@1Spectre@@QEAA?AV?$vector@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x1800364DC (-SafeGetDeviceList@Engine@1Spectre@@QEAA-AV-$vector@V-$shared_ptr@VRenderDevice@Engine@Spectre@@.c)
 *     ??$make_unique@$$BY0A@E$0A@@std@@YA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@0@_K@Z @ 0x180050F80 (--$make_unique@$$BY0A@E$0A@@std@@YA-AV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@0@_K.c)
 *     ?_Tidy@?$vector@UD3D11_INPUT_ELEMENT_DESC@@V?$allocator@UD3D11_INPUT_ELEMENT_DESC@@@std@@@std@@AEAAXXZ @ 0x180051E80 (-_Tidy@-$vector@UD3D11_INPUT_ELEMENT_DESC@@V-$allocator@UD3D11_INPUT_ELEMENT_DESC@@@std@@@std@@A.c)
 *     ??$?4U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@$0A@@?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180054D38 (--$-4U-$default_delete@UTextureDesc@Engine@Spectre@@@std@@$0A@@-$unique_ptr@UTextureDesc@Engine@.c)
 *     ??$?4U?$default_delete@UTextureImageSet@Engine@Spectre@@@std@@$0A@@?$unique_ptr@UTextureImageSet@Engine@Spectre@@U?$default_delete@UTextureImageSet@Engine@Spectre@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180054D74 (--$-4U-$default_delete@UTextureImageSet@Engine@Spectre@@@std@@$0A@@-$unique_ptr@UTextureImageSet.c)
 *     ??$make_unique@UTextureDesc@Engine@Spectre@@AEAIAEAIAEAIAEAW4Format@23@AEAIAEAW4Usage@23@$0A@@std@@YA?AV?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@0@AEAI00AEAW4Format@Engine@Spectre@@0AEAW4Usage@34@@Z @ 0x180054FF0 (--$make_unique@UTextureDesc@Engine@Spectre@@AEAIAEAIAEAIAEAW4Format@23@AEAIAEAW4Usage@23@$0A@@st.c)
 *     ??$make_unique@UTextureDesc@Engine@Spectre@@AEAIAEAIAEAW4Format@23@AEAIAEAW4Usage@23@$0A@@std@@YA?AV?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@0@AEAI0AEAW4Format@Engine@Spectre@@0AEAW4Usage@34@@Z @ 0x180055080 (--$make_unique@UTextureDesc@Engine@Spectre@@AEAIAEAIAEAW4Format@23@AEAIAEAW4Usage@23@$0A@@std@@Y.c)
 *     ??$make_unique@UTextureImageSet@Engine@Spectre@@UTextureImageSetView@23@V?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@AEAI$0A@@std@@YA?AV?$unique_ptr@UTextureImageSet@Engine@Spectre@@U?$default_delete@UTextureImageSet@Engine@Spectre@@@std@@@0@$$QEAUTextureImageSetView@Engine@Spectre@@$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@0@AEAI@Z @ 0x180055158 (--$make_unique@UTextureImageSet@Engine@Spectre@@UTextureImageSetView@23@V-$unique_ptr@$$BY0A@EU-.c)
 *     ??1?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x1800556D4 (--1-$unique_ptr@UTextureDesc@Engine@Spectre@@U-$default_delete@UTextureDesc@Engine@Spectre@@@std.c)
 *     ??1?$unique_ptr@UTextureImageSet@Engine@Spectre@@U?$default_delete@UTextureImageSet@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x1800556F8 (--1-$unique_ptr@UTextureImageSet@Engine@Spectre@@U-$default_delete@UTextureImageSet@Engine@Spect.c)
 *     ?CreateDefaultImageSetView@Engine@Spectre@@YA?AUTextureImageSetView@12@AEBUTextureDesc@12@PEBX_K@Z @ 0x180056318 (-CreateDefaultImageSetView@Engine@Spectre@@YA-AUTextureImageSetView@12@AEBUTextureDesc@12@PEBX_K.c)
 *     ?CreateDeviceTextureHelper@Texture@Engine@Spectre@@AEAAXAEBUTextureImageSetView@23@PEAVRenderDevice@23@@Z @ 0x180056368 (-CreateDeviceTextureHelper@Texture@Engine@Spectre@@AEAAXAEBUTextureImageSetView@23@PEAVRenderDev.c)
 *     Spectre::Engine::GetFormatSlicePitch @ 0x180056720 (Spectre--Engine--GetFormatSlicePitch.c)
 *     ?SetActiveSize@Texture@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@@Z @ 0x18005696C (-SetActiveSize@Texture@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@@Z.c)
 *     ?reset@?$unique_ptr@UTextureImageSet@Engine@Spectre@@U?$default_delete@UTextureImageSet@Engine@Spectre@@@std@@@std@@QEAAXPEAUTextureImageSet@Engine@Spectre@@@Z @ 0x180056B34 (-reset@-$unique_ptr@UTextureImageSet@Engine@Spectre@@U-$default_delete@UTextureImageSet@Engine@S.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Spectre::Engine::Texture::Create(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        int a6,
        int a7,
        void *a8,
        rsize_t DestinationSize,
        struct Spectre::Engine::RenderDevice *a10)
{
  void *v12; // r13
  unsigned __int64 v13; // r12
  struct Spectre::Engine::RenderDevice *v14; // r14
  __int64 *v15; // rax
  void **p_Destination; // rdx
  char v17; // bl
  unsigned int **v18; // r15
  char v19; // r13
  _DWORD *v20; // r8
  unsigned int v21; // eax
  int v22; // r8d
  int v23; // r8d
  __int64 v24; // rcx
  _QWORD *v25; // rbx
  _QWORD *v26; // r14
  struct Spectre::Engine::RenderDevice *v27; // r12
  void *v28; // r14
  __int64 v29; // rbx
  int FormatSlicePitch; // eax
  unsigned int v31; // eax
  int v32; // r8d
  __int64 *v33; // rax
  void *Destination; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v35; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v36; // [rsp+50h] [rbp-B0h] BYREF
  void *Source; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+60h] [rbp-A0h] BYREF
  int v39; // [rsp+68h] [rbp-98h]
  unsigned int v40; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v41; // [rsp+78h] [rbp-88h] BYREF
  _QWORD *v42; // [rsp+80h] [rbp-80h] BYREF
  _QWORD *v43; // [rsp+88h] [rbp-78h]
  _BYTE v44[24]; // [rsp+A0h] [rbp-60h] BYREF
  char v45[32]; // [rsp+B8h] [rbp-48h] BYREF
  struct Spectre::Engine::RenderDevice *v46; // [rsp+D8h] [rbp-28h] BYREF
  std::_Ref_count_base *v47; // [rsp+E0h] [rbp-20h]
  _BYTE pExceptionObject[56]; // [rsp+F8h] [rbp-8h] BYREF

  v36 = a2;
  v35 = a3;
  LODWORD(v38) = a4;
  v12 = a8;
  Source = a8;
  v13 = (unsigned int)DestinationSize;
  v39 = DestinationSize;
  v40 = DestinationSize;
  v14 = a10;
  LODWORD(Destination) = 0;
  std::unique_ptr<Spectre::Engine::TextureImageSet>::reset(a1 + 136, 0LL);
  if ( a4 )
  {
    v15 = std::make_unique<Spectre::Engine::TextureDesc,unsigned int &,unsigned int &,unsigned int &,enum Spectre::Engine::Format &,unsigned int &,enum Spectre::Engine::Usage &,0>(
            (__int64 *)&v46,
            &v36,
            &v35,
            (unsigned int *)&v38,
            &a5,
            &a7,
            &a6);
    Destination = (void *)*v15;
    p_Destination = &Destination;
    v17 = 12;
  }
  else
  {
    v15 = std::make_unique<Spectre::Engine::TextureDesc,unsigned int &,unsigned int &,enum Spectre::Engine::Format &,unsigned int &,enum Spectre::Engine::Usage &,0>(
            (__int64 *)&v41,
            &v36,
            &v35,
            &a5,
            &a7,
            &a6);
    v38 = *v15;
    p_Destination = (void **)&v38;
    v17 = 3;
  }
  *v15 = 0LL;
  v18 = (unsigned int **)(a1 + 128);
  std::unique_ptr<Spectre::Engine::TextureDesc>::operator=<std::default_delete<Spectre::Engine::TextureDesc>,0>(
    (void **)(a1 + 128),
    p_Destination);
  if ( (v17 & 8) != 0 )
  {
    v17 &= ~8u;
    std::unique_ptr<Spectre::Engine::TextureDesc>::~unique_ptr<Spectre::Engine::TextureDesc>(&Destination);
  }
  if ( (v17 & 4) != 0 )
  {
    v17 &= ~4u;
    std::unique_ptr<Spectre::Engine::TextureDesc>::~unique_ptr<Spectre::Engine::TextureDesc>((void **)&v46);
  }
  if ( (v17 & 2) != 0 )
  {
    v17 &= ~2u;
    std::unique_ptr<Spectre::Engine::TextureDesc>::~unique_ptr<Spectre::Engine::TextureDesc>((void **)&v38);
  }
  if ( (v17 & 1) != 0 )
    std::unique_ptr<Spectre::Engine::TextureDesc>::~unique_ptr<Spectre::Engine::TextureDesc>((void **)&v41);
  v41 = v13;
  Spectre::Engine::CreateDefaultImageSetView(v44, *v18, v12, v13);
  if ( v14 )
    Spectre::Engine::RendererResource::SetOption(a1, 1, 1);
  Destination = Spectre::Engine::SharedResource::GetEngine((Spectre::Engine::SharedResource *)a1);
  v19 = 0;
  if ( Spectre::Engine::RendererResource::GetOption(a1, 1) )
  {
    if ( v14 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(struct Spectre::Engine::RenderDevice *))(*(_QWORD *)v14 + 32LL))(v14) )
      {
        std::string::string(&v46, (__int64)"Texture cannot be created to just target generic devices");
        v21 = (unsigned int)std::string::string(
                              &v42,
                              (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\"
                                       "cpp\\source\\engine\\texture.cpp");
        Spectre::Engine::EngineException::EngineException(
          (unsigned int)pExceptionObject,
          v21,
          v22,
          (unsigned int)&v46,
          0);
        throw (Spectre::Engine::EngineException *)pExceptionObject;
      }
      Spectre::Engine::Texture::CreateDeviceTextureHelper(
        (Spectre::Engine::Texture *)a1,
        (const struct Spectre::Engine::TextureImageSetView *)v44,
        v14);
      Spectre::Engine::RendererResource::SetOption(a1, 2, 0);
      Spectre::Engine::RendererResource::SetOption(v24, v23 + 4, v23);
      v19 = 1;
    }
    else
    {
      Spectre::Engine::Engine::SafeGetDeviceList((__int64)v20, &v42);
      v25 = v42;
      v26 = v43;
      if ( v42 != v43 )
      {
        do
        {
          std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
            &v46,
            v25);
          v27 = v46;
          if ( !(*(unsigned __int8 (__fastcall **)(struct Spectre::Engine::RenderDevice *))(*(_QWORD *)v46 + 32LL))(v46) )
          {
            Spectre::Engine::Texture::CreateDeviceTextureHelper(
              (Spectre::Engine::Texture *)a1,
              (const struct Spectre::Engine::TextureImageSetView *)v44,
              v27);
            v19 = 1;
          }
          if ( v47 )
            std::_Ref_count_base::_Decref(v47);
          v25 += 2;
        }
        while ( v25 != v26 );
        v13 = v41;
      }
      std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::_Tidy((__int64)&v42);
    }
    v20 = Destination;
  }
  v28 = Source;
  if ( Source && (v20[138] == 1 || !v19) )
  {
    v29 = (__int64)*v18;
    FormatSlicePitch = Spectre::Engine::GetFormatSlicePitch((*v18)[4], **v18, (*v18)[1]);
    if ( (*(_BYTE *)(v29 + 20) & 0x10) != 0 )
      FormatSlicePitch *= 6;
    if ( *(_DWORD *)(v29 + 8) * FormatSlicePitch != v39 )
    {
      std::string::string(&v46, (__int64)"Wrong buffer size");
      v31 = (unsigned int)std::string::string(
                            &v42,
                            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cp"
                                     "p\\source\\engine\\texture.cpp");
      Spectre::Engine::EngineException::EngineException((unsigned int)pExceptionObject, v31, v32, (unsigned int)&v46, 1);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    std::make_unique<unsigned char [0],0>(&Destination, v13);
    memcpy_s(Destination, v13, v28, v13);
    v33 = std::make_unique<Spectre::Engine::TextureImageSet,Spectre::Engine::TextureImageSetView,std::unique_ptr<unsigned char [0]>,unsigned int &,0>(
            (__int64 *)&Source,
            (__int64)v44,
            (__int64 *)&Destination,
            &v40);
    std::unique_ptr<Spectre::Engine::TextureImageSet>::operator=<std::default_delete<Spectre::Engine::TextureImageSet>,0>(
      (__int64 *)(a1 + 136),
      v33);
    std::unique_ptr<Spectre::Engine::TextureImageSet>::~unique_ptr<Spectre::Engine::TextureImageSet>(&Source);
    std::unique_ptr<unsigned int [0]>::~unique_ptr<unsigned int [0]>(&Destination);
  }
  Spectre::Engine::Texture::SetActiveSize(a1);
  std::vector<D3D11_INPUT_ELEMENT_DESC>::_Tidy((__int64)v45);
}

/*
 * XREFs of ?AttachDeviceTexture@Texture@Engine@Spectre@@QEAAXV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@@Z @ 0x180055A68
 * Callers:
 *     ?Create@FrameBuffer@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@@Z @ 0x180028204 (-Create@FrameBuffer@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@st.c)
 *     ?CreateDeviceFrameBufferHelper@FrameBuffer@Engine@Spectre@@IEAAXPEAVRenderDevice@23@@Z @ 0x180028690 (-CreateDeviceFrameBufferHelper@FrameBuffer@Engine@Spectre@@IEAAXPEAVRenderDevice@23@@Z.c)
 *     ?Create@Texture@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@I@Z @ 0x180055D68 (-Create@Texture@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@I@Z.c)
 *     ?AttachBufferInternal@DepthBuffer@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@@Z @ 0x18006F288 (-AttachBufferInternal@DepthBuffer@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VDeviceDepthBuffer@Engin.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??$?4U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@$0A@@?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180054D38 (--$-4U-$default_delete@UTextureDesc@Engine@Spectre@@@std@@$0A@@-$unique_ptr@UTextureDesc@Engine@.c)
 *     ??$make_unique@UTextureDesc@Engine@Spectre@@AEBU123@$0A@@std@@YA?AV?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@0@AEBUTextureDesc@Engine@Spectre@@@Z @ 0x180055108 (--$make_unique@UTextureDesc@Engine@Spectre@@AEBU123@$0A@@std@@YA-AV-$unique_ptr@UTextureDesc@Eng.c)
 *     ??1?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x1800556D4 (--1-$unique_ptr@UTextureDesc@Engine@Spectre@@U-$default_delete@UTextureDesc@Engine@Spectre@@@std.c)
 *     ??9Engine@Spectre@@YA_NAEBUTextureDesc@01@0@Z @ 0x18005583C (--9Engine@Spectre@@YA_NAEBUTextureDesc@01@0@Z.c)
 *     ?AttachDeviceTextureInternal@Texture@Engine@Spectre@@AEAAXV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@@Z @ 0x180055C68 (-AttachDeviceTextureInternal@Texture@Engine@Spectre@@AEAAXV-$shared_ptr@VDeviceTexture@Engine@Sp.c)
 *     ?GetActiveSize@DeviceTexture@Engine@Spectre@@QEBA?AUVector2@Math@Utils@3@XZ @ 0x180056600 (-GetActiveSize@DeviceTexture@Engine@Spectre@@QEBA-AUVector2@Math@Utils@3@XZ.c)
 *     ?GetActiveSize@Texture@Engine@Spectre@@QEBA?AUVector2@Math@Utils@3@XZ @ 0x180056618 (-GetActiveSize@Texture@Engine@Spectre@@QEBA-AUVector2@Math@Utils@3@XZ.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::Texture::AttachDeviceTexture(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r14
  _DWORD **v5; // rsi
  _DWORD *v6; // rsi
  char v7; // r15
  void **v8; // r12
  __int64 v9; // r8
  __int64 ActiveSize; // rax
  unsigned __int64 *v11; // rax
  unsigned __int64 *v12; // r8
  unsigned int v13; // eax
  int v14; // r8d
  void **v15; // rax
  __int64 v16; // r8
  _DWORD *v17; // rax
  std::_Ref_count_base *v18; // rcx
  unsigned int v19; // eax
  int v20; // r8d
  _QWORD v21[2]; // [rsp+30h] [rbp-69h] BYREF
  void *v22; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v23[8]; // [rsp+48h] [rbp-51h] BYREF
  _QWORD v24[4]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v25[4]; // [rsp+70h] [rbp-29h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+90h] [rbp-9h] BYREF

  v22 = a2;
  v4 = *a2;
  v5 = *(_DWORD ***)(*a2 + 112LL);
  if ( !v5 || (v6 = *v5) == 0LL )
  {
    std::string::string(v24, (__int64)"Attaching an uninitialized device texture.");
    v19 = (unsigned int)std::string::string(
                          v25,
                          (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                   "source\\engine\\texture.cpp");
    Spectre::Engine::EngineException::EngineException((unsigned int)pExceptionObject, v19, v20, (unsigned int)v24, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v7 = 1;
  if ( !*(_QWORD *)(a1 + 120)
    || *(_DWORD *)(a1 + 120) == 1 && *(_DWORD *)(**(_QWORD **)(a1 + 112) + 32LL) == *(_DWORD *)(v4 + 88) )
  {
    v8 = (void **)(a1 + 128);
  }
  else
  {
    v7 = 0;
    v8 = (void **)(a1 + 128);
    if ( Spectre::Engine::operator!=(*(_DWORD **)(a1 + 128), v6)
      || (ActiveSize = Spectre::Engine::Texture::GetActiveSize(a1, v23, v9),
          v11 = (unsigned __int64 *)Spectre::Engine::DeviceTexture::GetActiveSize(v4, v21, ActiveSize),
          (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*v11, (__m128)*v12)) & 3) != 3) )
    {
      std::string::string(v25, (__int64)"Attaching a texture buffer to an incompatible texture");
      v13 = (unsigned int)std::string::string(
                            v24,
                            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cp"
                                     "p\\source\\engine\\texture.cpp");
      Spectre::Engine::EngineException::EngineException((unsigned int)pExceptionObject, v13, v14, (unsigned int)v25, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
  }
  v21[0] = v4;
  v21[1] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  Spectre::Engine::Texture::AttachDeviceTextureInternal(a1, v21);
  if ( v7 )
  {
    v15 = (void **)std::make_unique<Spectre::Engine::TextureDesc,Spectre::Engine::TextureDesc const &,0>(
                     &v22,
                     (__int64)v6);
    std::unique_ptr<Spectre::Engine::TextureDesc>::operator=<std::default_delete<Spectre::Engine::TextureDesc>,0>(
      v8,
      v15);
    std::unique_ptr<Spectre::Engine::TextureDesc>::~unique_ptr<Spectre::Engine::TextureDesc>(&v22);
    v17 = (_DWORD *)Spectre::Engine::DeviceTexture::GetActiveSize(v4, v21, v16);
    *(_DWORD *)(a1 + 144) = *v17;
    *(_DWORD *)(a1 + 148) = v17[1];
  }
  v18 = (std::_Ref_count_base *)a2[1];
  if ( v18 )
    std::_Ref_count_base::_Decref(v18);
}

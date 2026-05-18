/*
 * XREFs of ?AttachBufferInternal@DepthBuffer@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@@Z @ 0x18006F288
 * Callers:
 *     ?AttachDevice@DepthBuffer@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18006F500 (-AttachDevice@DepthBuffer@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 *     ?Create@DepthBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z @ 0x18006F640 (-Create@DepthBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z.c)
 *     ?Create@DepthBuffer@Engine@Spectre@@QEAAXV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@I@Z @ 0x18006F8B0 (-Create@DepthBuffer@Engine@Spectre@@QEAAXV-$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@?$map@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@@std@@PEAX@std@@_N@1@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x1800541F0 (--$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@-$map@W4RenderDeviceID@Engi_ea_1800541F0.c)
 *     ?AttachDeviceSampler@Sampler@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@Z @ 0x180054710 (-AttachDeviceSampler@Sampler@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VDeviceSampler@Engine@Spectre.c)
 *     ?AttachDeviceTexture@Texture@Engine@Spectre@@QEAAXV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@@Z @ 0x180055A68 (-AttachDeviceTexture@Texture@Engine@Spectre@@QEAAXV-$shared_ptr@VDeviceTexture@Engine@Spectre@@@.c)
 *     ?GetCreationFlags@DeviceTexture@Engine@Spectre@@QEBAIXZ @ 0x180056630 (-GetCreationFlags@DeviceTexture@Engine@Spectre@@QEBAIXZ.c)
 *     ?GetFormat@DeviceTexture@Engine@Spectre@@QEBA?AW4Format@23@XZ @ 0x1800566C4 (-GetFormat@DeviceTexture@Engine@Spectre@@QEBA-AW4Format@23@XZ.c)
 *     ?GetHeight@DeviceTexture@Engine@Spectre@@QEBAIXZ @ 0x1800567C8 (-GetHeight@DeviceTexture@Engine@Spectre@@QEBAIXZ.c)
 *     ?GetUsage@DeviceTexture@Engine@Spectre@@QEBA?AW4Usage@23@XZ @ 0x180056878 (-GetUsage@DeviceTexture@Engine@Spectre@@QEBA-AW4Usage@23@XZ.c)
 *     ?GetWidth@DeviceTexture@Engine@Spectre@@QEBAIXZ @ 0x180056898 (-GetWidth@DeviceTexture@Engine@Spectre@@QEBAIXZ.c)
 *     ?CreateEmptySampler@Engine@Spectre@@YA?AV?$shared_ptr@VSampler@Engine@Spectre@@@std@@PEAV112@AEBUSamplerStateDesc@12@@Z @ 0x18006F990 (-CreateEmptySampler@Engine@Spectre@@YA-AV-$shared_ptr@VSampler@Engine@Spectre@@@std@@PEAV112@AEB.c)
 *     ?CreateEmptyTexture@Engine@Spectre@@YA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@PEAV112@IIW4Format@12@W4Usage@12@I@Z @ 0x18006FA04 (-CreateEmptyTexture@Engine@Spectre@@YA-AV-$shared_ptr@VTexture@Engine@Spectre@@@std@@PEAV112@IIW.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::DepthBuffer::AttachBufferInternal(__int64 *a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r15
  unsigned int v7; // edi
  __int64 *v8; // rbx
  __int64 v9; // r11
  __int64 v10; // r11
  Spectre::Engine::DeviceTexture *v11; // r11
  Spectre::Engine::DeviceTexture *v12; // r11
  int Width; // eax
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  int v17; // r10d
  __int64 *EmptyTexture; // rax
  _QWORD *v19; // rax
  __int64 v20; // r8
  __int64 *v21; // rax
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // [rsp+48h] [rbp-19h] BYREF
  std::_Ref_count_base *v27; // [rsp+50h] [rbp-11h]
  Spectre::Engine::DeviceTexture *v28; // [rsp+58h] [rbp-9h] BYREF
  std::_Ref_count_base *v29; // [rsp+60h] [rbp-1h]
  __int64 v30; // [rsp+68h] [rbp+7h] BYREF
  std::_Ref_count_base *v31; // [rsp+70h] [rbp+Fh]
  char v32; // [rsp+78h] [rbp+17h] BYREF
  std::_Ref_count_base *v33; // [rsp+80h] [rbp+1Fh]
  _QWORD v34[2]; // [rsp+88h] [rbp+27h] BYREF
  __int64 v35; // [rsp+98h] [rbp+37h] BYREF
  std::_Ref_count_base *v36; // [rsp+A0h] [rbp+3Fh]
  unsigned int v37; // [rsp+C8h] [rbp+67h] BYREF

  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    &v30,
    (_QWORD *)(*a2 + 96LL));
  if ( v30 )
  {
    v4 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           &v28,
           &v30);
    Spectre::Engine::Texture::AttachDeviceTexture(v5, v4);
  }
  v6 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 32))(a1);
  v7 = 0;
  v8 = a1 + 24;
  do
  {
    (*(void (__fastcall **)(_QWORD, Spectre::Engine::DeviceTexture **, _QWORD))(*(_QWORD *)*a2 + 72LL))(*a2, &v28, v7);
    if ( v28 )
    {
      if ( !*(v8 - 8) )
      {
        Spectre::Engine::DeviceTexture::GetCreationFlags(v28);
        Spectre::Engine::DeviceTexture::GetUsage(v9);
        Spectre::Engine::DeviceTexture::GetFormat(v10);
        Spectre::Engine::DeviceTexture::GetHeight(v11);
        Width = Spectre::Engine::DeviceTexture::GetWidth(v12);
        EmptyTexture = (__int64 *)Spectre::Engine::CreateEmptyTexture((unsigned int)&v32, v6, Width, v16, v14, v15, v17);
        std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(&a1[2 * v7 + 16], EmptyTexture);
        if ( v33 )
          std::_Ref_count_base::_Decref(v33);
      }
      v19 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
              v34,
              &v28);
      Spectre::Engine::Texture::AttachDeviceTexture(v20, v19);
    }
    (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(*(_QWORD *)*a2 + 80LL))(*a2, &v26, v7);
    if ( v26 )
    {
      if ( !*v8 )
      {
        v21 = (__int64 *)Spectre::Engine::CreateEmptySampler(&v35, v6, *(_QWORD *)(v26 + 96));
        std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(&a1[2 * v7 + 24], v21);
        if ( v36 )
          std::_Ref_count_base::_Decref(v36);
      }
      Spectre::Engine::Sampler::AttachDeviceSampler(*v8, (__int64)&v26);
    }
    if ( v27 )
      std::_Ref_count_base::_Decref(v27);
    if ( v29 )
      std::_Ref_count_base::_Decref(v29);
    ++v7;
    v8 += 2;
  }
  while ( v7 < 4 );
  v37 = *(_DWORD *)(*a2 + 88LL);
  std::map<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceShader>>::_Try_emplace<enum Spectre::Engine::RenderDeviceID const &,>(
    a1 + 32,
    (__int64)v34,
    &v37);
  v22 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          &v35,
          a2);
  v23 = *v22;
  *v22 = *(_QWORD *)(v24 + 40);
  *(_QWORD *)(v24 + 40) = v23;
  v25 = v22[1];
  v22[1] = *(_QWORD *)(v24 + 48);
  *(_QWORD *)(v24 + 48) = v25;
  if ( v36 )
    std::_Ref_count_base::_Decref(v36);
  if ( v31 )
    std::_Ref_count_base::_Decref(v31);
}

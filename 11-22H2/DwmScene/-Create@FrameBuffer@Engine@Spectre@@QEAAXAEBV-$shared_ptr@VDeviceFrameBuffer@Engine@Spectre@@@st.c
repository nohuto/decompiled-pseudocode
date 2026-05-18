/*
 * XREFs of ?Create@FrameBuffer@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@@Z @ 0x180028204
 * Callers:
 *     ?CreateRenderTarget@RenderOutputDwm@@MEAAXV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Z @ 0x1800111B0 (-CreateRenderTarget@RenderOutputDwm@@MEAAXV-$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Z.c)
 *     ?CreateRenderTarget@RenderOutputD3D11@D3D11@Engine@Spectre@@MEAAXV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Z @ 0x1800C9420 (-CreateRenderTarget@RenderOutputD3D11@D3D11@Engine@Spectre@@MEAAXV-$ComPtr@UID3D11Texture2D@@@WR.c)
 *     ?UpdateLocalDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VIHolographicDisplayProvider@Holographic@D3D11@Engine@Spectre@@@std@@AEBV?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@7@@Z @ 0x1800D9A70 (-UpdateLocalDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAXAEB.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@?$map@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@@std@@PEAX@std@@_N@1@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x180027C68 (--$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@-$map@W4RenderDeviceID@Engine@Spectre@@V.c)
 *     ?Create@FrameBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z @ 0x18002836C (-Create@FrameBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z.c)
 *     ?SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z @ 0x1800297F0 (-SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z.c)
 *     ?AttachDeviceTexture@Texture@Engine@Spectre@@QEAAXV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@@Z @ 0x180055A68 (-AttachDeviceTexture@Texture@Engine@Spectre@@QEAAXV-$shared_ptr@VDeviceTexture@Engine@Spectre@@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall Spectre::Engine::FrameBuffer::Create(__int64 a1, _QWORD *a2)
{
  int v4; // r8d
  __int64 v5; // rcx
  int v6; // r15d
  unsigned int v7; // edi
  unsigned int v8; // ebx
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v14; // [rsp+30h] [rbp-10h] BYREF
  std::_Ref_count_base *v15; // [rsp+38h] [rbp-8h]
  unsigned int v16; // [rsp+60h] [rbp+20h] BYREF

  Spectre::Engine::RendererResource::SetOption(a1, 1LL);
  Spectre::Engine::RendererResource::SetOption(v5, (unsigned int)(v4 + 2));
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    &v14,
    (_QWORD *)(*a2 + 112LL));
  v6 = v14 != 0 ? 0x80 : 0;
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 48LL))(*a2);
  v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 64LL))(*a2);
  v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 56LL))(*a2);
  Spectre::Engine::FrameBuffer::Create(a1, v9, v8, v7, v6, 0LL);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    &v14,
    (_QWORD *)(*a2 + 96LL));
  Spectre::Engine::Texture::AttachDeviceTexture(v10, &v14);
  if ( *(_QWORD *)(a1 + 152) )
  {
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
      &v14,
      (_QWORD *)(*a2 + 112LL));
    Spectre::Engine::Texture::AttachDeviceTexture(v11, &v14);
  }
  v16 = *(_DWORD *)(*a2 + 88LL);
  v12 = std::map<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceFrameBuffer>>::_Try_emplace<enum Spectre::Engine::RenderDeviceID const &,>(
          (_QWORD *)(a1 + 120),
          (__int64)&v14,
          &v16);
  return std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(*(_QWORD *)v12 + 40LL), a2);
}

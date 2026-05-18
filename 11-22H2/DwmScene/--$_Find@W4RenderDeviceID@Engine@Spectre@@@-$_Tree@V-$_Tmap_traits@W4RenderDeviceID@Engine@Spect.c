/*
 * XREFs of ??$_Find@W4RenderDeviceID@Engine@Spectre@@@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@PEAX@1@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x180043548
 * Callers:
 *     ?ApplyState@Material@Engine@Spectre@@QEAA?AU?$pair@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@VShaderTypeGroup@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@5@_N@Z @ 0x180043F18 (-ApplyState@Material@Engine@Spectre@@QEAA-AU-$pair@V-$shared_ptr@VShaderPipeline@Engine@Spectre@.c)
 *     ?AttachDevice@Sampler@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180054610 (-AttachDevice@Sampler@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@.c)
 *     ?GetDeviceRenderState@RenderState@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceRenderState@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x180054A8C (-GetDeviceRenderState@RenderState@Engine@Spectre@@QEBA-AV-$shared_ptr@VDeviceRenderState@Engine@.c)
 *     ?AttachDevice@Texture@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180055980 (-AttachDevice@Texture@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@.c)
 *     ?CreateDeviceTextureHelper@Texture@Engine@Spectre@@AEAAXAEBUTextureImageSetView@23@PEAVRenderDevice@23@@Z @ 0x180056368 (-CreateDeviceTextureHelper@Texture@Engine@Spectre@@AEAAXAEBUTextureImageSetView@23@PEAVRenderDev.c)
 *     ?GetDeviceTexture@Texture@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x180056670 (-GetDeviceTexture@Texture@Engine@Spectre@@QEBA-AV-$shared_ptr@VDeviceTexture@Engine@Spectre@@@st.c)
 *     ?AttachDevice@Camera@Engine@Spectre@@UEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18005A170 (-AttachDevice@Camera@Engine@Spectre@@UEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ?GetCommandList@Camera@Engine@Spectre@@QEBA?AV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@@Z @ 0x18005BA04 (-GetCommandList@Camera@Engine@Spectre@@QEBA-AV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@AE.c)
 *     ?AttachDevice@DepthBuffer@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18006F500 (-AttachDevice@DepthBuffer@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 *     ?ResolveReadableTexture@DepthBuffer@Engine@Spectre@@UEAA_NAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@W4ShaderAccessMode@DeviceDepthBuffer@23@@Z @ 0x18006FC50 (-ResolveReadableTexture@DepthBuffer@Engine@Spectre@@UEAA_NAEBV-$shared_ptr@VCommandList@Engine@S.c)
 *     ?AttachDevice@ShaderPipeline@Engine@Spectre@@QEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180086B60 (-AttachDevice@ShaderPipeline@Engine@Spectre@@QEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 *     ?AttachDevice@RenderState@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180088210 (-AttachDevice@RenderState@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 *     ?AttachDevice@ArrayBuffer@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800888F0 (-AttachDevice@ArrayBuffer@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 *     ?GetDeviceBuffer@ArrayBuffer@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x180088B9C (-GetDeviceBuffer@ArrayBuffer@Engine@Spectre@@QEBA-AV-$shared_ptr@VDeviceArrayBuffer@Engine@Spect.c)
 *     ?GetDeviceShader@Shader@Engine@Spectre@@QEAA?AV?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x18008AF20 (-GetDeviceShader@Shader@Engine@Spectre@@QEAA-AV-$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@.c)
 *     ?Load@Shader@Engine@Spectre@@QEAA_NAEBV?$shared_ptr@VShaderProgram@Engine@Spectre@@@std@@@Z @ 0x18008B028 (-Load@Shader@Engine@Spectre@@QEAA_NAEBV-$shared_ptr@VShaderProgram@Engine@Spectre@@@std@@@Z.c)
 *     ?GetDeviceDepthBuffer@DepthBuffer@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x1800D04E8 (-GetDeviceDepthBuffer@DepthBuffer@Engine@Spectre@@QEBA-AV-$shared_ptr@VDeviceDepthBuffer@Engine@.c)
 *     ?SubmitShaderPipeline@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@Z @ 0x1800D1B20 (-SubmitShaderPipeline@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VShaderPipeli.c)
 * Callees:
 *     ??$_Find_lower_bound@W4RenderDeviceID@Engine@Spectre@@@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@PEAX@std@@@1@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x1800435C0 (--$_Find_lower_bound@W4RenderDeviceID@Engine@Spectre@@@-$_Tree@V-$_Tmap_traits@W4Re_ea_1800435C0.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>::_Find<enum Spectre::Engine::RenderDeviceID>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r10
  _DWORD *v3; // r11
  __int64 result; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>::_Find_lower_bound<enum Spectre::Engine::RenderDeviceID>(
    a1,
    v5,
    a2);
  result = v6;
  if ( *(_BYTE *)(v6 + 25) || *v3 < *(_DWORD *)(v6 + 32) )
    return *(_QWORD *)v2;
  return result;
}

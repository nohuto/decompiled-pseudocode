/*
 * XREFs of ??$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@?$map@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@@std@@PEAX@std@@_N@1@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x1800541F0
 * Callers:
 *     ?AttachDeviceSamplerInternal@Sampler@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@Z @ 0x18005482C (-AttachDeviceSamplerInternal@Sampler@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VDeviceSampler@Engine.c)
 *     ?Load@Sampler@Engine@Spectre@@UEAAXPEBUSamplerDefinition@Framework@3@I@Z @ 0x180054AF0 (-Load@Sampler@Engine@Spectre@@UEAAXPEBUSamplerDefinition@Framework@3@I@Z.c)
 *     ?AttachDeviceTextureInternal@Texture@Engine@Spectre@@AEAAXV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@@Z @ 0x180055C68 (-AttachDeviceTextureInternal@Texture@Engine@Spectre@@AEAAXV-$shared_ptr@VDeviceTexture@Engine@Sp.c)
 *     ?AttachDevice@Camera@Engine@Spectre@@UEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18005A170 (-AttachDevice@Camera@Engine@Spectre@@UEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ?AttachBufferInternal@DepthBuffer@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@@Z @ 0x18006F288 (-AttachBufferInternal@DepthBuffer@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VDeviceDepthBuffer@Engin.c)
 *     ?ResolveReadableTexture@DepthBuffer@Engine@Spectre@@UEAA_NAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@W4ShaderAccessMode@DeviceDepthBuffer@23@@Z @ 0x18006FC50 (-ResolveReadableTexture@DepthBuffer@Engine@Spectre@@UEAA_NAEBV-$shared_ptr@VCommandList@Engine@S.c)
 *     ?AttachDeviceConstantBuffer@ConstantBuffer@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@Z @ 0x180084B94 (-AttachDeviceConstantBuffer@ConstantBuffer@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VDeviceConstant.c)
 *     ?AttachDevice@ShaderPipeline@Engine@Spectre@@QEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180086B60 (-AttachDevice@ShaderPipeline@Engine@Spectre@@QEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 *     ?AttachDevice@RenderState@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180088210 (-AttachDevice@RenderState@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 *     ?CreateDeviceBufferHelper@ArrayBuffer@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180088A38 (-CreateDeviceBufferHelper@ArrayBuffer@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VRenderDevice@Engine.c)
 *     ?AttachDevice@Shader@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18008AC60 (-AttachDevice@Shader@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@.c)
 *     ?Load@Shader@Engine@Spectre@@QEAA_NAEBV?$shared_ptr@VShaderProgram@Engine@Spectre@@@std@@@Z @ 0x18008B028 (-Load@Shader@Engine@Spectre@@QEAA_NAEBV-$shared_ptr@VShaderProgram@Engine@Spectre@@@std@@@Z.c)
 *     ?AttachDeviceVertexLayout@VertexLayout@Engine@Spectre@@QEAAXV?$shared_ptr@VDeviceVertexLayout@Engine@Spectre@@@std@@@Z @ 0x18008BF08 (-AttachDeviceVertexLayout@VertexLayout@Engine@Spectre@@QEAAXV-$shared_ptr@VDeviceVertexLayout@En.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18001DB7C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V-$.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x18001DD7C (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180027FB4 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V-$.c)
 *     ??$_Find_lower_bound@W4RenderDeviceID@Engine@Spectre@@@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@PEAX@std@@@1@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x1800435C0 (--$_Find_lower_bound@W4RenderDeviceID@Engine@Spectre@@@-$_Tree@V-$_Tmap_traits@W4Re_ea_1800435C0.c)
 */

__int64 __fastcall std::map<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceShader>>::_Try_emplace<enum Spectre::Engine::RenderDeviceID const &,>(
        __int64 *a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 v6; // rbx
  _DWORD *v7; // rdi
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>::_Find_lower_bound<enum Spectre::Engine::RenderDeviceID>(
    a1,
    (__int64)&v10,
    a3);
  if ( *(_BYTE *)(v11 + 25) || *a3 < *(_DWORD *)(v11 + 32) )
  {
    if ( a1[1] == 0x492492492492492LL )
      std::_Throw_tree_length_error();
    v6 = *a1;
    v9 = (unsigned __int64)a1;
    v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
    v7[8] = *a3;
    *((_QWORD *)v7 + 6) = 0LL;
    *((_QWORD *)v7 + 5) = 0LL;
    *((_QWORD *)v7 + 6) = 0LL;
    *(_QWORD *)v7 = v6;
    *((_QWORD *)v7 + 1) = v6;
    *((_QWORD *)v7 + 2) = v6;
    *((_WORD *)v7 + 12) = 0;
    *((_QWORD *)&v9 + 1) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>>,void *>>>((__int64)&v9);
    v9 = v10;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::CommandList>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v9,
                      (__int64)v7);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v11;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}

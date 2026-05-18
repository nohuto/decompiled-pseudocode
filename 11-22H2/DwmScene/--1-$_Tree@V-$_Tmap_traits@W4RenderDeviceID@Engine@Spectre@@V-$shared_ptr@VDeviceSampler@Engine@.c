/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x180027F54
 * Callers:
 *     ??1?$DeviceVarying@V?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@@Engine@Spectre@@QEAA@XZ @ 0x180027F24 (--1-$DeviceVarying@V-$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@@Engine@Spectre@@QEAA@.c)
 *     ??1FrameBuffer@Engine@Spectre@@UEAA@XZ @ 0x180028058 (--1FrameBuffer@Engine@Spectre@@UEAA@XZ.c)
 *     ??1Engine@0Spectre@@UEAA@XZ @ 0x180031CC4 (--1Engine@0Spectre@@UEAA@XZ.c)
 *     ??1RenderState@Engine@Spectre@@UEAA@XZ @ 0x180043AD0 (--1RenderState@Engine@Spectre@@UEAA@XZ.c)
 *     ??1Mesh@Engine@Spectre@@UEAA@XZ @ 0x180047C90 (--1Mesh@Engine@Spectre@@UEAA@XZ.c)
 *     ??1Shader@Engine@Spectre@@UEAA@XZ @ 0x18004EB1C (--1Shader@Engine@Spectre@@UEAA@XZ.c)
 *     ??1ShaderManager@Engine@Spectre@@QEAA@XZ @ 0x18004EBA4 (--1ShaderManager@Engine@Spectre@@QEAA@XZ.c)
 *     ??1Sampler@Engine@Spectre@@UEAA@XZ @ 0x1800544F4 (--1Sampler@Engine@Spectre@@UEAA@XZ.c)
 *     ??1Texture@Engine@Spectre@@UEAA@XZ @ 0x180055760 (--1Texture@Engine@Spectre@@UEAA@XZ.c)
 *     ??1Camera@Engine@Spectre@@UEAA@XZ @ 0x180059904 (--1Camera@Engine@Spectre@@UEAA@XZ.c)
 *     ??1DepthBuffer@Engine@Spectre@@UEAA@XZ @ 0x18006F118 (--1DepthBuffer@Engine@Spectre@@UEAA@XZ.c)
 *     ??1ConstantBuffer@Engine@Spectre@@UEAA@XZ @ 0x180084528 (--1ConstantBuffer@Engine@Spectre@@UEAA@XZ.c)
 *     ??1ShaderPipeline@Engine@Spectre@@QEAA@XZ @ 0x180086854 (--1ShaderPipeline@Engine@Spectre@@QEAA@XZ.c)
 *     ??1ArrayBuffer@Engine@Spectre@@UEAA@XZ @ 0x18008885C (--1ArrayBuffer@Engine@Spectre@@UEAA@XZ.c)
 *     ??1VertexLayout@Engine@Spectre@@UEAA@XZ @ 0x18008BDBC (--1VertexLayout@Engine@Spectre@@UEAA@XZ.c)
 *     ??1RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800D8DF8 (--1RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAA@XZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEBEV?$shared_ptr@VShader@Engine@Spectre@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBEV?$shared_ptr@VShader@Engine@Spectre@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEBEV?$shared_ptr@VShader@Engine@Spectre@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEBEV?$shared_ptr@VShader@Engine@Spectre@@@std@@@std@@PEAX@1@@Z @ 0x180027AF0 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEBEV-$shared_ptr@VShader@Engine@Spectre@@@std.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>::~_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned char const * const,std::shared_ptr<Spectre::Engine::Shader>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned char const * const,std::shared_ptr<Spectre::Engine::Shader>>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((__int64 **)*a1 + 1));
  std::_Deallocate<16,0>(*a1, 0x38uLL);
}

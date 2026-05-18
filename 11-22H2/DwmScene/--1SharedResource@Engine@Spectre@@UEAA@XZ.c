/*
 * XREFs of ??1SharedResource@Engine@Spectre@@UEAA@XZ @ 0x1800280B8
 * Callers:
 *     ??1FrameBuffer@Engine@Spectre@@UEAA@XZ @ 0x180028058 (--1FrameBuffer@Engine@Spectre@@UEAA@XZ.c)
 *     ??_ESharedResource@Engine@Spectre@@UEAAPEAXI@Z @ 0x180029420 (--_ESharedResource@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     ??1Material@Engine@Spectre@@UEAA@XZ @ 0x180043A44 (--1Material@Engine@Spectre@@UEAA@XZ.c)
 *     ??1RenderState@Engine@Spectre@@UEAA@XZ @ 0x180043AD0 (--1RenderState@Engine@Spectre@@UEAA@XZ.c)
 *     ??1Mesh@Engine@Spectre@@UEAA@XZ @ 0x180047C90 (--1Mesh@Engine@Spectre@@UEAA@XZ.c)
 *     ??1Shader@Engine@Spectre@@UEAA@XZ @ 0x18004EB1C (--1Shader@Engine@Spectre@@UEAA@XZ.c)
 *     ??1Sampler@Engine@Spectre@@UEAA@XZ @ 0x1800544F4 (--1Sampler@Engine@Spectre@@UEAA@XZ.c)
 *     ??1Texture@Engine@Spectre@@UEAA@XZ @ 0x180055760 (--1Texture@Engine@Spectre@@UEAA@XZ.c)
 *     ??1DepthBuffer@Engine@Spectre@@UEAA@XZ @ 0x18006F118 (--1DepthBuffer@Engine@Spectre@@UEAA@XZ.c)
 *     ??1ConstantBuffer@Engine@Spectre@@UEAA@XZ @ 0x180084528 (--1ConstantBuffer@Engine@Spectre@@UEAA@XZ.c)
 *     ??1ArrayBuffer@Engine@Spectre@@UEAA@XZ @ 0x18008885C (--1ArrayBuffer@Engine@Spectre@@UEAA@XZ.c)
 *     ??1VertexLayout@Engine@Spectre@@UEAA@XZ @ 0x18008BDBC (--1VertexLayout@Engine@Spectre@@UEAA@XZ.c)
 *     _Spectre::Engine::FrameBuffer::FrameBuffer_::_1_::dtor$0 @ 0x1800E4DF2 (_Spectre--Engine--FrameBuffer--FrameBuffer_--_1_--dtor$0.c)
 *     _Spectre::Engine::ConstantBuffer::ConstantBuffer_::_1_::dtor$0 @ 0x1800E6897 (_Spectre--Engine--ConstantBuffer--ConstantBuffer_--_1_--dtor$0.c)
 *     _Spectre::Engine::DepthBuffer::DepthBuffer_::_1_::dtor$0 @ 0x1800E82C6 (_Spectre--Engine--DepthBuffer--DepthBuffer_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@_NU?$less@W4RenderDeviceID@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@_N@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x180027F84 (--1-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@_NU-$less@W4RenderDeviceID@Engine@Sp.c)
 */

void __fastcall Spectre::Engine::SharedResource::~SharedResource(void **this)
{
  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,bool,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,bool>>,0>>::~_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,bool,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,bool>>,0>>(this + 10);
  Spectre::Engine::RendererResource::~RendererResource((Spectre::Engine::RendererResource *)this);
}

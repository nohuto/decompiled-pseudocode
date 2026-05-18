/*
 * XREFs of ??1DeviceResource@Engine@Spectre@@UEAA@XZ @ 0x18002802C
 * Callers:
 *     ??1DeviceFrameBuffer@Engine@Spectre@@UEAA@XZ @ 0x180027FE8 (--1DeviceFrameBuffer@Engine@Spectre@@UEAA@XZ.c)
 *     ??_EDeviceResource@Engine@Spectre@@UEAAPEAXI@Z @ 0x180029360 (--_EDeviceResource@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     ??1CommandList@Engine@Spectre@@UEAA@XZ @ 0x18003905C (--1CommandList@Engine@Spectre@@UEAA@XZ.c)
 *     ??1DeviceSampler@Engine@Spectre@@UEAA@XZ @ 0x1800544B0 (--1DeviceSampler@Engine@Spectre@@UEAA@XZ.c)
 *     ??1DeviceTexture@Engine@Spectre@@UEAA@XZ @ 0x180055718 (--1DeviceTexture@Engine@Spectre@@UEAA@XZ.c)
 *     ??1DeviceDepthBuffer@Engine@Spectre@@UEAA@XZ @ 0x18006F1A0 (--1DeviceDepthBuffer@Engine@Spectre@@UEAA@XZ.c)
 *     ??1DeviceShader@Engine@Spectre@@UEAA@XZ @ 0x18008A934 (--1DeviceShader@Engine@Spectre@@UEAA@XZ.c)
 *     ??1DeviceShaderPipeline@Engine@Spectre@@UEAA@XZ @ 0x18008A94C (--1DeviceShaderPipeline@Engine@Spectre@@UEAA@XZ.c)
 *     ??1DeviceArrayBuffer@Engine@Spectre@@UEAA@XZ @ 0x18008B3C8 (--1DeviceArrayBuffer@Engine@Spectre@@UEAA@XZ.c)
 *     ??1DeviceRenderState@Engine@Spectre@@UEAA@XZ @ 0x18008B800 (--1DeviceRenderState@Engine@Spectre@@UEAA@XZ.c)
 *     ??1DeviceVertexLayout@Engine@Spectre@@UEAA@XZ @ 0x18008BD8C (--1DeviceVertexLayout@Engine@Spectre@@UEAA@XZ.c)
 *     ??1DeviceConstantBuffer@Engine@Spectre@@UEAA@XZ @ 0x18009BC20 (--1DeviceConstantBuffer@Engine@Spectre@@UEAA@XZ.c)
 *     ??1GpuQuery@Engine@Spectre@@UEAA@XZ @ 0x1800E37DC (--1GpuQuery@Engine@Spectre@@UEAA@XZ.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall Spectre::Engine::DeviceResource::~DeviceResource(Spectre::Engine::DeviceResource *this)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 10);
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
  Spectre::Engine::RendererResource::~RendererResource(this);
}

/*
 * XREFs of ?AttachDevice@VertexLayout@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18008BE40
 * Callers:
 *     ?AttachDevice@ShaderPipeline@Engine@Spectre@@QEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180086B60 (-AttachDevice@ShaderPipeline@Engine@Spectre@@QEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 *     ?Create@VertexLayout@Engine@Spectre@@UEAAXVVertexLayoutDesc@VertexLayoutBase@23@AEBV?$shared_ptr@VShaderProgram@Engine@Spectre@@@std@@@Z @ 0x18008C1B0 (-Create@VertexLayout@Engine@Spectre@@UEAAXVVertexLayoutDesc@VertexLayoutBase@23@AEBV-$shared_ptr.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?AttachDevice@SharedResource@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800294D0 (-AttachDevice@SharedResource@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@.c)
 *     ?lock@?$weak_ptr@VGpuProfiler@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VGpuProfiler@Engine@Spectre@@@2@XZ @ 0x18003888C (-lock@-$weak_ptr@VGpuProfiler@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VGpuProfiler@Engine@Spec.c)
 *     ??0VertexLayoutDesc@VertexLayoutBase@Engine@Spectre@@QEAA@AEBV0123@@Z @ 0x180086788 (--0VertexLayoutDesc@VertexLayoutBase@Engine@Spectre@@QEAA@AEBV0123@@Z.c)
 *     ??$CreateResource@VDeviceVertexLayout@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VDeviceVertexLayout@Engine@Spectre@@@std@@XZ @ 0x18008B908 (--$CreateResource@VDeviceVertexLayout@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA-AV-$sha.c)
 *     ?AttachDeviceVertexLayout@VertexLayout@Engine@Spectre@@QEAAXV?$shared_ptr@VDeviceVertexLayout@Engine@Spectre@@@std@@@Z @ 0x18008BF08 (-AttachDeviceVertexLayout@VertexLayout@Engine@Spectre@@QEAAXV-$shared_ptr@VDeviceVertexLayout@En.c)
 *     ?Create@DeviceVertexLayout@Engine@Spectre@@QEAAXAEAVRenderDevice@23@VVertexLayoutDesc@VertexLayoutBase@23@AEBVShaderProgram@23@@Z @ 0x18008C120 (-Create@DeviceVertexLayout@Engine@Spectre@@QEAAXAEAVRenderDevice@23@VVertexLayoutDesc@VertexLayo.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::VertexLayout::AttachDevice(__int64 a1, __int64 *a2)
{
  std::_Ref_count_base *v4; // rbx
  Spectre::Engine::VertexLayoutBase::VertexLayoutDesc *v5; // rax
  std::_Ref_count_base *v6[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v7; // [rsp+30h] [rbp-50h] BYREF
  std::_Ref_count_base *v8; // [rsp+38h] [rbp-48h]
  __int128 v9; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v10[48]; // [rsp+50h] [rbp-30h] BYREF

  Spectre::Engine::SharedResource::AttachDevice(a1, a2);
  std::weak_ptr<Spectre::Engine::GpuProfiler>::lock(a1 + 160, &v7);
  if ( v7 )
  {
    Spectre::Engine::RenderDevice::CreateResource<Spectre::Engine::DeviceVertexLayout>(*a2, (__int64 *)v6);
    v4 = v6[0];
    v5 = Spectre::Engine::VertexLayoutBase::VertexLayoutDesc::VertexLayoutDesc(
           (Spectre::Engine::VertexLayoutBase::VertexLayoutDesc *)v10,
           (const struct Spectre::Engine::VertexLayoutBase::VertexLayoutDesc *)(a1 + 96));
    Spectre::Engine::DeviceVertexLayout::Create(v4, *a2, v5, v7);
    v9 = *(_OWORD *)v6;
    *(_OWORD *)v6 = 0LL;
    Spectre::Engine::VertexLayout::AttachDeviceVertexLayout(a1, &v9);
    if ( v6[1] )
      std::_Ref_count_base::_Decref(v6[1]);
  }
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
}

/*
 * XREFs of ?LoadFromStream@MeshInstance@Engine@Spectre@@UEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@PEAVRenderDevice@23@PEBXII@Z @ 0x18004BC20
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$CreateResource@VMesh@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VMesh@Engine@Spectre@@@std@@XZ @ 0x1800160D8 (--$CreateResource@VMesh@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr@VM_ea_1800160D8.c)
 *     ?LoadFromBuffer@Mesh@Engine@Spectre@@QEAAXAEBUBaseMeshSegment@23@@Z @ 0x180048A80 (-LoadFromBuffer@Mesh@Engine@Spectre@@QEAAXAEBUBaseMeshSegment@23@@Z.c)
 *     ?LoadMesh@MeshInstance@Engine@Spectre@@AEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@PEAVRenderDevice@23@IV?$shared_ptr@VMesh@Engine@Spectre@@@5@IIPEBM22_N@Z @ 0x18004BD40 (-LoadMesh@MeshInstance@Engine@Spectre@@AEAA-AV-$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre.c)
 *     ?GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ @ 0x18008139C (-GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?LoadFromStream@Component@Engine@Spectre@@UEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@PEAVRenderDevice@23@PEBXII@Z @ 0x1800813E0 (-LoadFromStream@Component@Engine@Spectre@@UEAA-AV-$shared_ptr@VTaskHandler@ThreadPool@Utils@Spec.c)
 */

__int64 __fastcall Spectre::Engine::MeshInstance::LoadFromStream(
        Spectre::Engine::Mesh **this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int a6)
{
  struct Spectre::Engine::Engine *Engine; // rax
  __int64 *v11; // rax
  int v12; // ebx
  _QWORD *v13; // rax
  __int16 v14; // r10
  int v15; // r11d
  __int64 v17; // [rsp+68h] [rbp-40h] BYREF
  std::_Ref_count_base *v18; // [rsp+70h] [rbp-38h]

  Spectre::Engine::Component::LoadFromStream(this, &v17);
  if ( v18 )
    std::_Ref_count_base::_Decref(v18);
  Engine = Spectre::Engine::Component::GetEngine((Spectre::Engine::Component *)this);
  v11 = Spectre::Engine::Engine::CreateResource<Spectre::Engine::Mesh,>((__int64)Engine, &v17);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(this + 11, v11);
  if ( v18 )
    std::_Ref_count_base::_Decref(v18);
  Spectre::Engine::Mesh::LoadFromBuffer(this[11], (const struct Spectre::Engine::BaseMeshSegment *)a4);
  v12 = *(_DWORD *)(a4 + 16);
  v13 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          &v17,
          this + 11);
  Spectre::Engine::MeshInstance::LoadMesh(
    this,
    a2,
    a3,
    a6,
    v13,
    v12,
    v15,
    a4 + 116,
    a4 + 180,
    a4 + 192,
    (v14 & 0x200) != 0);
  return a2;
}

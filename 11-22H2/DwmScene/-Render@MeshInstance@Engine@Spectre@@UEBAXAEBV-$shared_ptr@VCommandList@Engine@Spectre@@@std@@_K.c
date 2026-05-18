/*
 * XREFs of ?Render@MeshInstance@Engine@Spectre@@UEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18004C400
 * Callers:
 *     ?RenderMesh@ImageProcessingCamera@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV?$shared_ptr@VMeshInstance@Engine@Spectre@@@5@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x180097A20 (-RenderMesh@ImageProcessingCamera@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spe.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@0@Z @ 0x18001C578 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C578.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x18001C59C (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C59C.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@AEBV10@QEBD@Z @ 0x18001C600 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C600.c)
 *     ?GetTexture@FrameBuffer@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ @ 0x180026A84 (-GetTexture@FrameBuffer@Engine@Spectre@@QEBA-AV-$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ.c)
 *     ??4?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800320E0 (--4-$weak_ptr@VRendererResource@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?lock@?$weak_ptr@VGpuProfiler@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VGpuProfiler@Engine@Spectre@@@2@XZ @ 0x18003888C (-lock@-$weak_ptr@VGpuProfiler@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VGpuProfiler@Engine@Spec.c)
 *     ?GetGpuProfiler@CommandList@Engine@Spectre@@QEBA?BV?$weak_ptr@VGpuProfiler@Engine@Spectre@@@std@@XZ @ 0x1800393A8 (-GetGpuProfiler@CommandList@Engine@Spectre@@QEBA-BV-$weak_ptr@VGpuProfiler@Engine@Spectre@@@std@.c)
 *     ?SetBlendFactors@CommandList@Engine@Spectre@@QEAAXUVector4@Math@Utils@3@@Z @ 0x180039618 (-SetBlendFactors@CommandList@Engine@Spectre@@QEAAXUVector4@Math@Utils@3@@Z.c)
 *     ?SetStencilReference@CommandList@Engine@Spectre@@QEAAXE@Z @ 0x180039834 (-SetStencilReference@CommandList@Engine@Spectre@@QEAAXE@Z.c)
 *     ?GetName@SceneNode@Engine@Spectre@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x18003BFEC (-GetName@SceneNode@Engine@Spectre@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2.c)
 *     ?GetWorldTransformMatrix@SceneNode@Engine@Spectre@@QEBA?AUMatrix@Math@Utils@3@XZ @ 0x18003C6AC (-GetWorldTransformMatrix@SceneNode@Engine@Spectre@@QEBA-AUMatrix@Math@Utils@3@XZ.c)
 *     ?XMMatrixDeterminant@DirectX@@YQ?AT__m128@@UXMMATRIX@1@@Z @ 0x18003E744 (-XMMatrixDeterminant@DirectX@@YQ-AT__m128@@UXMMATRIX@1@@Z.c)
 *     ?GetSceneNode@Component@Engine@Spectre@@QEBA?AV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@XZ @ 0x18004328C (-GetSceneNode@Component@Engine@Spectre@@QEBA-AV-$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@.c)
 *     ?ApplyState@Material@Engine@Spectre@@QEAA?AU?$pair@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@VShaderTypeGroup@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@5@_N@Z @ 0x180043F18 (-ApplyState@Material@Engine@Spectre@@QEAA-AU-$pair@V-$shared_ptr@VShaderPipeline@Engine@Spectre@.c)
 *     ?IsEmpty@VertexLayoutDesc@VertexLayoutBase@Engine@Spectre@@QEBA_NXZ @ 0x180044438 (-IsEmpty@VertexLayoutDesc@VertexLayoutBase@Engine@Spectre@@QEBA_NXZ.c)
 *     ?Render@Mesh@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K@Z @ 0x180048C04 (-Render@Mesh@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K@Z.c)
 *     ?GetGlobalMaterialEnabled@MeshInstance@Engine@Spectre@@SA_N_K@Z @ 0x18004B944 (-GetGlobalMaterialEnabled@MeshInstance@Engine@Spectre@@SA_N_K@Z.c)
 *     ?GetMaterial@MeshInstance@Engine@Spectre@@QEBA?AV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@_K@Z @ 0x18004B988 (-GetMaterial@MeshInstance@Engine@Spectre@@QEBA-AV-$shared_ptr@VMaterial@Engine@Spectre@@@std@@_K.c)
 *     ?GetMaterialCount@MeshInstance@Engine@Spectre@@QEBA_KXZ @ 0x18004BA58 (-GetMaterialCount@MeshInstance@Engine@Spectre@@QEBA_KXZ.c)
 *     ?IsMaterialEnabled@MeshInstance@Engine@Spectre@@QEBA_N_K@Z @ 0x18004BB70 (-IsMaterialEnabled@MeshInstance@Engine@Spectre@@QEBA_N_K@Z.c)
 *     ?RenderSymbols@MeshInstance@Engine@Spectre@@EEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18004C850 (-RenderSymbols@MeshInstance@Engine@Spectre@@EEBAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@.c)
 *     ?GetExtension@ShaderFamily@Engine@Spectre@@QEBA?AV?$shared_ptr@VIShaderExtension@Engine@Spectre@@@std@@XZ @ 0x1800609B4 (-GetExtension@ShaderFamily@Engine@Spectre@@QEBA-AV-$shared_ptr@VIShaderExtension@Engine@Spectre@.c)
 *     ?ApplyState@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@VShaderTypeGroup@23@@Z @ 0x1800846B8 (-ApplyState@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCommandList@Engine@Spectr.c)
 *     ?BeginTimeSpanMarker@GpuProfiler@Engine@Spectre@@QEAA?AV?$weak_ptr@VITimeSpanMarker@GpuProfilerFrame@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@5@@Z @ 0x1800A10AC (-BeginTimeSpanMarker@GpuProfiler@Engine@Spectre@@QEAA-AV-$weak_ptr@VITimeSpanMarker@GpuProfilerF.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
void __fastcall Spectre::Engine::MeshInstance::Render(
        Spectre::Engine::MeshInstance *this,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rbx
  int v8; // ecx
  _QWORD *GpuProfiler; // rax
  void (__fastcall ***v10)(_QWORD); // r15
  __int64 *SceneNode; // rax
  _QWORD *Name; // rbx
  char *v13; // rax
  void *v14; // rax
  _QWORD *v15; // rax
  __int64 *v16; // rax
  __int64 *v17; // rax
  double *WorldTransformMatrix; // rax
  char v19; // r12
  unsigned __int64 v20; // r14
  __int64 v21; // r15
  __int64 v22; // r13
  _QWORD *Extension; // rax
  __int64 v24; // r12
  Spectre::Engine::ShaderPropertyBlock **v25; // rcx
  Spectre::Engine::ShaderPropertyBlock **v26; // rcx
  Spectre::Engine::ShaderPropertyBlock **v27; // rcx
  Spectre::Engine::ShaderPropertyBlock **v28; // rcx
  char v29; // [rsp+30h] [rbp-D0h]
  void (__fastcall ***v30)(_QWORD); // [rsp+38h] [rbp-C8h] BYREF
  std::_Ref_count_base *v31; // [rsp+40h] [rbp-C0h]
  Spectre::Engine::Material *v32; // [rsp+48h] [rbp-B8h] BYREF
  std::_Ref_count_base *v33; // [rsp+50h] [rbp-B0h]
  __int64 v34; // [rsp+58h] [rbp-A8h]
  __int64 v35; // [rsp+60h] [rbp-A0h] BYREF
  std::_Ref_count_base *v36; // [rsp+68h] [rbp-98h]
  std::_Ref_count_base *v37[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v38; // [rsp+80h] [rbp-80h] BYREF
  std::_Ref_count_base *v39; // [rsp+88h] [rbp-78h]
  __int128 v40[2]; // [rsp+A0h] [rbp-60h] BYREF
  char v41[32]; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v42[4]; // [rsp+E0h] [rbp-20h] BYREF

  v5 = a3;
  v34 = a3;
  v8 = *(_DWORD *)(*(_QWORD *)a4 + 440LL);
  if ( (v8 & 0x10000) != 0 && (v8 & 0x800000) != 0 )
    Spectre::Engine::MeshInstance::RenderSymbols(this);
  *(_OWORD *)v37 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)a4 + 440LL) & 0x4000000) != 0 )
  {
    GpuProfiler = Spectre::Engine::CommandList::GetGpuProfiler(*a2, &v32);
    std::weak_ptr<Spectre::Engine::GpuProfiler>::lock((__int64)GpuProfiler, &v30);
    if ( v33 )
      std::_Ref_count_base::_Decwref(v33);
    v10 = v30;
    if ( v30 )
    {
      SceneNode = Spectre::Engine::Component::GetSceneNode((__int64)this, &v35);
      Name = Spectre::Engine::SceneNode::GetName(*SceneNode, v42);
      v13 = std::operator+<char>(v41, (_QWORD *)(*(_QWORD *)a4 + 24LL), "_");
      v14 = (void *)std::operator+<char>((__int64)v40, (__int64)v13, (__int64)Name);
      v15 = std::operator+<char>(&v38, v14, (__int64)"_Render");
      v16 = (__int64 *)Spectre::Engine::GpuProfiler::BeginTimeSpanMarker(v10, &v32, v15, a2);
      std::weak_ptr<Spectre::Engine::RendererResource>::operator=(v37, v16);
      if ( v33 )
        std::_Ref_count_base::_Decwref(v33);
      std::string::_Tidy_deallocate((__int64)&v38);
      std::string::_Tidy_deallocate((__int64)v40);
      std::string::_Tidy_deallocate((__int64)v41);
      std::string::_Tidy_deallocate((__int64)v42);
      if ( v36 )
        std::_Ref_count_base::_Decref(v36);
      v5 = v34;
    }
    if ( v31 )
      std::_Ref_count_base::_Decref(v31);
  }
  v17 = Spectre::Engine::Component::GetSceneNode((__int64)this, &v35);
  WorldTransformMatrix = (double *)Spectre::Engine::SceneNode::GetWorldTransformMatrix(*v17, v42);
  DirectX::XMMatrixDeterminant(
    *WorldTransformMatrix,
    WorldTransformMatrix[2],
    WorldTransformMatrix[4],
    WorldTransformMatrix[6]);
  v19 = (unsigned int)_o__fdsign() != 0;
  v29 = v19;
  if ( v36 )
    std::_Ref_count_base::_Decref(v36);
  v20 = 0LL;
  if ( Spectre::Engine::MeshInstance::GetMaterialCount(this) )
  {
    v21 = 0LL;
    do
    {
      if ( Spectre::Engine::MeshInstance::IsMaterialEnabled(this, v20)
        && Spectre::Engine::MeshInstance::GetGlobalMaterialEnabled(v20) )
      {
        Spectre::Engine::MeshInstance::GetMaterial((__int64)this, &v32, v20);
        if ( std::operator!=<Spectre::Engine::Scene>(&v32) )
        {
          Spectre::Engine::Material::ApplyState(v32, (__int64)&v38, v5, a2, v19);
          v22 = v38;
          if ( !Spectre::Engine::VertexLayoutBase::VertexLayoutDesc::IsEmpty((Spectre::Engine::VertexLayoutBase::VertexLayoutDesc *)(v38 + 128)) )
          {
            Spectre::Engine::FrameBuffer::GetTexture((__int64)v32, &v30);
            if ( std::operator!=<Spectre::Engine::Scene>(&v30) )
            {
              Extension = (_QWORD *)Spectre::Engine::ShaderFamily::GetExtension(v30, &v35);
              (*(void (__fastcall **)(_QWORD, Spectre::Engine::MeshInstance *, unsigned __int64))(*(_QWORD *)*Extension
                                                                                                + 48LL))(
                *Extension,
                this,
                v20);
              if ( v36 )
                std::_Ref_count_base::_Decref(v36);
              v24 = *((_QWORD *)this + 13);
              if ( std::operator!=<Spectre::Engine::Scene>((_QWORD *)(v21 + v24 + 24)) )
                Spectre::Engine::ShaderPropertyBlock::ApplyState(*v25);
              Spectre::Engine::CommandList::SetStencilReference(
                (Spectre::Engine::CommandList *)*a2,
                *((_BYTE *)this + 168));
              v40[0] = *(_OWORD *)((char *)this + 172);
              Spectre::Engine::CommandList::SetBlendFactors(*a2, v40);
              if ( std::operator!=<Spectre::Engine::Scene>((_QWORD *)(v21 + v24 + 40)) )
                Spectre::Engine::ShaderPropertyBlock::ApplyState(*v26);
              if ( std::operator!=<Spectre::Engine::Scene>((_QWORD *)(v21 + v24 + 56)) )
                Spectre::Engine::ShaderPropertyBlock::ApplyState(*v27);
              if ( std::operator!=<Spectre::Engine::Scene>((_QWORD *)(v21 + v24 + 72)) )
                Spectre::Engine::ShaderPropertyBlock::ApplyState(*v28);
              Spectre::Engine::Mesh::Render(*((_QWORD *)this + 11), a2, *(_QWORD *)(v22 + 136));
              v5 = v34;
              v19 = v29;
            }
            if ( v31 )
              std::_Ref_count_base::_Decref(v31);
          }
          if ( v39 )
            std::_Ref_count_base::_Decref(v39);
        }
        if ( v33 )
          std::_Ref_count_base::_Decref(v33);
      }
      ++v20;
      v21 += 88LL;
    }
    while ( v20 < Spectre::Engine::MeshInstance::GetMaterialCount(this) );
  }
  std::weak_ptr<Spectre::Engine::GpuProfiler>::lock((__int64)v37, &v30);
  if ( v30 )
    (**v30)(v30);
  if ( v31 )
    std::_Ref_count_base::_Decref(v31);
  if ( v37[1] )
    std::_Ref_count_base::_Decwref(v37[1]);
}

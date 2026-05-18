/*
 * XREFs of ?ApplyState@Material@Engine@Spectre@@QEAA?AU?$pair@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@VShaderTypeGroup@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@5@_N@Z @ 0x180043F18
 * Callers:
 *     ?Render@MeshInstance@Engine@Spectre@@UEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18004C400 (-Render@MeshInstance@Engine@Spectre@@UEBAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ?SetRenderState@CommandList@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VRenderState@Engine@Spectre@@@std@@@Z @ 0x180039720 (-SetRenderState@CommandList@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VRenderState@Engine@Spectre@@@.c)
 *     ??$_Find@W4RenderDeviceID@Engine@Spectre@@@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@PEAX@1@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x180043548 (--$_Find@W4RenderDeviceID@Engine@Spectre@@@-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spect.c)
 *     ?GetOptionsEnabled@Material@Engine@Spectre@@QEBA_KXZ @ 0x180044334 (-GetOptionsEnabled@Material@Engine@Spectre@@QEBA_KXZ.c)
 *     ?IsDoubleSided@Material@Engine@Spectre@@QEBA_NXZ @ 0x180044424 (-IsDoubleSided@Material@Engine@Spectre@@QEBA_NXZ.c)
 *     ?IsEmpty@VertexLayoutDesc@VertexLayoutBase@Engine@Spectre@@QEBA_NXZ @ 0x180044438 (-IsEmpty@VertexLayoutDesc@VertexLayoutBase@Engine@Spectre@@QEBA_NXZ.c)
 *     ?GetOptionsEnabled@ShaderFamily@Engine@Spectre@@QEBA_KXZ @ 0x180060A5C (-GetOptionsEnabled@ShaderFamily@Engine@Spectre@@QEBA_KXZ.c)
 *     ?GetPipeline@ShaderFamily@Engine@Spectre@@QEBA?AV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@_KW4EShaderModel@23@@Z @ 0x180060A74 (-GetPipeline@ShaderFamily@Engine@Spectre@@QEBA-AV-$shared_ptr@VShaderPipeline@Engine@Spectre@@@s.c)
 *     ?ApplyState@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@VShaderTypeGroup@23@@Z @ 0x1800846B8 (-ApplyState@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCommandList@Engine@Spectr.c)
 *     ?ApplyState@ShaderPipeline@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@W4Sides@123@VShaderTypeGroup@23@_N@Z @ 0x180086A7C (-ApplyState@ShaderPipeline@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@s.c)
 *     ?AttachDevice@ShaderPipeline@Engine@Spectre@@QEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180086B60 (-AttachDevice@ShaderPipeline@Engine@Spectre@@QEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 *     ?GetShader@ShaderPipeline@Engine@Spectre@@QEBA?AV?$shared_ptr@VShader@Engine@Spectre@@@std@@W4EShaderType@23@@Z @ 0x1800873D4 (-GetShader@ShaderPipeline@Engine@Spectre@@QEBA-AV-$shared_ptr@VShader@Engine@Spectre@@@std@@W4ES.c)
 *     ?AttachDevice@RenderState@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180088210 (-AttachDevice@RenderState@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Spectre::Engine::Material::ApplyState(
        Spectre::Engine::Material *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        char a5)
{
  int v7; // ebx
  __int64 v8; // rcx
  unsigned __int64 OptionsEnabled; // rax
  __int64 v10; // r10
  __int64 v11; // r8
  __int64 v12; // r11
  __int64 v13; // rcx
  bool v14; // al
  __int64 v15; // r13
  unsigned int i; // edi
  _QWORD *Shader; // rax
  bool v18; // r12
  Spectre::Engine::Material *v19; // r14
  bool IsDoubleSided; // al
  __int64 v21; // rdi
  _QWORD v23[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v24; // [rsp+48h] [rbp-18h] BYREF
  std::_Ref_count_base *v25; // [rsp+50h] [rbp-10h]
  Spectre::Engine::Material *v26; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+48h] BYREF
  int v28; // [rsp+B0h] [rbp+50h]

  v27 = a2;
  v26 = a1;
  v28 = *(_DWORD *)(*a4 + 88);
  v7 = 0;
  Spectre::Engine::Material::GetOptionsEnabled(a1);
  OptionsEnabled = Spectre::Engine::ShaderFamily::GetOptionsEnabled(*(Spectre::Engine::ShaderFamily **)(v8 + 136));
  Spectre::Engine::ShaderFamily::GetPipeline(v13, v23, v10 | OptionsEnabled | v11, *(unsigned int *)(v12 + 104));
  v14 = std::operator!=<Spectre::Engine::Scene>(v23);
  v15 = v23[0];
  if ( v14 )
  {
    std::weak_ptr<Spectre::Engine::RenderDevice>::lock(*a4 + 72, &v24);
    Spectre::Engine::ShaderPipeline::AttachDevice(v15, &v24);
    if ( !Spectre::Engine::VertexLayoutBase::VertexLayoutDesc::IsEmpty((Spectre::Engine::VertexLayoutBase::VertexLayoutDesc *)(v15 + 128)) )
    {
      std::weak_ptr<Spectre::Engine::RenderDevice>::lock(*a4 + 72, &v24);
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 192LL))(v24, &v27);
      if ( v25 )
        std::_Ref_count_base::_Decref(v25);
      for ( i = 0; i < 6; ++i )
      {
        if ( ((1 << i) & (unsigned int)v27) != 0 )
        {
          Shader = (_QWORD *)Spectre::Engine::ShaderPipeline::GetShader(v15, &v24, i);
          v18 = std::operator!=<Spectre::Engine::Scene>(Shader);
          if ( v25 )
            std::_Ref_count_base::_Decref(v25);
          if ( v18 )
            v7 |= 1 << i;
        }
      }
      v19 = v26;
      IsDoubleSided = Spectre::Engine::Material::IsDoubleSided(v26);
      Spectre::Engine::ShaderPipeline::ApplyState(v15, (_DWORD)a4, IsDoubleSided, v7, a5);
      Spectre::Engine::ShaderPropertyBlock::ApplyState(*((Spectre::Engine::ShaderPropertyBlock **)v19 + 15));
      v21 = *((_QWORD *)v19 + 21);
      if ( v21 )
      {
        LODWORD(v26) = v28;
        if ( std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>::_Find<enum Spectre::Engine::RenderDeviceID>(
               v21 + 128,
               (__int64)&v26) == *(_QWORD *)(v21 + 128) )
        {
          std::weak_ptr<Spectre::Engine::RenderDevice>::lock(*a4 + 72, &v24);
          Spectre::Engine::RenderState::AttachDevice(*((_QWORD *)v19 + 21), &v24);
          if ( v25 )
            std::_Ref_count_base::_Decref(v25);
        }
        Spectre::Engine::CommandList::SetRenderState(*a4);
      }
    }
  }
  *(_QWORD *)a2 = v15;
  *(_QWORD *)(a2 + 8) = v23[1];
  *(_DWORD *)(a2 + 16) = v7;
  return a2;
}

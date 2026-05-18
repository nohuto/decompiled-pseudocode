/*
 * XREFs of ?ApplyState@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@VShaderTypeGroup@23@@Z @ 0x1800846B8
 * Callers:
 *     ?ApplyState@Material@Engine@Spectre@@QEAA?AU?$pair@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@VShaderTypeGroup@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@5@_N@Z @ 0x180043F18 (-ApplyState@Material@Engine@Spectre@@QEAA-AU-$pair@V-$shared_ptr@VShaderPipeline@Engine@Spectre@.c)
 *     ?Render@MeshInstance@Engine@Spectre@@UEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18004C400 (-Render@MeshInstance@Engine@Spectre@@UEBAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K.c)
 *     ?ApplyState@ShaderFamily@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@VShaderTypeGroup@23@@Z @ 0x18005FF64 (-ApplyState@ShaderFamily@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??$?8VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DD0 (--$-8VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?SetShaderConstantBuffer@CommandList@Engine@Spectre@@QEAAXW4EShaderType@23@AEBV?$shared_ptr@VConstantBuffer@Engine@Spectre@@@std@@I@Z @ 0x1800397DC (-SetShaderConstantBuffer@CommandList@Engine@Spectre@@QEAAXW4EShaderType@23@AEBV-$shared_ptr@VCon.c)
 *     ?SetShaderSampler@CommandList@Engine@Spectre@@QEAAXW4EShaderType@23@AEBV?$shared_ptr@VSampler@Engine@Spectre@@@std@@I@Z @ 0x180039804 (-SetShaderSampler@CommandList@Engine@Spectre@@QEAAXW4EShaderType@23@AEBV-$shared_ptr@VSampler@En.c)
 *     ?SetShaderTexture@CommandList@Engine@Spectre@@QEAAXW4EShaderType@23@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@I@Z @ 0x18003981C (-SetShaderTexture@CommandList@Engine@Spectre@@QEAAXW4EShaderType@23@AEBV-$shared_ptr@VTexture@En.c)
 *     ?UpdateBuffer@CommandList@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VConstantBuffer@Engine@Spectre@@@std@@PEBXI@Z @ 0x180039A80 (-UpdateBuffer@CommandList@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VConstantBuffer@Engine@Spectre@@.c)
 *     ?AttachDevice@Sampler@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180054610 (-AttachDevice@Sampler@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@.c)
 *     ?GetDeviceRenderState@RenderState@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceRenderState@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x180054A8C (-GetDeviceRenderState@RenderState@Engine@Spectre@@QEBA-AV-$shared_ptr@VDeviceRenderState@Engine@.c)
 *     ?AttachDevice@Texture@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180055980 (-AttachDevice@Texture@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@.c)
 *     ?GetDeviceTexture@Texture@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x180056670 (-GetDeviceTexture@Texture@Engine@Spectre@@QEBA-AV-$shared_ptr@VDeviceTexture@Engine@Spectre@@@st.c)
 *     ??$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@?$map@W4RenderDeviceID@Engine@Spectre@@IU?$less@W4RenderDeviceID@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@I@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@I@std@@PEAX@std@@_N@1@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x180084184 (--$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@-$map@W4RenderDeviceID@Engine@Spectre@@I.c)
 *     ?AttachDevice@ShaderPropertyBlock@Engine@Spectre@@UEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800849B0 (-AttachDevice@ShaderPropertyBlock@Engine@Spectre@@UEAAXV-$shared_ptr@VRenderDevice@Engine@Spectr.c)
 *     ?Contains@ConstantBuffer@Engine@Spectre@@QEBA_NW4RenderDeviceID@23@@Z @ 0x180084D00 (-Contains@ConstantBuffer@Engine@Spectre@@QEBA_NW4RenderDeviceID@23@@Z.c)
 *     ?FlushState@ShaderPropertyBlock@Engine@Spectre@@QEAAXXZ @ 0x180085068 (-FlushState@ShaderPropertyBlock@Engine@Spectre@@QEAAXXZ.c)
 *     ?GetBuffer@ShaderPropertyBlock@Engine@Spectre@@AEAAPEBXXZ @ 0x180085090 (-GetBuffer@ShaderPropertyBlock@Engine@Spectre@@AEAAPEBXXZ.c)
 *     ?GetBufferSizeBytes@ShaderPropertyBlock@Engine@Spectre@@AEBAIXZ @ 0x18008509C (-GetBufferSizeBytes@ShaderPropertyBlock@Engine@Spectre@@AEBAIXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::ShaderPropertyBlock::ApplyState(
        Spectre::Engine::ShaderPropertyBlock *this,
        __int64 *a2,
        int a3)
{
  int v3; // ebx
  unsigned int v6; // r13d
  _QWORD *v7; // r15
  Spectre::Engine::ShaderPropertyBlock *v8; // rcx
  const void *Buffer; // rax
  unsigned int v10; // r9d
  int v11; // edi
  unsigned int i; // edi
  unsigned __int64 v13; // r8
  unsigned int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r8
  _QWORD *DeviceTexture; // rax
  bool v20; // r14
  _QWORD *DeviceRenderState; // rax
  bool v22; // r14
  __int64 v23; // [rsp+20h] [rbp-58h] BYREF
  std::_Ref_count_base *v24; // [rsp+28h] [rbp-50h]
  Spectre::Engine::Texture *v25; // [rsp+30h] [rbp-48h] BYREF
  std::_Ref_count_base *v26; // [rsp+38h] [rbp-40h]
  __int64 v27; // [rsp+40h] [rbp-38h] BYREF
  std::_Ref_count_base *v28; // [rsp+48h] [rbp-30h]
  __int64 v29; // [rsp+50h] [rbp-28h] BYREF
  std::_Ref_count_base *v30; // [rsp+58h] [rbp-20h]
  __int64 v31; // [rsp+60h] [rbp-18h] BYREF
  std::_Ref_count_base *v32; // [rsp+68h] [rbp-10h]
  unsigned int v33; // [rsp+C0h] [rbp+48h] BYREF
  unsigned int v34; // [rsp+C8h] [rbp+50h]
  int v35; // [rsp+D0h] [rbp+58h]
  int v36; // [rsp+D8h] [rbp+60h] BYREF

  v35 = a3;
  v3 = a3;
  v6 = *(_DWORD *)(*a2 + 88);
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock(*a2 + 72, &v27);
  v7 = (_QWORD *)((char *)this + 128);
  if ( *((_QWORD *)this + 4) != *((_QWORD *)this + 5) )
  {
    if ( !*v7 || !(unsigned __int8)Spectre::Engine::ConstantBuffer::Contains(*v7, v6) )
    {
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
        &v25,
        &v27);
      Spectre::Engine::ShaderPropertyBlock::AttachDevice(this);
    }
    Spectre::Engine::ShaderPropertyBlock::FlushState(this);
    v33 = v6;
    if ( *((_DWORD *)this + 20) != *(_DWORD *)(*(_QWORD *)std::map<enum Spectre::Engine::RenderDeviceID,unsigned int>::_Try_emplace<enum Spectre::Engine::RenderDeviceID const &,>(
                                                            (_QWORD *)this + 11,
                                                            (__int64)&v31,
                                                            &v33)
                                             + 32LL) )
    {
      Spectre::Engine::ShaderPropertyBlock::GetBufferSizeBytes(this);
      Buffer = Spectre::Engine::ShaderPropertyBlock::GetBuffer(v8);
      Spectre::Engine::CommandList::UpdateBuffer((_QWORD **)*a2, (__int64)this + 128, (__int64)Buffer, v10);
      v11 = *((_DWORD *)this + 20);
      v33 = v6;
      *(_DWORD *)(*(_QWORD *)std::map<enum Spectre::Engine::RenderDeviceID,unsigned int>::_Try_emplace<enum Spectre::Engine::RenderDeviceID const &,>(
                               (_QWORD *)this + 11,
                               (__int64)&v31,
                               &v33)
                + 32LL) = v11;
    }
  }
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v27 + 200LL))(v27, &v36);
  for ( i = 0; i < 6; ++i )
  {
    if ( ((1 << i) & v3) != 0 )
    {
      if ( std::operator!=<Spectre::Engine::Scene>((_QWORD *)this + 16) )
      {
        Spectre::Engine::CommandList::SetShaderConstantBuffer(*a2);
        v13 = 0xCCCCCCCCCCCCCCCDuLL;
      }
      if ( ((1 << i) & v36) != 0 )
      {
        v14 = 0;
        v33 = 0;
        v15 = *((_QWORD *)this + 7);
        if ( v13 * ((*((_QWORD *)this + 8) - v15) >> 3) )
        {
          v16 = 0LL;
          do
          {
            std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
              &v25,
              (_QWORD *)(v15 + 40 * v16));
            std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
              &v23,
              (_QWORD *)(v17 + 16));
            v34 = *(_DWORD *)(v18 + 32);
            if ( std::operator!=<Spectre::Engine::Scene>(&v25) )
            {
              DeviceTexture = Spectre::Engine::Texture::GetDeviceTexture((__int64)v25, &v29, v6);
              v20 = std::operator==<Spectre::Engine::Scene>(DeviceTexture);
              if ( v30 )
                std::_Ref_count_base::_Decref(v30);
              if ( v20 )
                Spectre::Engine::Texture::AttachDevice(v25, &v27);
              Spectre::Engine::CommandList::SetShaderTexture(*a2, i, (__int64)&v25, v34, v23, (__int64)v24);
              if ( std::operator!=<Spectre::Engine::Scene>(&v23) )
              {
                DeviceRenderState = Spectre::Engine::RenderState::GetDeviceRenderState(v23, &v31, v6);
                v22 = std::operator==<Spectre::Engine::Scene>(DeviceRenderState);
                if ( v32 )
                  std::_Ref_count_base::_Decref(v32);
                if ( v22 )
                  Spectre::Engine::Sampler::AttachDevice(v23, &v27);
                Spectre::Engine::CommandList::SetShaderSampler(*a2, i, (__int64)&v23, v34, v23, (__int64)v24);
              }
              v14 = v33;
            }
            if ( v24 )
              std::_Ref_count_base::_Decref(v24);
            if ( v26 )
              std::_Ref_count_base::_Decref(v26);
            v33 = ++v14;
            v15 = *((_QWORD *)this + 7);
            v16 = v14;
          }
          while ( v14 < 0xCCCCCCCCCCCCCCCDuLL * ((*((_QWORD *)this + 8) - v15) >> 3) );
          v3 = v35;
        }
      }
    }
  }
  if ( v28 )
    std::_Ref_count_base::_Decref(v28);
}

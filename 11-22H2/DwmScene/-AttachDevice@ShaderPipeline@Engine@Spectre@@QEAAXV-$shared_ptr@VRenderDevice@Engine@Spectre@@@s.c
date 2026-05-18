/*
 * XREFs of ?AttachDevice@ShaderPipeline@Engine@Spectre@@QEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180086B60
 * Callers:
 *     ?ApplyState@Material@Engine@Spectre@@QEAA?AU?$pair@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@VShaderTypeGroup@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@5@_N@Z @ 0x180043F18 (-ApplyState@Material@Engine@Spectre@@QEAA-AU-$pair@V-$shared_ptr@VShaderPipeline@Engine@Spectre@.c)
 *     ?ApplyState@ShaderPipeline@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@W4Sides@123@VShaderTypeGroup@23@_N@Z @ 0x180086A7C (-ApplyState@ShaderPipeline@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@s.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$?8VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DD0 (--$-8VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ @ 0x180026598 (-GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?GetID@RenderDevice@Engine@Spectre@@QEBA?AW4RenderDeviceID@23@XZ @ 0x1800265D0 (-GetID@RenderDevice@Engine@Spectre@@QEBA-AW4RenderDeviceID@23@XZ.c)
 *     ?SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z @ 0x1800297F0 (-SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z.c)
 *     ?VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A384 (-VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ.c)
 *     ??$CreateResource@VRenderState@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VRenderState@Engine@Spectre@@@std@@XZ @ 0x180043528 (--$CreateResource@VRenderState@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ea_180043528.c)
 *     ??$_Find@W4RenderDeviceID@Engine@Spectre@@@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@PEAX@1@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x180043548 (--$_Find@W4RenderDeviceID@Engine@Spectre@@@-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spect.c)
 *     ?GetShaderProgram@ShaderManager@Engine@Spectre@@QEBAAEBV?$shared_ptr@VShaderProgram@Engine@Spectre@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x180050334 (-GetShaderProgram@ShaderManager@Engine@Spectre@@QEBAAEBV-$shared_ptr@VShaderProgram@Engine@Spect.c)
 *     ??$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@?$map@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@@std@@PEAX@std@@_N@1@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x1800541F0 (--$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@-$map@W4RenderDeviceID@Engi_ea_1800541F0.c)
 *     ?GetShaderManager@ShaderFamily@Engine@Spectre@@QEBA?AV?$shared_ptr@VShaderManager@Engine@Spectre@@@std@@XZ @ 0x180060D1C (-GetShaderManager@ShaderFamily@Engine@Spectre@@QEBA-AV-$shared_ptr@VShaderManager@Engine@Spectre.c)
 *     ??$CreateResource@VDeviceShaderPipeline@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VDeviceShaderPipeline@Engine@Spectre@@@std@@XZ @ 0x180085F04 (--$CreateResource@VDeviceShaderPipeline@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA-AV-$s.c)
 *     ??$CreateResource@VVertexLayout@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VVertexLayout@Engine@Spectre@@@std@@XZ @ 0x180086144 (--$CreateResource@VVertexLayout@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$share_ea_180086144.c)
 *     ??$dynamic_pointer_cast@VDomainShader@Engine@Spectre@@VShader@23@@std@@YA?AV?$shared_ptr@VDomainShader@Engine@Spectre@@@0@AEBV?$shared_ptr@VShader@Engine@Spectre@@@0@@Z @ 0x18008638C (--$dynamic_pointer_cast@VDomainShader@Engine@Spectre@@VShader@23@@std@@YA-AV-$shared_ptr@VDomain.c)
 *     ??$dynamic_pointer_cast@VGeometryShader@Engine@Spectre@@VShader@23@@std@@YA?AV?$shared_ptr@VGeometryShader@Engine@Spectre@@@0@AEBV?$shared_ptr@VShader@Engine@Spectre@@@0@@Z @ 0x1800863F4 (--$dynamic_pointer_cast@VGeometryShader@Engine@Spectre@@VShader@23@@std@@YA-AV-$shared_ptr@VGeom.c)
 *     ??$dynamic_pointer_cast@VHullShader@Engine@Spectre@@VShader@23@@std@@YA?AV?$shared_ptr@VHullShader@Engine@Spectre@@@0@AEBV?$shared_ptr@VShader@Engine@Spectre@@@0@@Z @ 0x18008645C (--$dynamic_pointer_cast@VHullShader@Engine@Spectre@@VShader@23@@std@@YA-AV-$shared_ptr@VHullShad.c)
 *     ??$dynamic_pointer_cast@VPixelShader@Engine@Spectre@@VShader@23@@std@@YA?AV?$shared_ptr@VPixelShader@Engine@Spectre@@@0@AEBV?$shared_ptr@VShader@Engine@Spectre@@@0@@Z @ 0x1800864C4 (--$dynamic_pointer_cast@VPixelShader@Engine@Spectre@@VShader@23@@std@@YA-AV-$shared_ptr@VPixelSh.c)
 *     ??$dynamic_pointer_cast@VVertexShader@Engine@Spectre@@VShader@23@@std@@YA?AV?$shared_ptr@VVertexShader@Engine@Spectre@@@0@AEBV?$shared_ptr@VShader@Engine@Spectre@@@0@@Z @ 0x18008652C (--$dynamic_pointer_cast@VVertexShader@Engine@Spectre@@VShader@23@@std@@YA-AV-$shared_ptr@VVertex.c)
 *     ??0VertexLayoutDesc@VertexLayoutBase@Engine@Spectre@@QEAA@AEBV0123@@Z @ 0x180086788 (--0VertexLayoutDesc@VertexLayoutBase@Engine@Spectre@@QEAA@AEBV0123@@Z.c)
 *     ?GetShader@ShaderPipeline@Engine@Spectre@@QEBA?AV?$shared_ptr@VShader@Engine@Spectre@@@std@@W4EShaderType@23@@Z @ 0x1800873D4 (-GetShader@ShaderPipeline@Engine@Spectre@@QEBA-AV-$shared_ptr@VShader@Engine@Spectre@@@std@@W4ES.c)
 *     ?AttachDevice@RenderState@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180088210 (-AttachDevice@RenderState@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 *     ?Create@RenderState@Engine@Spectre@@UEAAXAEBURenderStateDesc@23@PEAVRenderDevice@23@@Z @ 0x180088360 (-Create@RenderState@Engine@Spectre@@UEAAXAEBURenderStateDesc@23@PEAVRenderDevice@23@@Z.c)
 *     ?GetName@Shader@Engine@Spectre@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x18008B008 (-GetName@Shader@Engine@Spectre@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@s.c)
 *     ?AttachDevice@VertexLayout@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18008BE40 (-AttachDevice@VertexLayout@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@.c)
 *     ?Contains@VertexLayout@Engine@Spectre@@QEBA_NW4RenderDeviceID@23@@Z @ 0x18008C0E4 (-Contains@VertexLayout@Engine@Spectre@@QEBA_NW4RenderDeviceID@23@@Z.c)
 *     ?Create@VertexLayout@Engine@Spectre@@UEAAXVVertexLayoutDesc@VertexLayoutBase@23@AEBV?$shared_ptr@VShaderProgram@Engine@Spectre@@@std@@@Z @ 0x18008C1B0 (-Create@VertexLayout@Engine@Spectre@@UEAAXVVertexLayoutDesc@VertexLayoutBase@23@AEBV-$shared_ptr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall Spectre::Engine::ShaderPipeline::AttachDevice(__int64 a1, __int64 *a2)
{
  unsigned int ID; // r15d
  Spectre::Engine::RenderDevice *v5; // rcx
  __int64 *Engine; // r14
  __int64 *v7; // rbx
  __int64 *v8; // rax
  struct Spectre::Engine::RenderDevice *v9; // r8
  int v10; // ecx
  __int64 *v11; // rax
  __int64 *v12; // rdi
  struct Spectre::Engine::RenderDevice *v13; // r8
  __int64 *v14; // rax
  __int64 *v15; // rdi
  struct Spectre::Engine::RenderDevice *v16; // r8
  __int64 *v17; // rax
  __int64 *v18; // rdi
  struct Spectre::Engine::RenderDevice *v19; // r8
  __int64 v20; // rdi
  _QWORD *v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  bool v25; // r12
  __int64 *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  std::_Ref_count_base *v29; // rcx
  _QWORD *Name; // rax
  __int64 ShaderProgram; // rbx
  __int64 v32; // rdi
  Spectre::Engine::VertexLayoutBase::VertexLayoutDesc *v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rax
  char *Shader; // rax
  char v37; // bl
  __int64 v38; // rcx
  char *v39; // rax
  __int64 v40; // rcx
  char v41; // di
  char v42; // di
  char *v43; // rax
  __int64 v44; // rcx
  char v45; // bl
  char v46; // bl
  char *v47; // rax
  __int64 v48; // rcx
  char v49; // dl
  char v50; // bl
  __int64 v51; // r12
  void (__fastcall *v52)(__int64, __int64 *, __int64 *, __int64 *, __int64 *, __int64 *); // r15
  __int64 *v53; // r14
  __int64 *v54; // rsi
  __int64 *v55; // rdi
  __int64 *v56; // rbx
  __int64 *v57; // rax
  __int64 v58; // rax
  std::_Ref_count_base *v59; // rcx
  char v60; // [rsp+40h] [rbp-C0h] BYREF
  std::_Ref_count_base *v61; // [rsp+48h] [rbp-B8h]
  __int64 v62; // [rsp+50h] [rbp-B0h] BYREF
  std::_Ref_count_base *v63; // [rsp+58h] [rbp-A8h]
  __int64 v64; // [rsp+60h] [rbp-A0h] BYREF
  std::_Ref_count_base *v65; // [rsp+68h] [rbp-98h]
  __int64 v66; // [rsp+70h] [rbp-90h] BYREF
  std::_Ref_count_base *v67; // [rsp+78h] [rbp-88h]
  int v68; // [rsp+80h] [rbp-80h] BYREF
  __int64 v69; // [rsp+84h] [rbp-7Ch]
  int v70; // [rsp+8Ch] [rbp-74h]
  int v71; // [rsp+90h] [rbp-70h]
  int v72; // [rsp+94h] [rbp-6Ch]
  char v73; // [rsp+98h] [rbp-68h]
  __int128 v74; // [rsp+9Ch] [rbp-64h]
  __int128 v75; // [rsp+ACh] [rbp-54h]
  int v76; // [rsp+BCh] [rbp-44h]
  char v77; // [rsp+C0h] [rbp-40h]
  int v78; // [rsp+C4h] [rbp-3Ch]
  __int64 v79; // [rsp+D0h] [rbp-30h] BYREF
  std::_Ref_count_base *v80; // [rsp+D8h] [rbp-28h]
  __int64 v81; // [rsp+E0h] [rbp-20h] BYREF
  std::_Ref_count_base *v82; // [rsp+E8h] [rbp-18h]
  std::_Ref_count_base *v83; // [rsp+F0h] [rbp-10h]
  std::_Ref_count_base *v84; // [rsp+F8h] [rbp-8h]
  std::_Ref_count_base *v85; // [rsp+100h] [rbp+0h]
  std::_Ref_count_base *v86; // [rsp+108h] [rbp+8h]
  __int64 v87; // [rsp+110h] [rbp+10h] BYREF
  std::_Ref_count_base *v88; // [rsp+118h] [rbp+18h]
  _QWORD v89[2]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v90[4]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v91; // [rsp+150h] [rbp+50h] BYREF
  __int64 v92; // [rsp+160h] [rbp+60h] BYREF
  __int64 v93[10]; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v94; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 *v95; // [rsp+1D8h] [rbp+D8h]
  unsigned int v96; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 *v97; // [rsp+1E8h] [rbp+E8h]

  v95 = a2;
  v94 = 0;
  Spectre::Engine::Lockable::VerifyWriteAccess((Spectre::Engine::Lockable *)(*a2 + 24));
  ID = Spectre::Engine::RenderDevice::GetID(*a2);
  v96 = ID;
  Engine = (__int64 *)Spectre::Engine::RenderDevice::GetEngine(v5);
  v7 = (__int64 *)(a1 + 48);
  if ( std::operator==<Spectre::Engine::Scene>((_QWORD *)(a1 + 48)) )
  {
    v8 = (__int64 *)Spectre::Engine::Engine::CreateResource<Spectre::Engine::RenderState,>(Engine, (__int64)&v62);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(a1 + 48), v8);
    if ( v63 )
      std::_Ref_count_base::_Decref(v63);
    Spectre::Engine::RendererResource::SetOption(*v7, 1, 0);
    v68 = 0;
    v69 = 2LL;
    v70 &= (unsigned int)v9;
    v71 &= (unsigned int)v9;
    v72 &= (unsigned int)v9;
    v73 = 0;
    v74 = 0LL;
    v75 = 0LL;
    v76 = 65793;
    v77 = 1;
    v78 = 3;
    if ( (*(_BYTE *)(a1 + 124) & 1) != 0 )
    {
      HIDWORD(v69) = *(_DWORD *)(a1 + 112);
      LODWORD(v69) = *(_DWORD *)(a1 + 116);
      LOBYTE(v76) = *(_BYTE *)(a1 + 125);
      v10 = *(_DWORD *)(a1 + 120);
      BYTE1(v76) = ((v10 - 1) & 0xFFFFFFFD) == 0;
      BYTE2(v76) = (unsigned int)(v10 - 2) <= 1;
    }
    Spectre::Engine::RenderState::Create(
      (Spectre::Engine::RenderState *)*v7,
      (const struct Spectre::Engine::RenderStateDesc *)&v68,
      v9);
    if ( (*(_BYTE *)(a1 + 124) & 2) != 0 )
    {
      LODWORD(v69) = 1;
      v11 = (__int64 *)Spectre::Engine::Engine::CreateResource<Spectre::Engine::RenderState,>(Engine, (__int64)&v62);
      v12 = (__int64 *)(a1 + 64);
      std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(a1 + 64), v11);
      if ( v63 )
        std::_Ref_count_base::_Decref(v63);
      Spectre::Engine::RendererResource::SetOption(*v12, 1, 0);
      Spectre::Engine::RenderState::Create(
        (Spectre::Engine::RenderState *)*v12,
        (const struct Spectre::Engine::RenderStateDesc *)&v68,
        v13);
    }
    if ( (*(_BYTE *)(a1 + 124) & 4) != 0 )
    {
      LODWORD(v69) = 1;
      v77 = 0;
      v14 = (__int64 *)Spectre::Engine::Engine::CreateResource<Spectre::Engine::RenderState,>(Engine, (__int64)&v62);
      v15 = (__int64 *)(a1 + 80);
      std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(a1 + 80), v14);
      if ( v63 )
        std::_Ref_count_base::_Decref(v63);
      Spectre::Engine::RendererResource::SetOption(*v15, 1, 0);
      Spectre::Engine::RenderState::Create(
        (Spectre::Engine::RenderState *)*v15,
        (const struct Spectre::Engine::RenderStateDesc *)&v68,
        v16);
    }
    if ( (*(_BYTE *)(a1 + 124) & 8) != 0 )
    {
      LODWORD(v69) = *(_DWORD *)(a1 + 116);
      v77 = 0;
      v17 = (__int64 *)Spectre::Engine::Engine::CreateResource<Spectre::Engine::RenderState,>(Engine, (__int64)&v62);
      v18 = (__int64 *)(a1 + 96);
      std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(a1 + 96), v17);
      if ( v63 )
        std::_Ref_count_base::_Decref(v63);
      Spectre::Engine::RendererResource::SetOption(*v18, 1, 0);
      Spectre::Engine::RenderState::Create(
        (Spectre::Engine::RenderState *)*v18,
        (const struct Spectre::Engine::RenderStateDesc *)&v68,
        v19);
    }
  }
  v20 = *v7;
  v21 = (_QWORD *)(*v7 + 128);
  v94 = ID;
  if ( std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>::_Find<enum Spectre::Engine::RenderDeviceID>(
         (__int64)v21,
         (__int64)&v94) == *v21 )
    Spectre::Engine::RenderState::AttachDevice(v20, a2);
  v22 = *(_QWORD *)(a1 + 64);
  if ( v22 )
  {
    v94 = ID;
    if ( std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>::_Find<enum Spectre::Engine::RenderDeviceID>(
           v22 + 128,
           (__int64)&v94) == *(_QWORD *)(v22 + 128) )
      Spectre::Engine::RenderState::AttachDevice(v22, a2);
  }
  v23 = *(_QWORD *)(a1 + 80);
  if ( v23 )
  {
    v94 = ID;
    if ( std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>::_Find<enum Spectre::Engine::RenderDeviceID>(
           v23 + 128,
           (__int64)&v94) == *(_QWORD *)(v23 + 128) )
      Spectre::Engine::RenderState::AttachDevice(v23, a2);
  }
  v24 = *(_QWORD *)(a1 + 96);
  if ( v24 )
  {
    v94 = ID;
    if ( std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>::_Find<enum Spectre::Engine::RenderDeviceID>(
           v24 + 128,
           (__int64)&v94) == *(_QWORD *)(v24 + 128) )
      Spectre::Engine::RenderState::AttachDevice(v24, a2);
  }
  Spectre::Engine::ShaderPipeline::GetShader(a1, &v79, 1LL);
  v25 = std::operator!=<Spectre::Engine::Scene>(&v79);
  if ( v25 && !*(_QWORD *)(a1 + 176) )
  {
    v26 = (__int64 *)Spectre::Engine::Engine::CreateResource<Spectre::Engine::VertexLayout,>(Engine, (__int64)&v62);
    v27 = *v26;
    v28 = v26[1];
    *v26 = 0LL;
    v26[1] = 0LL;
    *(_QWORD *)(a1 + 176) = v27;
    v29 = *(std::_Ref_count_base **)(a1 + 184);
    *(_QWORD *)(a1 + 184) = v28;
    if ( v29 )
      std::_Ref_count_base::_Decref(v29);
    if ( v63 )
      std::_Ref_count_base::_Decref(v63);
    Spectre::Engine::ShaderFamily::GetShaderManager(*(_QWORD *)(a1 + 16), &v64);
    Name = (_QWORD *)Spectre::Engine::Shader::GetName(v79, v90);
    ShaderProgram = Spectre::Engine::ShaderManager::GetShaderProgram(v64, Name);
    v32 = *(_QWORD *)(a1 + 176);
    v33 = Spectre::Engine::VertexLayoutBase::VertexLayoutDesc::VertexLayoutDesc(
            (Spectre::Engine::VertexLayoutBase::VertexLayoutDesc *)&v68,
            (const struct Spectre::Engine::VertexLayoutBase::VertexLayoutDesc *)(a1 + 128));
    Spectre::Engine::VertexLayout::Create(v32, v33, ShaderProgram);
    if ( v65 )
      std::_Ref_count_base::_Decref(v65);
  }
  v34 = *(_QWORD *)(a1 + 176);
  if ( v34 && !(unsigned __int8)Spectre::Engine::VertexLayout::Contains(*(_QWORD *)(a1 + 176), ID) && v25 )
    Spectre::Engine::VertexLayout::AttachDevice(v34, a2);
  v97 = (__int64 *)(a1 + 480);
  v94 = ID;
  v35 = std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>::_Find<enum Spectre::Engine::RenderDeviceID>(
          a1 + 480,
          (__int64)&v94);
  if ( v35 == *(_QWORD *)(a1 + 480) || std::operator==<Spectre::Engine::Scene>((_QWORD *)(v35 + 40)) )
  {
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)*a2 + 192LL))(*a2, &v94);
    if ( (v94 & 0x20) != 0 )
    {
      Shader = (char *)Spectre::Engine::ShaderPipeline::GetShader(a1, &v66, 5LL);
      v37 = 1;
      v38 = *(_QWORD *)Shader;
    }
    else
    {
      v61 = 0LL;
      Shader = &v60;
      v37 = 2;
      v38 = 0LL;
    }
    v62 = v38;
    v86 = (std::_Ref_count_base *)*((_QWORD *)Shader + 1);
    v63 = v86;
    *(_QWORD *)Shader = 0LL;
    *((_QWORD *)Shader + 1) = 0LL;
    if ( (v37 & 2) != 0 )
    {
      v37 &= ~2u;
      if ( v61 )
        std::_Ref_count_base::_Decref(v61);
    }
    if ( (v37 & 1) != 0 )
    {
      v37 &= ~1u;
      if ( v67 )
        std::_Ref_count_base::_Decref(v67);
    }
    if ( (v94 & 0x10) != 0 )
    {
      v39 = (char *)Spectre::Engine::ShaderPipeline::GetShader(a1, &v81, 4LL);
      v40 = *(_QWORD *)v39;
      v41 = 4;
    }
    else
    {
      v61 = 0LL;
      v39 = &v60;
      v40 = 0LL;
      v41 = 8;
    }
    v42 = v37 | v41;
    v89[0] = v40;
    v85 = (std::_Ref_count_base *)*((_QWORD *)v39 + 1);
    v89[1] = v85;
    *(_QWORD *)v39 = 0LL;
    *((_QWORD *)v39 + 1) = 0LL;
    if ( (v42 & 8) != 0 )
    {
      v42 &= ~8u;
      if ( v61 )
        std::_Ref_count_base::_Decref(v61);
    }
    if ( (v42 & 4) != 0 )
    {
      v42 &= ~4u;
      if ( v82 )
        std::_Ref_count_base::_Decref(v82);
    }
    if ( (v94 & 8) != 0 )
    {
      v43 = (char *)Spectre::Engine::ShaderPipeline::GetShader(a1, &v66, 3LL);
      v44 = *(_QWORD *)v43;
      v45 = 16;
    }
    else
    {
      v61 = 0LL;
      v43 = &v60;
      v44 = 0LL;
      v45 = 32;
    }
    v46 = v42 | v45;
    v81 = v44;
    v84 = (std::_Ref_count_base *)*((_QWORD *)v43 + 1);
    v82 = v84;
    *(_QWORD *)v43 = 0LL;
    *((_QWORD *)v43 + 1) = 0LL;
    if ( (v46 & 0x20) != 0 )
    {
      v46 &= ~0x20u;
      if ( v61 )
        std::_Ref_count_base::_Decref(v61);
    }
    if ( (v46 & 0x10) != 0 )
    {
      v46 &= ~0x10u;
      if ( v67 )
        std::_Ref_count_base::_Decref(v67);
    }
    if ( (v94 & 4) != 0 )
    {
      v47 = (char *)Spectre::Engine::ShaderPipeline::GetShader(a1, &v87, 2LL);
      v48 = *(_QWORD *)v47;
      v49 = 64;
    }
    else
    {
      v61 = 0LL;
      v47 = &v60;
      v48 = 0LL;
      v49 = 0x80;
    }
    v50 = v49 | v46;
    v66 = v48;
    v83 = (std::_Ref_count_base *)*((_QWORD *)v47 + 1);
    v67 = v83;
    *(_QWORD *)v47 = 0LL;
    *((_QWORD *)v47 + 1) = 0LL;
    if ( v50 < 0 )
    {
      v50 &= ~0x80u;
      if ( v61 )
        std::_Ref_count_base::_Decref(v61);
    }
    if ( (v50 & 0x40) != 0 && v88 )
      std::_Ref_count_base::_Decref(v88);
    Spectre::Engine::RenderDevice::CreateResource<Spectre::Engine::DeviceShaderPipeline>(*a2, &v64);
    v51 = v64;
    v52 = *(void (__fastcall **)(__int64, __int64 *, __int64 *, __int64 *, __int64 *, __int64 *))(*(_QWORD *)v64 + 40LL);
    v53 = std::dynamic_pointer_cast<Spectre::Engine::GeometryShader,Spectre::Engine::Shader>(&v87, v89);
    v54 = std::dynamic_pointer_cast<Spectre::Engine::DomainShader,Spectre::Engine::Shader>(&v91, &v81);
    v55 = std::dynamic_pointer_cast<Spectre::Engine::HullShader,Spectre::Engine::Shader>(&v92, &v66);
    v56 = std::dynamic_pointer_cast<Spectre::Engine::PixelShader,Spectre::Engine::Shader>(v93, &v62);
    v57 = std::dynamic_pointer_cast<Spectre::Engine::VertexShader,Spectre::Engine::Shader>(v90, &v79);
    v52(v51, v57, v56, v55, v54, v53);
    v58 = std::map<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceShader>>::_Try_emplace<enum Spectre::Engine::RenderDeviceID const &,>(
            v97,
            (__int64)v90,
            &v96);
    std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(*(_QWORD *)v58 + 40LL), &v64);
    if ( v65 )
      std::_Ref_count_base::_Decref(v65);
    if ( v83 )
      std::_Ref_count_base::_Decref(v83);
    if ( v84 )
      std::_Ref_count_base::_Decref(v84);
    if ( v85 )
      std::_Ref_count_base::_Decref(v85);
    if ( v86 )
      std::_Ref_count_base::_Decref(v86);
  }
  if ( v80 )
    std::_Ref_count_base::_Decref(v80);
  v59 = (std::_Ref_count_base *)a2[1];
  if ( v59 )
    std::_Ref_count_base::_Decref(v59);
}

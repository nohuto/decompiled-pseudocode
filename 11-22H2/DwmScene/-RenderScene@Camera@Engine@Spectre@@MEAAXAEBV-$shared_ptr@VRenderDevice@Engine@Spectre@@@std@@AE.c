/*
 * XREFs of ?RenderScene@Camera@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005C210
 * Callers:
 *     ?RenderScene@ShadowMapCamera@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18008E9C0 (-RenderScene@ShadowMapCamera@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetScene@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x18001265C (-GetScene@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 *     ??$?0VScene@Engine@Spectre@@$0A@@?$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x180015604 (--$-0VScene@Engine@Spectre@@$0A@@-$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@AEBV10@QEBD@Z @ 0x18001C600 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C600.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D378 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDevic.c)
 *     ?GetCommandList@RenderDevice@Engine@Spectre@@QEBAAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@XZ @ 0x180026500 (-GetCommandList@RenderDevice@Engine@Spectre@@QEBAAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@.c)
 *     ?GetOutput@RenderDevice@Engine@Spectre@@QEBA?AV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@I@Z @ 0x180026618 (-GetOutput@RenderDevice@Engine@Spectre@@QEBA-AV-$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@.c)
 *     ?VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A384 (-VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ.c)
 *     ??0?$weak_ptr@VMaterial@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18002B398 (--0-$weak_ptr@VMaterial@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0CpuProfilerScope@Engine@Spectre@@QEAA@AEBV?$weak_ptr@VCpuProfiler@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z @ 0x180030F54 (--0CpuProfilerScope@Engine@Spectre@@QEAA@AEBV-$weak_ptr@VCpuProfiler@Engine@Spectre@@@std@@AEBV-.c)
 *     ??1CpuProfilerScope@Engine@Spectre@@QEAA@XZ @ 0x180031C70 (--1CpuProfilerScope@Engine@Spectre@@QEAA@XZ.c)
 *     ?GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ @ 0x1800347F0 (-GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ.c)
 *     ?GetSymbolManager@Engine@1Spectre@@QEAAAEAVISymbolManager@12@XZ @ 0x180034800 (-GetSymbolManager@Engine@1Spectre@@QEAAAEAVISymbolManager@12@XZ.c)
 *     ?SetCpuProfiler@CommandList@Engine@Spectre@@QEAAXV?$weak_ptr@VCpuProfiler@Engine@Spectre@@@std@@@Z @ 0x180039648 (-SetCpuProfiler@CommandList@Engine@Spectre@@QEAAXV-$weak_ptr@VCpuProfiler@Engine@Spectre@@@std@@.c)
 *     ?SetGpuProfiler@CommandList@Engine@Spectre@@QEAAXV?$weak_ptr@VGpuProfiler@Engine@Spectre@@@std@@@Z @ 0x1800396A0 (-SetGpuProfiler@CommandList@Engine@Spectre@@QEAAXV-$weak_ptr@VGpuProfiler@Engine@Spectre@@@std@@.c)
 *     ?Render@Scene@Engine@Spectre@@QEBAXV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@5@AEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@AEBV?$shared_ptr@VISceneNodeTraversal@Engine@Spectre@@@5@_K@Z @ 0x180041CD0 (-Render@Scene@Engine@Spectre@@QEBAXV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@s.c)
 *     ??$_Erase_head@V?$allocator@U?$_Tree_node@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAX@std@@@1@@Z @ 0x18004D844 (--$_Erase_head@V-$allocator@U-$_Tree_node@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@.c)
 *     ?GetShaderFamily@ShaderManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x180050224 (-GetShaderFamily@ShaderManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderFamily@Engine@Spectre@.c)
 *     ?GetShaderFamilyNames@ShaderManager@Engine@Spectre@@QEBA?AV?$set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ @ 0x1800502BC (-GetShaderFamilyNames@ShaderManager@Engine@Spectre@@QEBA-AV-$set@V-$basic_string@DU-$char_traits.c)
 *     ?FlushShaderProperties@Camera@Engine@Spectre@@IEBAXH@Z @ 0x18005B90C (-FlushShaderProperties@Camera@Engine@Spectre@@IEBAXH@Z.c)
 *     ?GetCommandList@Camera@Engine@Spectre@@QEBA?AV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@@Z @ 0x18005BA04 (-GetCommandList@Camera@Engine@Spectre@@QEBA-AV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@AE.c)
 *     ?ResolveReadableDepth@Camera@Engine@Spectre@@IEBA_NAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@Z @ 0x18005CD30 (-ResolveReadableDepth@Camera@Engine@Spectre@@IEBA_NAEBV-$shared_ptr@VCommandList@Engine@Spectre@.c)
 *     ?ThisCameraShared@Camera@Engine@Spectre@@AEAA?AV?$shared_ptr@VCamera@Engine@Spectre@@@std@@XZ @ 0x18005D5DC (-ThisCameraShared@Camera@Engine@Spectre@@AEAA-AV-$shared_ptr@VCamera@Engine@Spectre@@@std@@XZ.c)
 *     ?GetExtension@ShaderFamily@Engine@Spectre@@QEBA?AV?$shared_ptr@VIShaderExtension@Engine@Spectre@@@std@@XZ @ 0x1800609B4 (-GetExtension@ShaderFamily@Engine@Spectre@@QEBA-AV-$shared_ptr@VIShaderExtension@Engine@Spectre@.c)
 *     ?SetAttributeFilter@SceneAttributeFilterGroup@Engine@Spectre@@QEAAX_KW4ESceneAttributeFilter@23@@Z @ 0x180070934 (-SetAttributeFilter@SceneAttributeFilterGroup@Engine@Spectre@@QEAAX_KW4ESceneAttributeFilter@23@.c)
 *     ?GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ @ 0x18008139C (-GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ??0GpuProfilerScope@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z @ 0x1800A2194 (--0GpuProfilerScope@Engine@Spectre@@QEAA@AEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEB.c)
 *     ??1GpuProfilerScope@Engine@Spectre@@QEAA@XZ @ 0x1800A224C (--1GpuProfilerScope@Engine@Spectre@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=21
void __fastcall Spectre::Engine::Camera::RenderScene(Spectre::Engine::Component *this, __int64 *a2, _QWORD *a3)
{
  __int64 *v4; // rsi
  __int64 *Output; // rax
  __int64 *CommandList; // r12
  _QWORD *v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // r8
  __int64 *v11; // rax
  __int64 v12; // r8
  __int64 *v13; // rax
  __int64 v14; // r8
  __int64 *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 *Scene; // rax
  std::_Ref_count_base *v19; // r15
  Spectre::Engine::Engine *Engine; // rax
  struct Spectre::Engine::ShaderManager *ShaderManager; // r14
  __int64 v22; // rcx
  _QWORD *v23; // rax
  std::_Ref_count_base *v24; // rbx
  _QWORD *Extension; // rax
  _QWORD *v26; // rax
  std::_Ref_count_base *v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // r14
  __int64 v31; // rbx
  __int64 v32; // r15
  __int64 v33; // r12
  __int64 v34; // rsi
  __int64 v35; // r14
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rax
  Spectre::Engine::Engine *v39; // rcx
  __int64 v40; // [rsp+40h] [rbp-C0h]
  std::_Ref_count_base *v41[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v42; // [rsp+58h] [rbp-A8h]
  __int64 v43; // [rsp+60h] [rbp-A0h] BYREF
  std::_Ref_count_base *v44; // [rsp+68h] [rbp-98h]
  __int64 v45; // [rsp+70h] [rbp-90h] BYREF
  std::_Ref_count_base *v46; // [rsp+78h] [rbp-88h]
  __int64 v47; // [rsp+80h] [rbp-80h]
  __int64 v48; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v49; // [rsp+90h] [rbp-70h]
  unsigned __int64 v50; // [rsp+98h] [rbp-68h]
  __int64 v51; // [rsp+A0h] [rbp-60h]
  std::_Ref_count_base *v52[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v53; // [rsp+C0h] [rbp-40h]
  __int64 v54; // [rsp+C8h] [rbp-38h] BYREF
  std::_Ref_count_base *v55; // [rsp+D0h] [rbp-30h]
  std::_Ref_count_base *v56[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v57; // [rsp+F0h] [rbp-10h]
  std::_Ref_count_base *v58; // [rsp+F8h] [rbp-8h]
  void *v59[2]; // [rsp+100h] [rbp+0h] BYREF
  std::_Ref_count_base *v60[2]; // [rsp+110h] [rbp+10h] BYREF
  char v61[8]; // [rsp+120h] [rbp+20h] BYREF
  std::_Ref_count_base *v62; // [rsp+128h] [rbp+28h]
  __int64 v63; // [rsp+130h] [rbp+30h] BYREF
  __int64 v64; // [rsp+140h] [rbp+40h] BYREF
  __int64 v65; // [rsp+150h] [rbp+50h] BYREF
  char v66[8]; // [rsp+160h] [rbp+60h] BYREF
  std::_Ref_count_base *v67; // [rsp+168h] [rbp+68h]
  __int128 v68; // [rsp+170h] [rbp+70h] BYREF
  __int64 v69; // [rsp+180h] [rbp+80h] BYREF
  std::_Ref_count_base *v70; // [rsp+188h] [rbp+88h]
  __int64 v71[3]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v72; // [rsp+1A8h] [rbp+A8h] BYREF
  std::_Ref_count_base *v73; // [rsp+1B0h] [rbp+B0h]
  __int64 v74; // [rsp+1B8h] [rbp+B8h] BYREF
  _BYTE v75[16]; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v76[3]; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 v77[4]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v78[4]; // [rsp+210h] [rbp+110h] BYREF
  __int64 v79; // [rsp+230h] [rbp+130h] BYREF
  std::_Ref_count_base *v80; // [rsp+238h] [rbp+138h]
  char v81[32]; // [rsp+250h] [rbp+150h] BYREF

  v4 = a2;
  v53 = a2;
  if ( *((_BYTE *)this + 72) && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 16LL))(*a2) )
  {
    Spectre::Engine::Lockable::VerifyWriteAccess((Spectre::Engine::Lockable *)(*v4 + 24));
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v45, a3);
    if ( !v45 )
    {
      Output = Spectre::Engine::RenderDevice::GetOutput(*v4, &v72, 0);
      std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(&v45, Output);
      if ( v73 )
        std::_Ref_count_base::_Decref(v73);
    }
    Spectre::Engine::Camera::GetCommandList((__int64)this, &v43, v4);
    CommandList = (__int64 *)Spectre::Engine::RenderDevice::GetCommandList(*v4);
    v42 = CommandList;
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 184LL))(v45);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v45 + 200LL))(v45, &v54);
    v9 = std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(&v74, v8);
    Spectre::Engine::CommandList::SetGpuProfiler(v10, v9);
    v11 = std::weak_ptr<Spectre::Engine::Material>::weak_ptr<Spectre::Engine::Material>(&v63, &v54);
    Spectre::Engine::CommandList::SetCpuProfiler(v12, v11);
    v13 = std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(&v64, v8);
    Spectre::Engine::CommandList::SetGpuProfiler(v14, v13);
    v15 = std::weak_ptr<Spectre::Engine::Material>::weak_ptr<Spectre::Engine::Material>(&v65, &v54);
    Spectre::Engine::CommandList::SetCpuProfiler(v16, v15);
    if ( v55 )
      std::_Ref_count_base::_Decwref(v55);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v4 + 104LL))(*v4, &v43);
    Spectre::Engine::Camera::ThisCameraShared(this, v52);
    std::operator+<char>(v81, (_QWORD *)this + 3, " scene");
    Spectre::Engine::GpuProfilerScope::GpuProfilerScope(v75, &v43, v81);
    v17 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v45 + 200LL))(v45, v66);
    Spectre::Engine::CpuProfilerScope::CpuProfilerScope(v76, v17);
    if ( v67 )
      std::_Ref_count_base::_Decwref(v67);
    (*(void (__fastcall **)(Spectre::Engine::Component *, __int64 *, _QWORD *))(*(_QWORD *)this + 192LL))(this, v4, a3);
    std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)this + 56, &v68);
    *(_OWORD *)v60 = v68;
    Scene = (__int64 *)Spectre::Engine::SceneNode::GetScene(v68, &v69);
    v47 = *Scene;
    v57 = v47;
    v19 = (std::_Ref_count_base *)Scene[1];
    v58 = v19;
    *Scene = 0LL;
    Scene[1] = 0LL;
    if ( v70 )
      std::_Ref_count_base::_Decref(v70);
    Engine = Spectre::Engine::Component::GetEngine(this);
    ShaderManager = Spectre::Engine::Engine::GetShaderManager(Engine);
    Spectre::Engine::ShaderManager::GetShaderFamilyNames((__int64)ShaderManager, (__int64 *)v59);
    v22 = *(_QWORD *)v59[0];
    v48 = *(_QWORD *)v59[0];
    while ( !*(_BYTE *)(v22 + 25) )
    {
      v23 = std::string::string(v77, v22 + 32);
      Spectre::Engine::ShaderManager::GetShaderFamily((__int64)ShaderManager, v41, v23);
      v24 = v41[0];
      Extension = (_QWORD *)Spectre::Engine::ShaderFamily::GetExtension(v41[0], &v79);
      (*(void (__fastcall **)(_QWORD, std::_Ref_count_base **, __int64 *))(*(_QWORD *)*Extension + 32LL))(
        *Extension,
        v52,
        &v45);
      if ( v80 )
        std::_Ref_count_base::_Decref(v80);
      if ( ((*((_DWORD *)this + 79) - 2) & 0xFFFFFFFD) != 0 )
      {
        v26 = (_QWORD *)Spectre::Engine::ShaderFamily::GetExtension(v24, v71);
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v26 + 96LL))(*v26, *v4);
        v27 = (std::_Ref_count_base *)v71[1];
      }
      else
      {
        v28 = (_QWORD *)Spectre::Engine::ShaderFamily::GetExtension(v24, v61);
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v28 + 96LL))(*v28, *v4);
        v27 = v62;
      }
      if ( v27 )
        std::_Ref_count_base::_Decref(v27);
      if ( v41[1] )
        std::_Ref_count_base::_Decref(v41[1]);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v48);
      v22 = v48;
    }
    v29 = *((int *)this + 42);
    v51 = v29;
    if ( *((_DWORD *)this + 44) == -1 )
    {
      v49 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)this + 14) - *((_QWORD *)this + 13)) >> 4) - 1;
      v29 = v51;
    }
    else
    {
      v49 = *((int *)this + 44);
    }
    v30 = 0LL;
    v50 = 0LL;
    v31 = *((_QWORD *)this + 13);
    if ( 0xAAAAAAAAAAAAAAABuLL * ((*((_QWORD *)this + 14) - v31) >> 4) )
    {
      v32 = 0LL;
      do
      {
        if ( *(_BYTE *)(v32 + v31)
          && (v30 != v29 || (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)*v4 + 96LL))(*v4, 9LL)) )
        {
          Spectre::Engine::Camera::FlushShaderProperties((__int64 **)this, v30);
          v33 = *((_QWORD *)this + 52);
          if ( v33 != *((_QWORD *)this + 53) )
          {
            v34 = *((_QWORD *)this + 53);
            v35 = v47;
            do
            {
              *(_OWORD *)((char *)this + 520) = *(_OWORD *)((char *)this + 488);
              *(_OWORD *)((char *)this + 504) = *(_OWORD *)((char *)this + 472);
              Spectre::Engine::SceneAttributeFilterGroup::SetAttributeFilter(
                (char *)this + 504,
                *(_QWORD *)(v32 + v31 + 8),
                0LL);
              Spectre::Engine::SceneAttributeFilterGroup::SetAttributeFilter(v36, *(_QWORD *)(v32 + v31 + 16), 1LL);
              v40 = *(_QWORD *)(v32 + v31 + 24);
              *(_OWORD *)v56 = 0LL;
              if ( v52[1] )
              {
                _InterlockedIncrement((volatile signed __int32 *)v52[1] + 2);
                v35 = v57;
              }
              *(_OWORD *)v56 = *(_OWORD *)v52;
              v37 = std::wstring::wstring(v78, v33);
              Spectre::Engine::Scene::Render(v35, (__int64)v37, (__int64)&v43, v56, (_QWORD *)(v32 + v31 + 32), v40);
              if ( v56[1] )
                std::_Ref_count_base::_Decref(v56[1]);
              v33 += 32LL;
            }
            while ( v33 != v34 );
            v47 = v35;
            v4 = v53;
            v30 = v50;
          }
          if ( (*((_BYTE *)this + 440) & 1) != 0 && v49 == v30 )
            Spectre::Engine::Camera::ResolveReadableDepth(this);
        }
        v50 = ++v30;
        v32 += 48LL;
        v31 = *((_QWORD *)this + 13);
        v29 = v51;
      }
      while ( v30 < 0xAAAAAAAAAAAAAAABuLL * ((*((_QWORD *)this + 14) - v31) >> 4) );
      v19 = v58;
      CommandList = v42;
    }
    (*(void (__fastcall **)(Spectre::Engine::Component *))(*(_QWORD *)this + 200LL))(this);
    std::_Tree_val<std::_Tree_simple_types<std::string>>::_Erase_head<std::allocator<std::_Tree_node<std::string,void *>>>(
      v59,
      (__int64)v59);
    if ( v19 )
      std::_Ref_count_base::_Decref(v19);
    if ( v60[1] )
      std::_Ref_count_base::_Decref(v60[1]);
    Spectre::Engine::CpuProfilerScope::~CpuProfilerScope((Spectre::Engine::CpuProfilerScope *)v76);
    Spectre::Engine::GpuProfilerScope::~GpuProfilerScope((Spectre::Engine::GpuProfilerScope *)v75);
    std::string::_Tidy_deallocate((__int64)v81);
    if ( (*((_DWORD *)this + 110) & 0x10000) != 0 )
    {
      std::string::string(&v79, (__int64)"Symbols");
      Spectre::Engine::GpuProfilerScope::GpuProfilerScope(v61, &v43, &v79);
      v38 = (*(__int64 (__fastcall **)(__int64, std::_Ref_count_base **))(*(_QWORD *)v45 + 200LL))(v45, v60);
      Spectre::Engine::CpuProfilerScope::CpuProfilerScope(v71, v38);
      v39 = v60[1];
      if ( v60[1] )
        std::_Ref_count_base::_Decwref(v60[1]);
      Spectre::Engine::Engine::GetSymbolManager(v39);
    }
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v4 + 112LL))(*v4, &v43);
    *(_OWORD *)v41 = 0LL;
    Spectre::Engine::CommandList::SetGpuProfiler(v43, (__int64 *)v41);
    *(_OWORD *)v41 = 0LL;
    Spectre::Engine::CommandList::SetCpuProfiler(v43, (__int64 *)v41);
    *(_OWORD *)v41 = 0LL;
    Spectre::Engine::CommandList::SetGpuProfiler(*CommandList, (__int64 *)v41);
    *(_OWORD *)v41 = 0LL;
    Spectre::Engine::CommandList::SetCpuProfiler(*CommandList, (__int64 *)v41);
    if ( v52[1] )
      std::_Ref_count_base::_Decref(v52[1]);
    if ( v44 )
      std::_Ref_count_base::_Decref(v44);
    if ( v46 )
      std::_Ref_count_base::_Decref(v46);
  }
}

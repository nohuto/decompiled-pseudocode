/*
 * XREFs of ?ProcessScene@ImageProcessingManager@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@_N@Z @ 0x1800735A4
 * Callers:
 *     ?ApplyImageProcessing@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180064B30 (-ApplyImageProcessing@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?0VScene@Engine@Spectre@@$0A@@?$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x180015604 (--$-0VScene@Engine@Spectre@@$0A@@-$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 *     ?GetCommandList@RenderDevice@Engine@Spectre@@QEBAAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@XZ @ 0x180026500 (-GetCommandList@RenderDevice@Engine@Spectre@@QEBAAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@.c)
 *     ?GetTexture@FrameBuffer@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ @ 0x180026A84 (-GetTexture@FrameBuffer@Engine@Spectre@@QEBA-AV-$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ.c)
 *     ?VerifyReadAccess@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A2FC (-VerifyReadAccess@Lockable@Engine@Spectre@@QEBAXXZ.c)
 *     ??0?$weak_ptr@VMaterial@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18002B398 (--0-$weak_ptr@VMaterial@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?SetCpuProfiler@CommandList@Engine@Spectre@@QEAAXV?$weak_ptr@VCpuProfiler@Engine@Spectre@@@std@@@Z @ 0x180039648 (-SetCpuProfiler@CommandList@Engine@Spectre@@QEAAXV-$weak_ptr@VCpuProfiler@Engine@Spectre@@@std@@.c)
 *     ?SetGpuProfiler@CommandList@Engine@Spectre@@QEAAXV?$weak_ptr@VGpuProfiler@Engine@Spectre@@@std@@@Z @ 0x1800396A0 (-SetGpuProfiler@CommandList@Engine@Spectre@@QEAAXV-$weak_ptr@VGpuProfiler@Engine@Spectre@@@std@@.c)
 *     ?SetRenderTarget@CommandList@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@AEBV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@5@@Z @ 0x180039738 (-SetRenderTarget@CommandList@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VFrameBuffer@Engine@Spectre@@.c)
 *     ?GetCommandList@Camera@Engine@Spectre@@QEBA?AV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@@Z @ 0x18005BA04 (-GetCommandList@Camera@Engine@Spectre@@QEBA-AV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@AE.c)
 *     ?ApplyCameraEffects_ResolveOutput@ImageProcessingManager@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@V?$shared_ptr@VTexture@Engine@Spectre@@@5@@Z @ 0x1800724B0 (-ApplyCameraEffects_ResolveOutput@ImageProcessingManager@Engine@Spectre@@QEAAXAEBV-$shared_ptr@V.c)
 *     ?ApplySpecialEffects@ImageProcessingManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@V45@@Z @ 0x1800725CC (-ApplySpecialEffects@ImageProcessingManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VTexture@Engine@.c)
 *     ?ResolveMultisampledInput@ImageProcessingManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@@Z @ 0x1800739CC (-ResolveMultisampledInput@ImageProcessingManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VTexture@En.c)
 *     ??0GpuProfilerScope@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z @ 0x1800A2194 (--0GpuProfilerScope@Engine@Spectre@@QEAA@AEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEB.c)
 *     ??1GpuProfilerScope@Engine@Spectre@@QEAA@XZ @ 0x1800A224C (--1GpuProfilerScope@Engine@Spectre@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall Spectre::Engine::ImageProcessingManager::ProcessScene(_QWORD *a1, _QWORD *a2, char a3)
{
  __int64 v6; // rax
  Spectre::Engine::RenderDevice *v7; // rdi
  _QWORD *CommandList; // rax
  _QWORD *v9; // rax
  void (__fastcall *v10)(__int64, _QWORD *); // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 *v13; // rax
  __int64 *Texture; // rax
  _QWORD *v15; // rbx
  __int64 *v16; // rax
  __int64 *v17; // rax
  __int64 *v18; // rax
  __int64 v19; // r8
  __int64 *v20; // rax
  __int64 v21; // r8
  _QWORD *v22; // rax
  __int64 *v23; // rax
  _QWORD *v24; // rax
  std::_Ref_count_base *v25[2]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v26; // [rsp+40h] [rbp-59h] BYREF
  std::_Ref_count_base *v27; // [rsp+48h] [rbp-51h]
  Spectre::Engine::RenderDevice *v28; // [rsp+50h] [rbp-49h] BYREF
  std::_Ref_count_base *v29; // [rsp+58h] [rbp-41h]
  __int64 v30; // [rsp+60h] [rbp-39h] BYREF
  std::_Ref_count_base *v31; // [rsp+68h] [rbp-31h]
  std::_Ref_count_base *v32[2]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v33; // [rsp+80h] [rbp-19h] BYREF
  std::_Ref_count_base *v34; // [rsp+88h] [rbp-11h]
  __int128 v35; // [rsp+90h] [rbp-9h] BYREF
  _QWORD v36[4]; // [rsp+A0h] [rbp+7h] BYREF

  v6 = (*(__int64 (__fastcall **)(_QWORD, std::_Ref_count_base **))(*(_QWORD *)*a2 + 376LL))(*a2, v25);
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock(v6, &v28);
  if ( v25[1] )
    std::_Ref_count_base::_Decwref(v25[1]);
  Spectre::Engine::Lockable::VerifyReadAccess((Spectre::Engine::Lockable *)(a1[36] + 16LL));
  v7 = v28;
  CommandList = (_QWORD *)Spectre::Engine::RenderDevice::GetCommandList((__int64)v28);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    &v33,
    CommandList);
  v9 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         v25,
         &v28);
  v10(v11, v9);
  *(_OWORD *)v32 = 0LL;
  if ( a1[8] )
  {
    v13 = (__int64 *)Spectre::Engine::ImageProcessingManager::ResolveMultisampledInput(a1, v25, v12, &v28);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v32, v13);
    if ( v25[1] )
      std::_Ref_count_base::_Decref(v25[1]);
    v7 = v28;
  }
  else
  {
    Texture = (__int64 *)Spectre::Engine::FrameBuffer::GetTexture(a1[57], v25);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v32, Texture);
    if ( v25[1] )
      std::_Ref_count_base::_Decref(v25[1]);
  }
  Spectre::Engine::Camera::GetCommandList(a1[34], &v30, (__int64 *)&v28);
  v15 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 184LL))(*a2);
  (*(void (__fastcall **)(_QWORD, std::_Ref_count_base **))(*(_QWORD *)*a2 + 200LL))(*a2, v25);
  v16 = std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(&v26, v15);
  Spectre::Engine::CommandList::SetGpuProfiler(v33, v16);
  v17 = std::weak_ptr<Spectre::Engine::Material>::weak_ptr<Spectre::Engine::Material>(&v26, v25);
  Spectre::Engine::CommandList::SetCpuProfiler(v33, v17);
  v18 = std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(&v26, v15);
  Spectre::Engine::CommandList::SetGpuProfiler(v19, v18);
  v20 = std::weak_ptr<Spectre::Engine::Material>::weak_ptr<Spectre::Engine::Material>(&v26, v25);
  Spectre::Engine::CommandList::SetCpuProfiler(v21, v20);
  if ( v25[1] )
    std::_Ref_count_base::_Decwref(v25[1]);
  (*(void (__fastcall **)(Spectre::Engine::RenderDevice *, __int64 *))(*(_QWORD *)v7 + 104LL))(v7, &v30);
  std::string::string(v36, (__int64)"IPM_ProcessScene");
  Spectre::Engine::GpuProfilerScope::GpuProfilerScope(&v35, &v30, v36);
  std::string::_Tidy_deallocate((__int64)v36);
  if ( a3 )
  {
    v22 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
            v25,
            v32);
    v23 = Spectre::Engine::ImageProcessingManager::ApplySpecialEffects((__int64)a1, &v26, &v28, (__int64)a2, v22);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v32, v23);
    if ( v27 )
      std::_Ref_count_base::_Decref(v27);
    v7 = v28;
  }
  v24 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          v25,
          v32);
  Spectre::Engine::ImageProcessingManager::ApplyCameraEffects_ResolveOutput((__int64)a1, (__int64)a2, (__int64)v24);
  Spectre::Engine::GpuProfilerScope::~GpuProfilerScope((Spectre::Engine::GpuProfilerScope *)&v35);
  (*(void (__fastcall **)(Spectre::Engine::RenderDevice *, __int64 *))(*(_QWORD *)v7 + 112LL))(v7, &v30);
  v35 = 0LL;
  *(_OWORD *)v25 = 0LL;
  Spectre::Engine::CommandList::SetRenderTarget(v33, (__int64)v25, (__int64)&v35);
  *(_OWORD *)v25 = 0LL;
  Spectre::Engine::CommandList::SetGpuProfiler(v33, (__int64 *)v25);
  *(_OWORD *)v25 = 0LL;
  Spectre::Engine::CommandList::SetCpuProfiler(v33, (__int64 *)v25);
  *(_OWORD *)v25 = 0LL;
  Spectre::Engine::CommandList::SetGpuProfiler(v30, (__int64 *)v25);
  *(_OWORD *)v25 = 0LL;
  Spectre::Engine::CommandList::SetCpuProfiler(v30, (__int64 *)v25);
  if ( v31 )
    std::_Ref_count_base::_Decref(v31);
  if ( v32[1] )
    std::_Ref_count_base::_Decref(v32[1]);
  if ( v34 )
    std::_Ref_count_base::_Decref(v34);
  if ( v29 )
    std::_Ref_count_base::_Decref(v29);
}

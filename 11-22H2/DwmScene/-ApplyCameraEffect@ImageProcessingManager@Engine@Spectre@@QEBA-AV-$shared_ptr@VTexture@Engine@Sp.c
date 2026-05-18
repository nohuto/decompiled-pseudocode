/*
 * XREFs of ?ApplyCameraEffect@ImageProcessingManager@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@V?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@5@V45@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x1800721C0
 * Callers:
 *     ?RenderEffects@Camera@Engine@Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005BF40 (-RenderEffects@Camera@Engine@Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?shared_from_this@?$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@2@XZ @ 0x180011D4C (-shared_from_this@-$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr@VSc.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?0VScene@Engine@Spectre@@$0A@@?$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x180015604 (--$-0VScene@Engine@Spectre@@$0A@@-$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 *     ?GetCommandList@RenderDevice@Engine@Spectre@@QEBAAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@XZ @ 0x180026500 (-GetCommandList@RenderDevice@Engine@Spectre@@QEBAAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@.c)
 *     ?VerifyReadAccess@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A2FC (-VerifyReadAccess@Lockable@Engine@Spectre@@QEBAXXZ.c)
 *     ??0?$weak_ptr@VMaterial@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18002B398 (--0-$weak_ptr@VMaterial@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?SetCpuProfiler@CommandList@Engine@Spectre@@QEAAXV?$weak_ptr@VCpuProfiler@Engine@Spectre@@@std@@@Z @ 0x180039648 (-SetCpuProfiler@CommandList@Engine@Spectre@@QEAAXV-$weak_ptr@VCpuProfiler@Engine@Spectre@@@std@@.c)
 *     ?SetGpuProfiler@CommandList@Engine@Spectre@@QEAAXV?$weak_ptr@VGpuProfiler@Engine@Spectre@@@std@@@Z @ 0x1800396A0 (-SetGpuProfiler@CommandList@Engine@Spectre@@QEAAXV-$weak_ptr@VGpuProfiler@Engine@Spectre@@@std@@.c)
 *     ?GetCommandList@Camera@Engine@Spectre@@QEBA?AV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@@Z @ 0x18005BA04 (-GetCommandList@Camera@Engine@Spectre@@QEBA-AV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@AE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Spectre::Engine::ImageProcessingManager::ApplyCameraEffect(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        __int64 a5)
{
  __int64 v9; // rax
  __int64 v10; // rdi
  void (__fastcall *v11)(__int64, __int64); // rbx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  _QWORD *CommandList; // rax
  __int64 v16; // rbx
  __int64 *v17; // rax
  _QWORD *v18; // rbx
  __int64 *v19; // rax
  __int64 v20; // rsi
  __int64 *v21; // rax
  __int64 *v22; // rax
  __int64 v23; // r8
  __int64 *v24; // rax
  __int64 v25; // r8
  std::_Ref_count_base *v26; // rcx
  std::_Ref_count_base *v27; // rcx
  __int64 v29; // [rsp+40h] [rbp-51h] BYREF
  std::_Ref_count_base *v30; // [rsp+48h] [rbp-49h]
  std::_Ref_count_base *v31[2]; // [rsp+50h] [rbp-41h] BYREF
  __int64 v32; // [rsp+60h] [rbp-31h] BYREF
  std::_Ref_count_base *v33; // [rsp+68h] [rbp-29h]
  __int64 v34; // [rsp+70h] [rbp-21h] BYREF
  std::_Ref_count_base *v35; // [rsp+78h] [rbp-19h]
  __int64 v36; // [rsp+80h] [rbp-11h] BYREF
  std::_Ref_count_base *v37; // [rsp+88h] [rbp-9h]
  _QWORD v38[9]; // [rsp+90h] [rbp-1h] BYREF

  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a3 + 376LL))(*a3, &v34);
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock(v9, &v32);
  if ( v35 )
    std::_Ref_count_base::_Decwref(v35);
  v10 = *(_QWORD *)(a1 + 272);
  v11 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 88LL);
  v12 = v32;
  v13 = std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this(v32 + 8, v31);
  v11(v10, v13);
  Spectre::Engine::Lockable::VerifyReadAccess((Spectre::Engine::Lockable *)(*(_QWORD *)(a1 + 288) + 16LL));
  v14 = v12;
  CommandList = (_QWORD *)Spectre::Engine::RenderDevice::GetCommandList(v12);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    &v34,
    CommandList);
  v16 = *(_QWORD *)(a1 + 272);
  v17 = (__int64 *)std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this(v12 + 8, &v36);
  Spectre::Engine::Camera::GetCommandList(v16, &v29, v17);
  if ( v37 )
    std::_Ref_count_base::_Decref(v37);
  v18 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 184LL))(*a3);
  (*(void (__fastcall **)(_QWORD, std::_Ref_count_base **))(*(_QWORD *)*a3 + 200LL))(*a3, v31);
  v19 = std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(v38, v18);
  v20 = v34;
  Spectre::Engine::CommandList::SetGpuProfiler(v34, v19);
  v21 = std::weak_ptr<Spectre::Engine::Material>::weak_ptr<Spectre::Engine::Material>(v38, v31);
  Spectre::Engine::CommandList::SetCpuProfiler(v20, v21);
  v22 = std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(v38, v18);
  Spectre::Engine::CommandList::SetGpuProfiler(v23, v22);
  v24 = std::weak_ptr<Spectre::Engine::Material>::weak_ptr<Spectre::Engine::Material>(v38, v31);
  Spectre::Engine::CommandList::SetCpuProfiler(v25, v24);
  if ( v31[1] )
    std::_Ref_count_base::_Decwref(v31[1]);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 104LL))(v14, &v29);
  (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD *, __int64))(*(_QWORD *)*a4 + 16LL))(*a4, a2, v14, a3, a5);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 112LL))(v14, &v29);
  *(_OWORD *)v31 = 0LL;
  Spectre::Engine::CommandList::SetGpuProfiler(v20, (__int64 *)v31);
  *(_OWORD *)v31 = 0LL;
  Spectre::Engine::CommandList::SetCpuProfiler(v20, (__int64 *)v31);
  *(_OWORD *)v31 = 0LL;
  Spectre::Engine::CommandList::SetGpuProfiler(v29, (__int64 *)v31);
  *(_OWORD *)v31 = 0LL;
  Spectre::Engine::CommandList::SetCpuProfiler(v29, (__int64 *)v31);
  if ( v30 )
    std::_Ref_count_base::_Decref(v30);
  if ( v35 )
    std::_Ref_count_base::_Decref(v35);
  if ( v33 )
    std::_Ref_count_base::_Decref(v33);
  v26 = (std::_Ref_count_base *)a4[1];
  if ( v26 )
    std::_Ref_count_base::_Decref(v26);
  v27 = *(std::_Ref_count_base **)(a5 + 8);
  if ( v27 )
    std::_Ref_count_base::_Decref(v27);
  return a2;
}

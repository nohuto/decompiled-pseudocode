/*
 * XREFs of ?InvokeCallback@Engine@1Spectre@@IEAAXW4ESpectreNativeRenderCallbackType@12@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180034E40
 * Callers:
 *     ??$CreateDevice@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@Engine@0Spectre@@QEAA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@UDeviceDescription@01@UOutputDescription@01@@Z @ 0x180015AE0 (--$CreateDevice@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@Engine@0Spectre@@QEAA-AV-$shared_ptr@V.c)
 *     ??$CreateDevice@VRenderDeviceGeneric@Engine@Spectre@@@Engine@0Spectre@@QEAA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@UDeviceDescription@01@UOutputDescription@01@@Z @ 0x180015C10 (--$CreateDevice@VRenderDeviceGeneric@Engine@Spectre@@@Engine@0Spectre@@QEAA-AV-$shared_ptr@VRend.c)
 *     ?DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180033380 (-DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ?PostRenderScene@Engine@1Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@4@@Z @ 0x180035470 (-PostRenderScene@Engine@1Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV-$share.c)
 *     ?PresentFrame@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@4@AEAV?$unique_lock@VMutex@Engine@Spectre@@@4@22@Z @ 0x18003565C (-PresentFrame@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV-$s.c)
 *     ?RenderContent@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@4@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@4@@Z @ 0x180035E98 (-RenderContent@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV-$vector@.c)
 *     ?UpdateScene@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x1800375F8 (-UpdateScene@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@@Z.c)
 *     ?UpdateScenes@Engine@1Spectre@@MEAAXXZ @ 0x180037A80 (-UpdateScenes@Engine@1Spectre@@MEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetInput@FrameData@Engine@Spectre@@QEBAAEBVInput@23@XZ @ 0x1800743C0 (-GetInput@FrameData@Engine@Spectre@@QEBAAEBVInput@23@XZ.c)
 *     ?GetTimeStep@FrameData@Engine@Spectre@@QEBAMXZ @ 0x1800743CC (-GetTimeStep@FrameData@Engine@Spectre@@QEBAMXZ.c)
 *     ?GetFrameInputData@Input@Engine@Spectre@@QEBAAEBUFrameInputData@23@XZ @ 0x1800745B4 (-GetFrameInputData@Input@Engine@Spectre@@QEBAAEBUFrameInputData@23@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::Engine::InvokeCallback(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  void (__fastcall *v8)(__int64, _QWORD, const struct Spectre::Engine::FrameInputData *); // r14
  _QWORD *v9; // r8
  Spectre::Engine::FrameData *v10; // rcx
  Spectre::Engine::Input *Input; // rax
  const struct Spectre::Engine::FrameInputData *FrameInputData; // rax
  std::_Ref_count_base *v13; // rcx
  std::_Ref_count_base *v14; // rcx
  __int64 v15; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v16[7]; // [rsp+50h] [rbp-38h] BYREF

  v8 = *(void (__fastcall **)(__int64, _QWORD, const struct Spectre::Engine::FrameInputData *))(a1 + 912);
  if ( v8 )
  {
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v15, a4);
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(v16, v9);
    Spectre::Engine::FrameData::GetTimeStep((Spectre::Engine::FrameData *)(a1 + 368));
    Input = Spectre::Engine::FrameData::GetInput(v10);
    FrameInputData = Spectre::Engine::Input::GetFrameInputData(Input);
    v8(a1, a2, FrameInputData);
  }
  v13 = *(std::_Ref_count_base **)(a3 + 8);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  v14 = (std::_Ref_count_base *)a4[1];
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
}

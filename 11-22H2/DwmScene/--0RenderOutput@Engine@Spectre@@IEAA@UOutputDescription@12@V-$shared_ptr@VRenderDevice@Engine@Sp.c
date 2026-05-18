/*
 * XREFs of ??0RenderOutput@Engine@Spectre@@IEAA@UOutputDescription@12@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@5@@Z @ 0x18002B424
 * Callers:
 *     ??0RenderOutputD3D11@D3D11@Engine@Spectre@@IEAA@UOutputDescription@23@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@@Z @ 0x1800C8B40 (--0RenderOutputD3D11@D3D11@Engine@Spectre@@IEAA@UOutputDescription@23@V-$shared_ptr@VRenderDevic.c)
 *     ??0RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@QEAA@UOutputDescription@34@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@7@@Z @ 0x1800D8C34 (--0RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@QEAA@UOutputDescription@34@V-$.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?0VScene@Engine@Spectre@@$0A@@?$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x180015604 (--$-0VScene@Engine@Spectre@@$0A@@-$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 *     ??$make_shared@VGpuProfiler@Engine@Spectre@@AEAVRenderDevice@23@@std@@YA?AV?$shared_ptr@VGpuProfiler@Engine@Spectre@@@0@AEAVRenderDevice@Engine@Spectre@@@Z @ 0x18002B124 (--$make_shared@VGpuProfiler@Engine@Spectre@@AEAVRenderDevice@23@@std@@YA-AV-$shared_ptr@VGpuProf.c)
 *     ??$make_shared@VGpuProfilingGrapher@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VGpuProfilingGrapher@Engine@Spectre@@@0@XZ @ 0x18002B1A8 (--$make_shared@VGpuProfilingGrapher@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VGpuProfilingGrap.c)
 *     ??$make_shared@VImageProcessingManager@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VImageProcessingManager@Engine@Spectre@@@0@XZ @ 0x18002B21C (--$make_shared@VImageProcessingManager@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VImageProcessi.c)
 *     ??$make_unique@VGpuProfileStatsRenderer@Engine@Spectre@@$$V$0A@@std@@YA?AV?$unique_ptr@VGpuProfileStatsRenderer@Engine@Spectre@@U?$default_delete@VGpuProfileStatsRenderer@Engine@Spectre@@@std@@@0@XZ @ 0x18002B290 (--$make_unique@VGpuProfileStatsRenderer@Engine@Spectre@@$$V$0A@@std@@YA-AV-$unique_ptr@VGpuProfi.c)
 *     ??0IRenderOutput@Engine@Spectre@@IEAA@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18002B3C4 (--0IRenderOutput@Engine@Spectre@@IEAA@V-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ?SetFormat@RenderOutput@Engine@Spectre@@UEAAXW4BufferStage@IRenderOutput@23@W4Format@23@@Z @ 0x18002CA00 (-SetFormat@RenderOutput@Engine@Spectre@@UEAAXW4BufferStage@IRenderOutput@23@W4Format@23@@Z.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall Spectre::Engine::RenderOutput::RenderOutput(
        __int64 a1,
        __int64 a2,
        struct Spectre::Engine::RenderDevice **a3,
        __int64 *a4)
{
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 *v10; // rcx
  char v11; // bl
  std::_Ref_count_base *v12; // rcx
  std::_Ref_count_base *v13; // rcx
  char v15; // [rsp+20h] [rbp-58h] BYREF
  std::_Ref_count_base *v16; // [rsp+28h] [rbp-50h]
  __int64 v17; // [rsp+30h] [rbp-48h] BYREF
  std::_Ref_count_base *v18; // [rsp+38h] [rbp-40h]

  v8 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v17,
         a3);
  Spectre::Engine::IRenderOutput::IRenderOutput((_QWORD *)a1, v8);
  *(_QWORD *)a1 = &Spectre::Engine::RenderOutput::`vftable';
  std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>((_QWORD *)(a1 + 80), a3);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_BYTE *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 164) = 0LL;
  *(_QWORD *)(a1 + 172) = 0LL;
  *(_QWORD *)(a1 + 180) = 0LL;
  *(_DWORD *)(a1 + 188) = 0;
  *(_DWORD *)(a1 + 192) = 1065353216;
  *(_DWORD *)(a1 + 196) = 1065353216;
  *(_DWORD *)(a1 + 200) = 3;
  std::make_shared<Spectre::Engine::ImageProcessingManager,>((_QWORD *)(a1 + 208));
  *(_WORD *)(a1 + 236) = 256;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_DWORD *)(a1 + 296) = 2;
  _Mtx_init_in_situ((_Mtx_t)(a1 + 304), 2);
  if ( *(_DWORD *)(a2 + 24) == 1 )
  {
    v9 = *a4;
    v18 = (std::_Ref_count_base *)a4[1];
    *a4 = 0LL;
    a4[1] = 0LL;
    v10 = &v17;
    v11 = 1;
  }
  else
  {
    v16 = 0LL;
    v10 = (__int64 *)&v15;
    v11 = 2;
    v9 = 0LL;
  }
  *(_QWORD *)(a1 + 384) = v9;
  *(_QWORD *)(a1 + 392) = v10[1];
  *v10 = 0LL;
  v10[1] = 0LL;
  if ( (v11 & 2) != 0 )
  {
    v11 &= ~2u;
    if ( v16 )
      std::_Ref_count_base::_Decref(v16);
  }
  if ( (v11 & 1) != 0 && v18 )
    std::_Ref_count_base::_Decref(v18);
  *(_BYTE *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 408) = 1LL;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  std::make_shared<Spectre::Engine::GpuProfiler,Spectre::Engine::RenderDevice &>((_QWORD *)(a1 + 440), *a3);
  std::make_shared<Spectre::Engine::GpuProfilingGrapher,>((_QWORD *)(a1 + 456));
  std::make_unique<Spectre::Engine::GpuProfileStatsRenderer,,0>((__int64 *)(a1 + 472));
  *(_QWORD *)(a1 + 480) = 1LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 272) = 0x8000000000000000uLL;
  *(_QWORD *)(a1 + 280) = 0x8000000000000000uLL;
  *(_QWORD *)(a1 + 288) = 0LL;
  Spectre::Engine::RenderOutput::SetFormat(a1, 0LL, 21LL);
  Spectre::Engine::RenderOutput::SetFormat(a1, 1LL, 21LL);
  Spectre::Engine::RenderOutput::SetFormat(a1, 2LL, 16LL);
  v12 = a3[1];
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  v13 = (std::_Ref_count_base *)a4[1];
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  return a1;
}

/*
 * XREFs of ?AddDependentLock@Lockable@Engine@Spectre@@SAXV?$shared_ptr@VLockable@Engine@Spectre@@@std@@V?$weak_ptr@VLockable@Engine@Spectre@@@5@@Z @ 0x180029F64
 * Callers:
 *     ??$CreateOutput@VRenderOutputDwm@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@3@AEBKAEBKAEBKAEBM@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VRenderOutputDwm@@@std@@UOutputDescription@12@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@$$QEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@4@AEBK33AEBM@Z @ 0x180015D28 (--$CreateOutput@VRenderOutputDwm@@AEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V-$shared.c)
 *     ?Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z @ 0x180072750 (-Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z.c)
 *     ??$CreateOutput@VRenderOutputD3D11CoreWindow@D3D11@Engine@Spectre@@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VRenderOutputD3D11CoreWindow@D3D11@Engine@Spectre@@@std@@UOutputDescription@12@$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@4@@Z @ 0x1800C3040 (--$CreateOutput@VRenderOutputD3D11CoreWindow@D3D11@Engine@Spectre@@V-$shared_ptr@VRenderDevice@E.c)
 *     ??$CreateOutput@VRenderOutputD3D11Gdi@D3D11@Engine@Spectre@@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VRenderOutputD3D11Gdi@D3D11@Engine@Spectre@@@std@@UOutputDescription@12@$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@4@@Z @ 0x1800C31E8 (--$CreateOutput@VRenderOutputD3D11Gdi@D3D11@Engine@Spectre@@V-$shared_ptr@VRenderDevice@Engine@S.c)
 *     ??$CreateOutput@VRenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@7@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VRenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@@std@@UOutputDescription@12@$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@4@@Z @ 0x1800C3390 (--$CreateOutput@VRenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@V-$shared_ptr@VR.c)
 *     ??$CreateOutput@VRenderOutputD3D11Window@D3D11@Engine@Spectre@@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VRenderOutputD3D11Window@D3D11@Engine@Spectre@@@std@@UOutputDescription@12@$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@4@@Z @ 0x1800C3538 (--$CreateOutput@VRenderOutputD3D11Window@D3D11@Engine@Spectre@@V-$shared_ptr@VRenderDevice@Engin.c)
 *     ??$CreateOutput@VRenderOutputD3D11Xaml@D3D11@Engine@Spectre@@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VRenderOutputD3D11Xaml@D3D11@Engine@Spectre@@@std@@UOutputDescription@12@$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@4@@Z @ 0x1800C36E0 (--$CreateOutput@VRenderOutputD3D11Xaml@D3D11@Engine@Spectre@@V-$shared_ptr@VRenderDevice@Engine@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall Spectre::Engine::Lockable::AddDependentLock(__int64 a1, __int64 a2)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v4; // rcx

  v2 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v4 = *(std::_Ref_count_base **)(a2 + 8);
  if ( v4 )
    std::_Ref_count_base::_Decwref(v4);
}

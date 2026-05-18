/*
 * XREFs of ?VerifyExclusiveLock@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A2F0
 * Callers:
 *     ??$CreateOutput@VRenderOutputDwm@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@3@AEBKAEBKAEBKAEBM@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VRenderOutputDwm@@@std@@UOutputDescription@12@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@$$QEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@4@AEBK33AEBM@Z @ 0x180015D28 (--$CreateOutput@VRenderOutputDwm@@AEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V-$shared.c)
 *     ?GetOutput@RenderDevice@Engine@Spectre@@QEBA?AV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@I@Z @ 0x180026618 (-GetOutput@RenderDevice@Engine@Spectre@@QEBA-AV-$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@.c)
 *     ?GetOutputCount@RenderDevice@Engine@Spectre@@QEBAIXZ @ 0x18002666C (-GetOutputCount@RenderDevice@Engine@Spectre@@QEBAIXZ.c)
 *     ?FrameTick@Engine@1Spectre@@UEAAXAEAV?$unique_lock@VMutex@Engine@Spectre@@@std@@@Z @ 0x180033C20 (-FrameTick@Engine@1Spectre@@UEAAXAEAV-$unique_lock@VMutex@Engine@Spectre@@@std@@@Z.c)
 *     ??$CreateOutput@VRenderOutputD3D11CoreWindow@D3D11@Engine@Spectre@@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VRenderOutputD3D11CoreWindow@D3D11@Engine@Spectre@@@std@@UOutputDescription@12@$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@4@@Z @ 0x1800C3040 (--$CreateOutput@VRenderOutputD3D11CoreWindow@D3D11@Engine@Spectre@@V-$shared_ptr@VRenderDevice@E.c)
 *     ??$CreateOutput@VRenderOutputD3D11Gdi@D3D11@Engine@Spectre@@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VRenderOutputD3D11Gdi@D3D11@Engine@Spectre@@@std@@UOutputDescription@12@$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@4@@Z @ 0x1800C31E8 (--$CreateOutput@VRenderOutputD3D11Gdi@D3D11@Engine@Spectre@@V-$shared_ptr@VRenderDevice@Engine@S.c)
 *     ??$CreateOutput@VRenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@7@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VRenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@@std@@UOutputDescription@12@$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@4@@Z @ 0x1800C3390 (--$CreateOutput@VRenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@V-$shared_ptr@VR.c)
 *     ??$CreateOutput@VRenderOutputD3D11Window@D3D11@Engine@Spectre@@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VRenderOutputD3D11Window@D3D11@Engine@Spectre@@@std@@UOutputDescription@12@$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@4@@Z @ 0x1800C3538 (--$CreateOutput@VRenderOutputD3D11Window@D3D11@Engine@Spectre@@V-$shared_ptr@VRenderDevice@Engin.c)
 *     ??$CreateOutput@VRenderOutputD3D11Xaml@D3D11@Engine@Spectre@@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VRenderOutputD3D11Xaml@D3D11@Engine@Spectre@@@std@@UOutputDescription@12@$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@4@@Z @ 0x1800C36E0 (--$CreateOutput@VRenderOutputD3D11Xaml@D3D11@Engine@Spectre@@V-$shared_ptr@VRenderDevice@Engine@.c)
 *     ?PresentFrame@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@AEAV?$unique_lock@VMutex@Engine@Spectre@@@6@11@Z @ 0x1800C6AA0 (-PresentFrame@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VIRenderOutput@Engin.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall Spectre::Engine::Lockable::VerifyExclusiveLock(Spectre::Engine::Lockable *this)
{
  Spectre::Engine::Lockable::VerifyWriteAccess(this);
}

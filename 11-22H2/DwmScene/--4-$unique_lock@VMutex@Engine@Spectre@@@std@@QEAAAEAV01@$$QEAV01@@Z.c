/*
 * XREFs of ??4?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180017C90
 * Callers:
 *     ??$CreateOutput@VRenderOutputDwm@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@3@AEBKAEBKAEBKAEBM@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VRenderOutputDwm@@@std@@UOutputDescription@12@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@$$QEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@4@AEBK33AEBM@Z @ 0x180015D28 (--$CreateOutput@VRenderOutputDwm@@AEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V-$shared.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?RenderInternal@Display@Engine@Spectre@@AEAAXXZ @ 0x180057BA4 (-RenderInternal@Display@Engine@Spectre@@AEAAXXZ.c)
 *     ??$CreateOutput@VRenderOutputD3D11CoreWindow@D3D11@Engine@Spectre@@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VRenderOutputD3D11CoreWindow@D3D11@Engine@Spectre@@@std@@UOutputDescription@12@$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@4@@Z @ 0x1800C3040 (--$CreateOutput@VRenderOutputD3D11CoreWindow@D3D11@Engine@Spectre@@V-$shared_ptr@VRenderDevice@E.c)
 *     ??$CreateOutput@VRenderOutputD3D11Gdi@D3D11@Engine@Spectre@@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VRenderOutputD3D11Gdi@D3D11@Engine@Spectre@@@std@@UOutputDescription@12@$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@4@@Z @ 0x1800C31E8 (--$CreateOutput@VRenderOutputD3D11Gdi@D3D11@Engine@Spectre@@V-$shared_ptr@VRenderDevice@Engine@S.c)
 *     ??$CreateOutput@VRenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@7@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VRenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@@std@@UOutputDescription@12@$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@4@@Z @ 0x1800C3390 (--$CreateOutput@VRenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@V-$shared_ptr@VR.c)
 *     ??$CreateOutput@VRenderOutputD3D11Window@D3D11@Engine@Spectre@@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VRenderOutputD3D11Window@D3D11@Engine@Spectre@@@std@@UOutputDescription@12@$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@4@@Z @ 0x1800C3538 (--$CreateOutput@VRenderOutputD3D11Window@D3D11@Engine@Spectre@@V-$shared_ptr@VRenderDevice@Engin.c)
 *     ??$CreateOutput@VRenderOutputD3D11Xaml@D3D11@Engine@Spectre@@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VRenderOutputD3D11Xaml@D3D11@Engine@Spectre@@@std@@UOutputDescription@12@$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@4@@Z @ 0x1800C36E0 (--$CreateOutput@VRenderOutputD3D11Xaml@D3D11@Engine@Spectre@@V-$shared_ptr@VRenderDevice@Engine@.c)
 * Callees:
 *     ?unlock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A5AC (-unlock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 */

__int64 __fastcall std::unique_lock<Spectre::Engine::Mutex>::operator=(__int64 a1, __int64 a2)
{
  if ( a1 != a2 )
  {
    if ( *(_BYTE *)(a1 + 8) )
      Spectre::Engine::Mutex::unlock(*(Spectre::Engine::Mutex **)a1);
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_BYTE *)(a1 + 8) = *(_BYTE *)(a2 + 8);
    *(_QWORD *)a2 = 0LL;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a1;
}

/*
 * XREFs of ??$GetDurationMilliseconds@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Engine@Spectre@@YAMV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z @ 0x180024B40
 * Callers:
 *     ?BeginFrame@RenderDevice@Engine@Spectre@@UEAAXXZ @ 0x180025F80 (-BeginFrame@RenderDevice@Engine@Spectre@@UEAAXXZ.c)
 *     ?InitializeRenderer@RenderDevice@Engine@Spectre@@MEAAXXZ @ 0x180026C70 (-InitializeRenderer@RenderDevice@Engine@Spectre@@MEAAXXZ.c)
 *     ?NotifyAttachComplete@RenderDevice@Engine@Spectre@@IEAAXXZ @ 0x180026D6C (-NotifyAttachComplete@RenderDevice@Engine@Spectre@@IEAAXXZ.c)
 *     ?OnPresentFrameComplete@RenderDevice@Engine@Spectre@@MEAAXXZ @ 0x180026DD0 (-OnPresentFrameComplete@RenderDevice@Engine@Spectre@@MEAAXXZ.c)
 *     ?SendShutdownOrSuspendTelemetry@Engine@1Spectre@@IEAAX_N@Z @ 0x180036A54 (-SendShutdownOrSuspendTelemetry@Engine@1Spectre@@IEAAX_N@Z.c)
 *     ?UpdateFrameTime@Engine@1Spectre@@IEAAXXZ @ 0x180036FD0 (-UpdateFrameTime@Engine@1Spectre@@IEAAXXZ.c)
 *     ?UpdatePerformanceStats@Engine@1Spectre@@IEAAXXZ @ 0x1800374F8 (-UpdatePerformanceStats@Engine@1Spectre@@IEAAXXZ.c)
 *     ?RegisterCallbackTime@CpuProfiler@Engine@Spectre@@QEAAXAEBVScopedCallbackPerformanceTimer@123@@Z @ 0x1800A03D0 (-RegisterCallbackTime@CpuProfiler@Engine@Spectre@@QEAAXAEBVScopedCallbackPerformanceTimer@123@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall Spectre::Engine::GetDurationMilliseconds<std::chrono::duration<__int64,std::ratio<1,1000000000>>>(
        int a1)
{
  return (float)a1 / 1000000.0;
}

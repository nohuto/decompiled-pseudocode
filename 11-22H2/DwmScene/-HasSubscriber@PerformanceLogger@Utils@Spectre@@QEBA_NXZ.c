/*
 * XREFs of ?HasSubscriber@PerformanceLogger@Utils@Spectre@@QEBA_NXZ @ 0x18002034C
 * Callers:
 *     ?UpdateGpuProfiler@RenderOutput@Engine@Spectre@@UEAAXH@Z @ 0x18002CDC0 (-UpdateGpuProfiler@RenderOutput@Engine@Spectre@@UEAAXH@Z.c)
 *     ?LogInstanceCounts@Engine@1Spectre@@AEBAXXZ @ 0x180034F18 (-LogInstanceCounts@Engine@1Spectre@@AEBAXXZ.c)
 *     ?InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C5CA0 (-InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Utils::PerformanceLogger::HasSubscriber(Spectre::Utils::PerformanceLogger *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
}

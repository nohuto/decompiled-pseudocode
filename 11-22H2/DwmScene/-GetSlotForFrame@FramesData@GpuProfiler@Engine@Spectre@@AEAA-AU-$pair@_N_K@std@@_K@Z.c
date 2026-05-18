/*
 * XREFs of ?GetSlotForFrame@FramesData@GpuProfiler@Engine@Spectre@@AEAA?AU?$pair@_N_K@std@@_K@Z @ 0x1800A13E4
 * Callers:
 *     ?BeginFrame@FramesData@GpuProfiler@Engine@Spectre@@QEAA_NV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K@Z @ 0x1800A0E14 (-BeginFrame@FramesData@GpuProfiler@Engine@Spectre@@QEAA_NV-$shared_ptr@VCommandList@Engine@Spect.c)
 *     ?BeginTimeSpanMarker@FramesData@GpuProfiler@Engine@Spectre@@QEAA?AV?$weak_ptr@VITimeSpanMarker@GpuProfilerFrame@Engine@Spectre@@@std@@_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@6@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@6@@Z @ 0x1800A0F9C (-BeginTimeSpanMarker@FramesData@GpuProfiler@Engine@Spectre@@QEAA-AV-$weak_ptr@VITimeSpanMarker@G.c)
 *     ?EndFrame@FramesData@GpuProfiler@Engine@Spectre@@QEAA_N_K@Z @ 0x1800A11C8 (-EndFrame@FramesData@GpuProfiler@Engine@Spectre@@QEAA_N_K@Z.c)
 *     ?GetResultForFrame@FramesData@GpuProfiler@Engine@Spectre@@QEAA?AW4FrameQueryResult@234@_KAEAUResult@GpuProfilerFrame@34@@Z @ 0x1800A128C (-GetResultForFrame@FramesData@GpuProfiler@Engine@Spectre@@QEAA-AW4FrameQueryResult@234@_KAEAURes.c)
 *     ?PresentFrame@FramesData@GpuProfiler@Engine@Spectre@@QEAA_N_K@Z @ 0x1800A1430 (-PresentFrame@FramesData@GpuProfiler@Engine@Spectre@@QEAA_N_K@Z.c)
 *     ?StampMarker@FramesData@GpuProfiler@Engine@Spectre@@QEAA_N_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@6@@Z @ 0x1800A1500 (-StampMarker@FramesData@GpuProfiler@Engine@Spectre@@QEAA_N_KAEBV-$basic_string@DU-$char_traits@D.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::GpuProfiler::FramesData::GetSlotForFrame(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r9
  _QWORD *v4; // rcx
  _QWORD *v5; // rax

  v3 = (_QWORD *)(a1 + 184);
  v4 = (_QWORD *)(a1 + 144);
  if ( v4 == v3 )
  {
LABEL_5:
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_BYTE *)a2 = 0;
  }
  else
  {
    v5 = v4;
    while ( *v5 != a3 )
    {
      if ( ++v5 == v3 )
        goto LABEL_5;
    }
    *(_BYTE *)a2 = 1;
    *(_QWORD *)(a2 + 8) = (unsigned int)(v5 - v4);
  }
  return a2;
}

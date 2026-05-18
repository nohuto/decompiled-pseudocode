/*
 * XREFs of ?BeginTimeSpanMarker@GpuProfiler@Engine@Spectre@@QEAA?AV?$weak_ptr@VITimeSpanMarker@GpuProfilerFrame@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@5@@Z @ 0x1800A10AC
 * Callers:
 *     ?Render@MeshInstance@Engine@Spectre@@UEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18004C400 (-Render@MeshInstance@Engine@Spectre@@UEBAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K.c)
 *     ??0GpuProfilerScope@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z @ 0x1800A2194 (--0GpuProfilerScope@Engine@Spectre@@QEAA@AEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEB.c)
 * Callees:
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NXZ @ 0x180042CE8 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NXZ.c)
 *     ??B?$atomic@_N@std@@QEBA_NXZ @ 0x1800573E0 (--B-$atomic@_N@std@@QEBA_NXZ.c)
 *     ?BeginTimeSpanMarker@FramesData@GpuProfiler@Engine@Spectre@@QEAA?AV?$weak_ptr@VITimeSpanMarker@GpuProfilerFrame@Engine@Spectre@@@std@@_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@6@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@6@@Z @ 0x1800A0F9C (-BeginTimeSpanMarker@FramesData@GpuProfiler@Engine@Spectre@@QEAA-AV-$weak_ptr@VITimeSpanMarker@G.c)
 */

__int64 *__fastcall Spectre::Engine::GpuProfiler::BeginTimeSpanMarker(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r10
  __int64 v5; // r8
  _QWORD *v6; // r9
  __int64 *v7; // r10

  if ( !std::_Atomic_storage<bool,1>::load(a1 + 184) || std::atomic<bool>::operator bool(v4 + 185) )
  {
    *a2 = v3;
    a2[1] = v3;
  }
  else
  {
    Spectre::Engine::GpuProfiler::FramesData::BeginTimeSpanMarker((Spectre::Engine::Mutex *)v7, a2, v7[24], v5, v6);
  }
  return a2;
}

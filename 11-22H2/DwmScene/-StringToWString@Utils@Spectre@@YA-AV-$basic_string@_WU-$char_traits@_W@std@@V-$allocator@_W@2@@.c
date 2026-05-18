/*
 * XREFs of ?StringToWString@Utils@Spectre@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z @ 0x18001F208
 * Callers:
 *     ?BeginTimeSpanMarker@GpuProfilerFrame@Engine@Spectre@@QEAAAEAVITimeSpanMarker@123@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VCommandList@Engine@Spectre@@@6@@Z @ 0x1800A2B30 (-BeginTimeSpanMarker@GpuProfilerFrame@Engine@Spectre@@QEAAAEAVITimeSpanMarker@123@V-$basic_strin.c)
 * Callees:
 *     ?StringToWString@Utils@Spectre@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEBD_K@Z @ 0x18001F234 (-StringToWString@Utils@Spectre@@YA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$all_ea_18001F234.c)
 */

__int64 __fastcall Spectre::Utils::StringToWString(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8

  v3 = a2[2];
  if ( a2[3] >= 0x10uLL )
    a2 = (_QWORD *)*a2;
  Spectre::Utils::StringToWString(a1, a2, v3);
  return a1;
}

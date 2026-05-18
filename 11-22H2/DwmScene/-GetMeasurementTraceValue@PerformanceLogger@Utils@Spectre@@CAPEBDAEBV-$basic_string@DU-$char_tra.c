/*
 * XREFs of ?GetMeasurementTraceValue@PerformanceLogger@Utils@Spectre@@CAPEBDAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180020334
 * Callers:
 *     ??$AddMeasurement@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@PerformanceLogger@Utils@Spectre@@QEBAXPEBDH00V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800C2E24 (--$AddMeasurement@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@PerformanceLogg.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Spectre::Utils::PerformanceLogger::GetMeasurementTraceValue(_QWORD *a1)
{
  if ( a1[3] >= 0x10uLL )
    return (_QWORD *)*a1;
  return a1;
}

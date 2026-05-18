/*
 * XREFs of ?AddDataPoint@ProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@QEAAXM@Z @ 0x180032820
 * Callers:
 *     ?UpdateGPUPerformanceStats@Engine@1Spectre@@IEAAXV?$weak_ptr@$$CBVIRenderOutput@Engine@Spectre@@@std@@@Z @ 0x18003725C (-UpdateGPUPerformanceStats@Engine@1Spectre@@IEAAXV-$weak_ptr@$$CBVIRenderOutput@Engine@Spectre@@.c)
 *     ?UpdatePerformanceStats@Engine@1Spectre@@IEAAXXZ @ 0x1800374F8 (-UpdatePerformanceStats@Engine@1Spectre@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Utils::TelemetryTraceLogger::ProfileDataBase::AddDataPoint(
        Spectre::Utils::TelemetryTraceLogger::ProfileDataBase *this,
        float a2)
{
  float v2; // xmm0_4
  float v3; // xmm0_4
  float v4; // xmm1_4

  if ( a2 > 0.0 )
  {
    v2 = *(float *)this;
    if ( a2 > *(float *)this )
      v2 = a2;
    *(float *)this = v2;
    v3 = *((float *)this + 1);
    if ( v3 > a2 )
      v3 = a2;
    *((float *)this + 1) = v3;
    v4 = a2 + *((float *)this + 2);
    ++*((_QWORD *)this + 2);
    *((float *)this + 2) = v4;
  }
}

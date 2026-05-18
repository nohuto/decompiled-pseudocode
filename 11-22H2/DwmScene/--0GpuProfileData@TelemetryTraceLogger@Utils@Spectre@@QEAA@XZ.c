/*
 * XREFs of ??0GpuProfileData@TelemetryTraceLogger@Utils@Spectre@@QEAA@XZ @ 0x1800314DC
 * Callers:
 *     ??0Engine@0Spectre@@IEAA@W4ThreadingMode@Lockable@01@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@V?$shared_ptr@VITelemetryManager@Utils@Spectre@@@5@V?$shared_ptr@VITelemetryTraceLogger@Utils@Spectre@@@5@@Z @ 0x180030FC8 (--0Engine@0Spectre@@IEAA@W4ThreadingMode@Lockable@01@V-$shared_ptr@VPerformanceLogger@Utils@Spec.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0?$map@IT_LARGE_INTEGER@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@@3@@std@@QEAA@XZ @ 0x180030E6C (--0-$map@IT_LARGE_INTEGER@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIT_LARGE_INTEGER@@@std@@@3@@s.c)
 */

// Hidden C++ exception states: #wind=1
Spectre::Utils::TelemetryTraceLogger::GpuProfileData *__fastcall Spectre::Utils::TelemetryTraceLogger::GpuProfileData::GpuProfileData(
        Spectre::Utils::TelemetryTraceLogger::GpuProfileData *this)
{
  _QWORD *v2; // rax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  v2 = operator new(0x60uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *(_QWORD *)this = v2;
  std::map<unsigned int,_LARGE_INTEGER>::map<unsigned int,_LARGE_INTEGER>((_QWORD *)this + 2);
  return this;
}

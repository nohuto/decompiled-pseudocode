/*
 * XREFs of ??0FrameData@Engine@Spectre@@QEAA@XZ @ 0x180074370
 * Callers:
 *     ??0Engine@0Spectre@@IEAA@W4ThreadingMode@Lockable@01@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@V?$shared_ptr@VITelemetryManager@Utils@Spectre@@@5@V?$shared_ptr@VITelemetryTraceLogger@Utils@Spectre@@@5@@Z @ 0x180030FC8 (--0Engine@0Spectre@@IEAA@W4ThreadingMode@Lockable@01@V-$shared_ptr@VPerformanceLogger@Utils@Spec.c)
 * Callees:
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ??0Input@Engine@Spectre@@QEAA@XZ @ 0x18003152C (--0Input@Engine@Spectre@@QEAA@XZ.c)
 */

Spectre::Engine::FrameData *__fastcall Spectre::Engine::FrameData::FrameData(Spectre::Engine::FrameData *this)
{
  *(_DWORD *)this = 0;
  memset_0((char *)this + 8, 0, 0x58uLL);
  Spectre::Engine::Input::Input((Spectre::Engine::FrameData *)((char *)this + 8));
  return this;
}

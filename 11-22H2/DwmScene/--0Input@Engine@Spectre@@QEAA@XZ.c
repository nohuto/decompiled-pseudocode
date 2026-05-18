/*
 * XREFs of ??0Input@Engine@Spectre@@QEAA@XZ @ 0x18003152C
 * Callers:
 *     ??0Engine@0Spectre@@IEAA@W4ThreadingMode@Lockable@01@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@V?$shared_ptr@VITelemetryManager@Utils@Spectre@@@5@V?$shared_ptr@VITelemetryTraceLogger@Utils@Spectre@@@5@@Z @ 0x180030FC8 (--0Engine@0Spectre@@IEAA@W4ThreadingMode@Lockable@01@V-$shared_ptr@VPerformanceLogger@Utils@Spec.c)
 *     ??0FrameData@Engine@Spectre@@QEAA@XZ @ 0x180074370 (--0FrameData@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     ??0SpinLock@Engine@Spectre@@QEAA@XZ @ 0x1800315CC (--0SpinLock@Engine@Spectre@@QEAA@XZ.c)
 */

_QWORD *__fastcall Spectre::Engine::Input::Input(Spectre::Engine::Input *this)
{
  _QWORD *v1; // r10
  __int64 v2; // r11
  _QWORD *result; // rax

  *(_DWORD *)this = -1082130432;
  *((_DWORD *)this + 1) = -1082130432;
  *((_QWORD *)this + 1) = 2LL;
  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)((char *)this + 28) = 2LL;
  *((_DWORD *)this + 5) = -1082130432;
  *((_DWORD *)this + 6) = -1082130432;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 2;
  Spectre::Engine::SpinLock::SpinLock((Spectre::Engine::Input *)((char *)this + 48));
  v1[7] = v2;
  result = v1;
  v1[8] = v2;
  v1[9] = v2;
  v1[10] = v2;
  return result;
}

/*
 * XREFs of ??0EngineDescription@Engine@Spectre@@QEAA@XZ @ 0x18003145C
 * Callers:
 *     ??0Engine@0Spectre@@IEAA@W4ThreadingMode@Lockable@01@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@V?$shared_ptr@VITelemetryManager@Utils@Spectre@@@5@V?$shared_ptr@VITelemetryTraceLogger@Utils@Spectre@@@5@@Z @ 0x180030FC8 (--0Engine@0Spectre@@IEAA@W4ThreadingMode@Lockable@01@V-$shared_ptr@VPerformanceLogger@Utils@Spec.c)
 *     ?UpgradeOptionsToDescription@Engine@Spectre@@YA?AUEngineDescription@12@USpectreNativeRendererCreateOptions@@@Z @ 0x180037DDC (-UpgradeOptionsToDescription@Engine@Spectre@@YA-AUEngineDescription@12@USpectreNativeRendererCre.c)
 * Callees:
 *     <none>
 */

Spectre::Engine::EngineDescription *__fastcall Spectre::Engine::EngineDescription::EngineDescription(
        Spectre::Engine::EngineDescription *this)
{
  Spectre::Engine::EngineDescription *result; // rax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)((char *)this + 20) = 1LL;
  *((_BYTE *)this + 28) = 1;
  *((_DWORD *)this + 8) = 1;
  *((_DWORD *)this + 10) = 1;
  *((_QWORD *)this + 10) = 1LL;
  result = this;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_BYTE *)this + 64) = 0;
  *((_DWORD *)this + 17) = 40960;
  *((_QWORD *)this + 9) = 45312LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 34) = 3;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 0;
  return result;
}

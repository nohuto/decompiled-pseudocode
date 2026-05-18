/*
 * XREFs of ??1?$unique_ptr@VImpl@TelemetryTraceUid@Utils@Spectre@@U?$default_delete@VImpl@TelemetryTraceUid@Utils@Spectre@@@std@@@std@@QEAA@XZ @ 0x180021CF8
 * Callers:
 *     ??1?$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEAA@XZ @ 0x180021CEC (--1-$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<Spectre::Utils::TelemetryTraceUid::Impl>::~unique_ptr<Spectre::Utils::TelemetryTraceUid::Impl>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}

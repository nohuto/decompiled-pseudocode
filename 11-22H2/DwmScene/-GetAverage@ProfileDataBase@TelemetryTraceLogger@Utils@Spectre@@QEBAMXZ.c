/*
 * XREFs of ?GetAverage@ProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@QEBAMXZ @ 0x180022C00
 * Callers:
 *     ?PerformanceUpdateSummary@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXMMMMIII_J00000PEB_W_KII2AEBUCpuProfileData@TelemetryTraceLogger@23@AEBUGpuProfileData@523@@Z @ 0x1800237B0 (-PerformanceUpdateSummary@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXMMMMIII_J00000PEB_W_KII2AE.c)
 * Callees:
 *     <none>
 */

float __fastcall Spectre::Utils::TelemetryTraceLogger::ProfileDataBase::GetAverage(
        Spectre::Utils::TelemetryTraceLogger::ProfileDataBase *this)
{
  __int64 v1; // rdx
  float v2; // xmm1_4
  __int64 v3; // rax

  v1 = *((_QWORD *)this + 2);
  if ( !v1 )
    return 0.0;
  if ( v1 < 0 )
  {
    v3 = *((_QWORD *)this + 2) & 1LL | (*((_QWORD *)this + 2) >> 1);
    v2 = (float)(int)v3 + (float)(int)v3;
  }
  else
  {
    v2 = (float)(int)v1;
  }
  return *((float *)this + 2) / v2;
}

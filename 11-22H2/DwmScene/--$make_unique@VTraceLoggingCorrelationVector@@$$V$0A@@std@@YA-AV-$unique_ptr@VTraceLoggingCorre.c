/*
 * XREFs of ??$make_unique@VTraceLoggingCorrelationVector@@$$V$0A@@std@@YA?AV?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@0@XZ @ 0x180021910
 * Callers:
 *     ??0TelemetryTraceLoggerWin@Utils@Spectre@@QEAA@XZ @ 0x1800219A8 (--0TelemetryTraceLoggerWin@Utils@Spectre@@QEAA@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??$CreateCvFromGuid@$0M@@TraceLoggingCorrelationVector@@AEAAXU_GUID@@@Z @ 0x180021894 (--$CreateCvFromGuid@$0M@@TraceLoggingCorrelationVector@@AEAAXU_GUID@@@Z.c)
 *     ??2TraceLoggingCorrelationVector@@SAPEAX_K@Z @ 0x180021DDC (--2TraceLoggingCorrelationVector@@SAPEAX_K@Z.c)
 */

__int64 *__fastcall std::make_unique<TraceLoggingCorrelationVector,,0>(__int64 *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rbx
  GUID v5; // [rsp+30h] [rbp-38h] BYREF
  GUID pguid; // [rsp+40h] [rbp-28h] BYREF

  v2 = TraceLoggingCorrelationVector::operator new((unsigned __int64)a1);
  *(_QWORD *)&pguid.Data1 = v2;
  v3 = (__int64)v2;
  if ( v2 )
  {
    v2[19] = 64LL;
    pguid = 0LL;
    CoCreateGuid(&pguid);
    v5 = pguid;
    TraceLoggingCorrelationVector::CreateCvFromGuid<12>(v3, (__int128 *)&v5);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  return a1;
}

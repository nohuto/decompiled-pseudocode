/*
 * XREFs of ?CreateUid@TelemetryTraceUid@Utils@Spectre@@SA?AV123@XZ @ 0x180022454
 * Callers:
 *     ??0TelemetryTraceLoggerWin@Utils@Spectre@@QEAA@XZ @ 0x1800219A8 (--0TelemetryTraceLoggerWin@Utils@Spectre@@QEAA@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 *     ??0TelemetryTraceUid@Utils@Spectre@@AEAA@$$QEAVImpl@012@@Z @ 0x180021B5C (--0TelemetryTraceUid@Utils@Spectre@@AEAA@$$QEAVImpl@012@@Z.c)
 *     ??0TelemetryTraceUid@Utils@Spectre@@AEAA@XZ @ 0x180021B7C (--0TelemetryTraceUid@Utils@Spectre@@AEAA@XZ.c)
 *     ?ConvertToCharArray@Impl@TelemetryTraceUid@Utils@Spectre@@AEBAXXZ @ 0x18002236C (-ConvertToCharArray@Impl@TelemetryTraceUid@Utils@Spectre@@AEBAXXZ.c)
 */

Spectre::Utils::TelemetryTraceUid *__fastcall Spectre::Utils::TelemetryTraceUid::CreateUid(
        Spectre::Utils::TelemetryTraceUid *a1)
{
  GUID pguid; // [rsp+28h] [rbp-60h] BYREF
  GUID rguid; // [rsp+38h] [rbp-50h] BYREF
  __int128 v5; // [rsp+48h] [rbp-40h]
  __int128 v6; // [rsp+58h] [rbp-30h]
  __int64 v7; // [rsp+68h] [rbp-20h]

  *(_QWORD *)&pguid.Data1 = a1;
  if ( CoCreateGuid(&pguid) )
  {
    Trace::LevelSettingsWrapper::Output(
      &gTraceLevelsCoreUtils_TelemetryTracing,
      4,
      "Unable to generate a valid, globally unique, GUID");
    Spectre::Utils::TelemetryTraceUid::TelemetryTraceUid(a1);
  }
  else
  {
    v7 = 0LL;
    rguid = pguid;
    v5 = 0LL;
    v6 = 0LL;
    Spectre::Utils::TelemetryTraceUid::Impl::ConvertToCharArray(&rguid);
    Spectre::Utils::TelemetryTraceUid::TelemetryTraceUid(a1, (__int64)&rguid);
  }
  return a1;
}

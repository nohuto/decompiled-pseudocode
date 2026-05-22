/*
 * XREFs of ??_GApiTelemetryLogger@details@wil@@EEAAPEAXI@Z @ 0x1800ED930
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1ApiTelemetryLogger@details@wil@@EEAA@XZ @ 0x1800ED804 (--1ApiTelemetryLogger@details@wil@@EEAA@XZ.c)
 */

wil::details::ApiTelemetryLogger *__fastcall wil::details::ApiTelemetryLogger::`scalar deleting destructor'(
        wil::details::ApiTelemetryLogger *this,
        unsigned __int64 a2)
{
  char v2; // bl

  v2 = a2;
  wil::details::ApiTelemetryLogger::~ApiTelemetryLogger(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}

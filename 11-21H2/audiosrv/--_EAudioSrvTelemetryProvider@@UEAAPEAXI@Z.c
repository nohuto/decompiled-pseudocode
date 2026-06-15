/*
 * XREFs of ??_EAudioSrvTelemetryProvider@@UEAAPEAXI@Z @ 0x1800C1170
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x1800C1120 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

AudioSrvTelemetryProvider *__fastcall AudioSrvTelemetryProvider::`vector deleting destructor'(
        AudioSrvTelemetryProvider *this,
        char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

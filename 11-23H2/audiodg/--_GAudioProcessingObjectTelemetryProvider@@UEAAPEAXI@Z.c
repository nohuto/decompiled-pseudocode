/*
 * XREFs of ??_GAudioProcessingObjectTelemetryProvider@@UEAAPEAXI@Z @ 0x140050A40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x1400504A4 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

AudioProcessingObjectTelemetryProvider *__fastcall AudioProcessingObjectTelemetryProvider::`scalar deleting destructor'(
        AudioProcessingObjectTelemetryProvider *this,
        char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

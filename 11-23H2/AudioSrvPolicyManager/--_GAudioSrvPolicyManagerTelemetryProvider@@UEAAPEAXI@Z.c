/*
 * XREFs of ??_GAudioSrvPolicyManagerTelemetryProvider@@UEAAPEAXI@Z @ 0x18001C1C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016C28 (--3@YAXPEAX_K@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x18001C034 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

AudioSrvPolicyManagerTelemetryProvider *__fastcall AudioSrvPolicyManagerTelemetryProvider::`scalar deleting destructor'(
        AudioSrvPolicyManagerTelemetryProvider *this,
        char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

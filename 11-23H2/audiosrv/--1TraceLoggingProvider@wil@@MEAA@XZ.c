/*
 * XREFs of ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x1800CE4BC
 * Callers:
 *     ??_EAudioSrvTelemetryProvider@@UEAAPEAXI@Z @ 0x1800CE5B0 (--_EAudioSrvTelemetryProvider@@UEAAPEAXI@Z.c)
 *     ??_ETraceLoggingProvider@wil@@MEAAPEAXI@Z @ 0x1800CE760 (--_ETraceLoggingProvider@wil@@MEAAPEAXI@Z.c)
 *     ??_ENUIAudioTracing@@UEAAPEAXI@Z @ 0x180159080 (--_ENUIAudioTracing@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::TraceLoggingProvider::~TraceLoggingProvider(wil::TraceLoggingProvider *this)
{
  __int64 v1; // rax
  __int64 v2; // rcx

  *(_QWORD *)this = &wil::TraceLoggingProvider::`vftable';
  if ( *((_BYTE *)this + 16) )
  {
    v1 = *((_QWORD *)this + 1);
    v2 = *(_QWORD *)(v1 + 32);
    *(_QWORD *)(v1 + 32) = 0LL;
    *(_DWORD *)v1 = 0;
    EtwEventUnregister(v2);
  }
}

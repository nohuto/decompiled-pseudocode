/*
 * XREFs of ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x18038D28C
 * Callers:
 *     ??_GTouchGestureLogging@@UEAAPEAXI@Z @ 0x180261520 (--_GTouchGestureLogging@@UEAAPEAXI@Z.c)
 *     ??_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z @ 0x18038D560 (--_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z.c)
 *     ??_EImmersiveIconsLogging@@UEAAPEAXI@Z @ 0x1803EF5E0 (--_EImmersiveIconsLogging@@UEAAPEAXI@Z.c)
 *     ??_EPenWorkspaceBrokerLogging@@UEAAPEAXI@Z @ 0x1804905A0 (--_EPenWorkspaceBrokerLogging@@UEAAPEAXI@Z.c)
 *     ??_GPenWorkspaceBrokerTelemetry@@UEAAPEAXI@Z @ 0x1804905E0 (--_GPenWorkspaceBrokerTelemetry@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::TraceLoggingProvider::~TraceLoggingProvider(wil::TraceLoggingProvider *this)
{
  __int64 v1; // rax
  REGHANDLE v2; // rcx

  *(_QWORD *)this = &IamTraceLogging::`vftable';
  if ( *((_BYTE *)this + 16) )
  {
    v1 = *((_QWORD *)this + 1);
    v2 = *(_QWORD *)(v1 + 32);
    *(_QWORD *)(v1 + 32) = 0LL;
    *(_DWORD *)v1 = 0;
    EventUnregister(v2);
  }
}

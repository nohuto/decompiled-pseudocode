/*
 * XREFs of ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x1802D6AEC
 * Callers:
 *     ??_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z @ 0x18019D710 (--_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z.c)
 *     ??_GTouchGestureLogging@@UEAAPEAXI@Z @ 0x1802D6E20 (--_GTouchGestureLogging@@UEAAPEAXI@Z.c)
 *     ??_EImmersiveIconsLogging@@UEAAPEAXI@Z @ 0x180321FB0 (--_EImmersiveIconsLogging@@UEAAPEAXI@Z.c)
 *     ??_EPenWorkspaceBrokerLogging@@UEAAPEAXI@Z @ 0x1803B74C0 (--_EPenWorkspaceBrokerLogging@@UEAAPEAXI@Z.c)
 *     ??_GPenWorkspaceBrokerTelemetry@@UEAAPEAXI@Z @ 0x1803B7500 (--_GPenWorkspaceBrokerTelemetry@@UEAAPEAXI@Z.c)
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

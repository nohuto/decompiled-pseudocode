/*
 * XREFs of ??0CAudioDGModule@@QEAA@XZ @ 0x140027190
 * Callers:
 *     _dynamic_initializer_for___AtlModule__ @ 0x140001CD0 (_dynamic_initializer_for___AtlModule__.c)
 * Callees:
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x14004EA98 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ??0?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ @ 0x140050140 (--0-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=5
CAudioDGModule *__fastcall CAudioDGModule::CAudioDGModule(CAudioDGModule *this)
{
  int v1; // eax
  int v2; // ecx
  const struct wil::FailureInfo *v3; // rdx
  _BYTE v5[168]; // [rsp+50h] [rbp-A8h] BYREF

  ATL::CAtlExeModuleT<CAudioDGModule>::CAtlExeModuleT<CAudioDGModule>();
  _AtlModule = &CAudioDGModule::`vftable'{for `ATL::CAtlExeModuleT<CAudioDGModule>'};
  qword_1400CF3B8 = (__int64)&CAudioDGModule::`vftable'{for `IAudioHealthMonitor'};
  qword_1400CF3C8 = 0LL;
  qword_1400CF3D0 = 0LL;
  qword_1400CF3D8 = 0LL;
  dword_1400CF3E0 = 0;
  byte_1400CF3E4 = 0;
  qword_1400CF3E8 = 0LL;
  g_fEventTracingEnabled = 1;
  v1 = EtwRegisterTraceGuidsW(AeWmiCallback, 0LL, &AEWMIGUID);
  v2 = g_fEventTracingEnabled;
  if ( v1 )
    v2 = 0;
  g_fEventTracingEnabled = v2;
  if ( wil::details::g_pfnTelemetryCallback
    && (void (__fastcall *)(bool, const struct wil::FailureInfo *))wil::details::g_pfnTelemetryCallback != AudioDgTelemetryProvider::FallbackTelemetryCallback )
  {
    memset_0(v5, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v5, v3);
  }
  wil::details::g_pfnTelemetryCallback = (__int64)AudioDgTelemetryProvider::FallbackTelemetryCallback;
  SetUnhandledExceptionFilter(AudioDGUnhandledExceptionFilter);
  return (CAudioDGModule *)&_AtlModule;
}

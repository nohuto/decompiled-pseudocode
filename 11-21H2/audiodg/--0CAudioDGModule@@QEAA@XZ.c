/*
 * XREFs of ??0CAudioDGModule@@QEAA@XZ @ 0x14002C0D0
 * Callers:
 *     _dynamic_initializer_for___AtlModule__ @ 0x140001110 (_dynamic_initializer_for___AtlModule__.c)
 * Callees:
 *     ??0?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ @ 0x14002C1EC (--0-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ.c)
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x14004F358 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

// Hidden C++ exception states: #wind=5
CAudioDGModule *__fastcall CAudioDGModule::CAudioDGModule(CAudioDGModule *this)
{
  int v1; // eax
  int v2; // ecx
  const struct wil::FailureInfo *v4; // rdx
  GUID *v5; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v6[168]; // [rsp+50h] [rbp-A8h] BYREF

  ATL::CAtlExeModuleT<CAudioDGModule>::CAtlExeModuleT<CAudioDGModule>();
  _AtlModule = (__int64)&CAudioDGModule::`vftable'{for `ATL::CAtlExeModuleT<CAudioDGModule>'};
  qword_1400C12E8 = (__int64)&CAudioDGModule::`vftable'{for `IAudioHealthMonitor'};
  qword_1400C12F8 = 0LL;
  hHandle = 0LL;
  qword_1400C1308 = 0LL;
  dword_1400C1310 = 0;
  byte_1400C1314 = 0;
  qword_1400C1318 = 0LL;
  v5 = &GUID_NULL;
  g_fEventTracingEnabled = 1;
  v1 = ((__int64 (__fastcall *)(unsigned int (__fastcall *)(enum WMIDPREQUESTCODE, void *, unsigned int *, void *), _QWORD, void *, __int64, GUID **, _QWORD, _QWORD, __int64 *))EtwRegisterTraceGuidsW)(
         AeWmiCallback,
         0LL,
         &AEWMIGUID,
         1LL,
         &v5,
         0LL,
         0LL,
         &qword_140097020);
  v2 = g_fEventTracingEnabled;
  if ( v1 )
    v2 = 0;
  g_fEventTracingEnabled = v2;
  if ( wil::details::g_pfnTelemetryCallback
    && (char *)wil::details::g_pfnTelemetryCallback != (char *)AudioDgTelemetryProvider::FallbackTelemetryCallback )
  {
    memset_0(v6, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v6, v4);
  }
  wil::details::g_pfnTelemetryCallback = (__int64 (__fastcall *)(_QWORD, _QWORD))AudioDgTelemetryProvider::FallbackTelemetryCallback;
  SetUnhandledExceptionFilter(AudioDGUnhandledExceptionFilter);
  return (CAudioDGModule *)&_AtlModule;
}

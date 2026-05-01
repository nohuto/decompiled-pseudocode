/*
 * XREFs of ?get@?$static_lazy@VCloudPCLogging@@@details@wil@@QEAAPEAVCloudPCLogging@@P6AXXZ@Z @ 0x18070819C
 * Callers:
 *     ??$EnableCloudPCCompleted@PEBG_N@CloudPCTelemetry@@SAX$$QEAPEBG$$QEA_N@Z @ 0x180701F1C (--$EnableCloudPCCompleted@PEBG_N@CloudPCTelemetry@@SAX$$QEAPEBG$$QEA_N@Z.c)
 *     ?Provider@CloudPCLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180707174 (-Provider@CloudPCLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$B2CSystemShuttingDown@PEBG@CloudPCTelemetry@@SAX$$QEAPEBG@Z @ 0x18071E578 (--$B2CSystemShuttingDown@PEBG@CloudPCTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??$ProviderWindowAdded@_K@CloudPCTelemetry@@SAX$$QEA_K@Z @ 0x18071E9E0 (--$ProviderWindowAdded@_K@CloudPCTelemetry@@SAX$$QEA_K@Z.c)
 *     ??$ProviderWindowDestroyedEventFired@AEB_K@CloudPCTelemetry@@SAXAEB_K@Z @ 0x18071EA54 (--$ProviderWindowDestroyedEventFired@AEB_K@CloudPCTelemetry@@SAXAEB_K@Z.c)
 *     ??$ProviderWindowRemoved@AEB_KI@CloudPCTelemetry@@SAXAEB_K$$QEAI@Z @ 0x18071EAC8 (--$ProviderWindowRemoved@AEB_KI@CloudPCTelemetry@@SAXAEB_K$$QEAI@Z.c)
 *     ??$SwitchingToCloudOrLocal@PEBGPEBG_NAEAW4SwitchSource@Shell@Internal@Windows@winrt@@@CloudPCTelemetry@@SAX$$QEAPEBG0$$QEA_NAEAW4SwitchSource@Shell@Internal@Windows@winrt@@@Z @ 0x18073113C (--$SwitchingToCloudOrLocal@PEBGPEBG_NAEAW4SwitchSource@Shell@Internal@Windows@winrt@@@CloudPCTel.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<CloudPCLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v3; // rdx
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  union _RTL_RUN_ONCE *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = a1;
  v9 = 0LL;
  if ( __std_init_once_begin_initialize(&`CloudPCLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v8, (LPVOID *)&v9)
    && (_DWORD)v8 )
  {
    v6 = &`CloudPCLogging::Instance'::`2'::wrapper;
    v9 = &qword_18098EE60;
    qword_18098EE60 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_18098EE78 = (__int64)&`CloudPCLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v7 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v6, v3, v4);
  }
  return v9;
}

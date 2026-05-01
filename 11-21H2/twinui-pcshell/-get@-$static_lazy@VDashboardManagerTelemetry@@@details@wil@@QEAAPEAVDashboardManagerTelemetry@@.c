/*
 * XREFs of ?get@?$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@P6AXXZ@Z @ 0x18002703C
 * Callers:
 *     ?CreateInstance@DashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180026650 (-CreateInstance@DashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIUnknow.c)
 *     ??0DashboardActivator@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180026E80 (--0DashboardActivator@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1DashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180026F2C (--1DashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??$DashboardInteracted@AEBUguid@winrt@@IAEA_N@DashboardManagerTelemetry@@SAXAEBUguid@winrt@@$$QEAIAEA_N@Z @ 0x18017BC14 (--$DashboardInteracted@AEBUguid@winrt@@IAEA_N@DashboardManagerTelemetry@@SAXAEBUguid@winrt@@$$QE.c)
 *     ?Provider@DashboardManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x18017BD80 (-Provider@DashboardManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$WidgetsOSState@AEAK_NAEAK_N_N_N_N@DashboardManagerTelemetry@@SAXAEAK$$QEA_N01111@Z @ 0x1801C1F5C (--$WidgetsOSState@AEAK_NAEAK_N_N_N_N@DashboardManagerTelemetry@@SAXAEAK$$QEA_N01111@Z.c)
 *     ??$DashboardInteracted@Uguid@winrt@@IAEA_N@DashboardManagerTelemetry@@SAX$$QEAUguid@winrt@@$$QEAIAEA_N@Z @ 0x1805BBE84 (--$DashboardInteracted@Uguid@winrt@@IAEA_N@DashboardManagerTelemetry@@SAX$$QEAUguid@winrt@@$$QEA.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18018879C (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<DashboardManagerTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v3; // rdx
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  LPINIT_ONCE v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = a1;
  v9 = 0LL;
  if ( __std_init_once_begin_initialize(
         &`DashboardManagerTelemetry::Instance'::`2'::wrapper,
         0,
         (PBOOL)&v8,
         (LPVOID *)&v9)
    && (_DWORD)v8 )
  {
    v6 = &`DashboardManagerTelemetry::Instance'::`2'::wrapper;
    v9 = &qword_1807B5738;
    qword_1807B5738 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1807B5750 = (__int64)&`DashboardManagerTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v7 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v6, v3, v4);
  }
  return v9;
}

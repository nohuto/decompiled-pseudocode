/*
 * XREFs of ?TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ @ 0x180320F94
 * Callers:
 *     _lambda_240ee78d6e8cdd91ee7835a3dd5ef9c5_::operator() @ 0x18031E4D0 (_lambda_240ee78d6e8cdd91ee7835a3dd5ef9c5_--operator().c)
 *     ?ApplyPendingPositioningOperations@FullScreenPositioner@@AEAAXXZ @ 0x18031E924 (-ApplyPendingPositioningOperations@FullScreenPositioner@@AEAAXXZ.c)
 *     ?OnTransitionStateChanged@FullScreenPositioner@@UEAAJ_K_J@Z @ 0x18031FFF0 (-OnTransitionStateChanged@FullScreenPositioner@@UEAAJ_K_J@Z.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x180320184 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180066424 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18009301C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     _alloca_probe @ 0x1801EAC80 (_alloca_probe.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x1802DB894 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 *     ??1Completer@?$static_lazy@VFullScreenPositionerLogging@@@details@wil@@QEAA@XZ @ 0x18031E458 (--1Completer@-$static_lazy@VFullScreenPositionerLogging@@@details@wil@@QEAA@XZ.c)
 */

void FullScreenPositionerLogging::TraceLoggingInfo(const char *a1, ...)
{
  _QWORD *v1; // rbx
  unsigned __int16 *v2; // rdx
  __int64 v3; // r9
  _DWORD *v4; // rcx
  LPVOID Context; // [rsp+38h] [rbp-D0h] BYREF
  WINBOOL fPending[2]; // [rsp+40h] [rbp-C8h] BYREF
  union _RTL_RUN_ONCE *v7; // [rsp+48h] [rbp-C0h] BYREF
  int v8; // [rsp+50h] [rbp-B8h]
  _BYTE v9[4096]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+1090h] [rbp+F88h] BYREF
  va_list va; // [rsp+1090h] [rbp+F88h]
  __int64 v13; // [rsp+1098h] [rbp+F90h]
  __int64 v14; // [rsp+10A0h] [rbp+F98h]
  va_list va1; // [rsp+10A8h] [rbp+FA0h] BYREF

  va_start(va1, a1);
  va_start(va, a1);
  v11 = va_arg(va1, _QWORD);
  v13 = va_arg(va1, _QWORD);
  v14 = va_arg(va1, _QWORD);
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`FullScreenPositionerLogging::Instance'::`2'::wrapper, 0, fPending, &Context)
    && fPending[0] )
  {
    v7 = &`FullScreenPositionerLogging::Instance'::`2'::wrapper;
    Context = &qword_1807B4D18;
    qword_1807B4D18 = (__int64)&IamTraceLogging::`vftable';
    atexit(_lambda_868f7fa048835520b2023eeceda2fa98_::_lambda_invoker_cdecl_);
    v8 = 0;
    wil::details::static_lazy<FullScreenPositionerLogging>::Completer::~Completer((__int64)&v7);
  }
  v1 = Context;
  if ( wil::TraceLoggingProvider::IsEnabled_((wil::TraceLoggingProvider *)Context, 5u) )
  {
    wil::details::PrintLoggingMessage((wil::details *)v9, v2, (__int64)a1, va);
    v4 = (_DWORD *)v1[1];
    if ( *v4 > 5u )
    {
      Context = v9;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        (int)v4,
        (int)&dword_1806A1D66,
        0,
        v3,
        (const WCHAR **)&Context);
    }
  }
}

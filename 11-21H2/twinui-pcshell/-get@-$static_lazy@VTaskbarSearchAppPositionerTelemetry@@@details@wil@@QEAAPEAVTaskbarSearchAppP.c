/*
 * XREFs of ?get@?$static_lazy@VTaskbarSearchAppPositionerTelemetry@@@details@wil@@QEAAPEAVTaskbarSearchAppPositionerTelemetry@@P6AXXZ@Z @ 0x1801443BC
 * Callers:
 *     ?GetAppRectAndClippingRegion@TaskbarSearchAppPositioner@@UEAA?AUSearchAppSizeAndBorderInfo@@AEBUtagRECT@@0W4SearchAppActivationMode@Shell@UI@WindowsUdk@winrt@@_NAEBUhstring@8@@Z @ 0x1801A6550 (-GetAppRectAndClippingRegion@TaskbarSearchAppPositioner@@UEAA-AUSearchAppSizeAndBorderInfo@@AEBU.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTaskbarSearchAppPositionerTelemetry@@@details@wil@@QEAA@XZ @ 0x180144450 (--1Completer@-$static_lazy@VTaskbarSearchAppPositionerTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18018879C (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<TaskbarSearchAppPositionerTelemetry>::get(
        __int64 a1,
        void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = a1;
  v7 = 0LL;
  if ( __std_init_once_begin_initialize(
         &`TaskbarSearchAppPositionerTelemetry::Instance'::`2'::wrapper,
         0,
         (PBOOL)&v6,
         (LPVOID *)&v7)
    && (_DWORD)v6 )
  {
    v4 = &`TaskbarSearchAppPositionerTelemetry::Instance'::`2'::wrapper;
    v7 = &qword_1807B5070;
    qword_1807B5070 = (__int64)&IamTraceLogging::`vftable';
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<TaskbarSearchAppPositionerTelemetry>::Completer::~Completer(&v4);
  }
  return v7;
}

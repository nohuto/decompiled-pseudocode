/*
 * XREFs of ?get@?$static_lazy@VSearchBoxOnTaskbarSearchAppPositionerTelemetry@@@details@wil@@QEAAPEAVSearchBoxOnTaskbarSearchAppPositionerTelemetry@@P6AXXZ@Z @ 0x1800B6618
 * Callers:
 *     ?GetAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AUSearchAppSizeAndBorderInfo@@AEBUtagRECT@@0W4SearchAppActivationMode@Shell@UI@WindowsUdk@winrt@@_NAEBUhstring@8@@Z @ 0x1800B6210 (-GetAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@UEAA-AUSearchAppSizeAndBorde.c)
 *     ?IsEnabled@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SA_NE_K@Z @ 0x1800B65F4 (-IsEnabled@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SA_NE_K@Z.c)
 *     ??$LogSearchPaneRect@AEAUtagRECT@@@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SAXAEAUtagRECT@@@Z @ 0x18047F88C (--$LogSearchPaneRect@AEAUtagRECT@@@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SAXAEAUtagREC.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VSearchAppExperienceManagerTelemetry@@@details@wil@@QEAA@XZ @ 0x180038D90 (--1Completer@-$static_lazy@VSearchAppExperienceManagerTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<SearchBoxOnTaskbarSearchAppPositionerTelemetry>::get(
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
         &`SearchBoxOnTaskbarSearchAppPositionerTelemetry::Instance'::`2'::wrapper,
         0,
         (PBOOL)&v6,
         (LPVOID *)&v7)
    && (_DWORD)v6 )
  {
    v4 = &`SearchBoxOnTaskbarSearchAppPositionerTelemetry::Instance'::`2'::wrapper;
    v7 = &qword_18098F7C0;
    qword_18098F7C0 = (__int64)&IamTraceLogging::`vftable';
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<SearchAppExperienceManagerTelemetry>::Completer::~Completer((__int64)&v4);
  }
  return v7;
}

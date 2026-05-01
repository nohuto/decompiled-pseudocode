/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@5555555@Z @ 0x18050A564
 * Callers:
 *     ?WorkAreaChanged_ForceToFitRectInMonitor_@TouchKeyboardExperienceTelemetryLogger@@QEBAXPEBGAEBUtagRECT@@1@Z @ 0x18051C22C (-WorkAreaChanged_ForceToFitRectInMonitor_@TouchKeyboardExperienceTelemetryLogger@@QEBAXPEBGAEBUt.c)
 *     ?ViewForceEvicted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x1805C2038 (-ViewForceEvicted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView.c)
 *     ?ViewForceMaximized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x1805C21B4 (-ViewForceMaximized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationVi.c)
 *     ?ViewPositionAdjusted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x1805C25B8 (-ViewPositionAdjusted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplication.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        __int64 a5,
        const WCHAR **a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  const WCHAR *v16; // rcx
  __int64 v17; // rax
  int v18; // edx
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+30h] [rbp-C9h] BYREF
  __int64 v21; // [rsp+50h] [rbp-A9h]
  __int64 v22; // [rsp+58h] [rbp-A1h]
  const WCHAR *v23; // [rsp+60h] [rbp-99h]
  int v24; // [rsp+68h] [rbp-91h]
  int v25; // [rsp+6Ch] [rbp-8Dh]
  __int64 v26; // [rsp+70h] [rbp-89h]
  __int64 v27; // [rsp+78h] [rbp-81h]
  __int64 v28; // [rsp+80h] [rbp-79h]
  __int64 v29; // [rsp+88h] [rbp-71h]
  __int64 v30; // [rsp+90h] [rbp-69h]
  __int64 v31; // [rsp+98h] [rbp-61h]
  __int64 v32; // [rsp+A0h] [rbp-59h]
  __int64 v33; // [rsp+A8h] [rbp-51h]
  __int64 v34; // [rsp+B0h] [rbp-49h]
  __int64 v35; // [rsp+B8h] [rbp-41h]
  __int64 v36; // [rsp+C0h] [rbp-39h]
  __int64 v37; // [rsp+C8h] [rbp-31h]
  __int64 v38; // [rsp+D0h] [rbp-29h]
  __int64 v39; // [rsp+D8h] [rbp-21h]
  __int64 v40; // [rsp+E0h] [rbp-19h]
  __int64 v41; // [rsp+E8h] [rbp-11h]

  v40 = a14;
  v38 = a13;
  v36 = a12;
  v34 = a11;
  v32 = a10;
  v30 = a9;
  v28 = a8;
  v26 = a7;
  v41 = 4LL;
  v39 = 4LL;
  v37 = 4LL;
  v16 = *a6;
  v35 = 4LL;
  v33 = 4LL;
  v31 = 4LL;
  v29 = 4LL;
  v27 = 4LL;
  if ( v16 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v16 = &LocaleName;
    v18 = 2;
  }
  v21 = a5;
  v23 = v16;
  v24 = v18;
  v25 = 0;
  v22 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 0xCu, &v20);
}

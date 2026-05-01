/*
 * XREFs of ?TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4SnapEventType@23456@PEAUIApplicationView@@@Z @ 0x1804A4B60
 * Callers:
 *     ?WindowSnapStateChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x1804A4EB0 (-WindowSnapStateChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIAp.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?FailedToRetreiveWindowHandle@TaskFlowDataEngineTelemetry@@SAXXZ @ 0x18049CD7C (-FailedToRetreiveWindowHandle@TaskFlowDataEngineTelemetry@@SAXXZ.c)
 *     ??$SnapSignalDataCreated@AEAW4SnapEventType@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEB_K@TaskFlowDataEngineTelemetry@@SAXAEAW4SnapEventType@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEB_K@Z @ 0x1804A2D90 (--$SnapSignalDataCreated@AEAW4SnapEventType@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEB.c)
 *     ??1ListenerTelemetrySignalTracker@@QEAA@XZ @ 0x1804A3380 (--1ListenerTelemetrySignalTracker@@QEAA@XZ.c)
 *     ?CreateSnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@YA?AV?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4SnapEventType@12345@UDateTime@Foundation@5@_K@Z @ 0x1804A6EEC (-CreateSnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@YA-AV-$com_ptr_t@UISnapSignalD.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
struct IApplicationView *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateSnapSignalData(
        __int64 a1,
        struct IApplicationView *a2,
        unsigned int a3,
        __int64 (__fastcall ***a4)(ApplicationViewHelpers *, GUID *, __int64))
{
  __int64 WindowForView; // rax
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // [rsp+28h] [rbp-40h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 v15[5]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF
  struct IApplicationView *v17; // [rsp+78h] [rbp+10h]
  unsigned int v18; // [rsp+80h] [rbp+18h] BYREF

  v18 = a3;
  v17 = a2;
  v16 = a1;
  v12 = 0LL;
  LOWORD(v16) = 0;
  WindowForView = ApplicationViewHelpers::GetWindowForView(a4, a2);
  v8 = WindowForView;
  if ( WindowForView )
  {
    v14 = WindowForView;
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v15[0] = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
    v10 = (__int64 *)Windows::Internal::Shell::TaskFlow::DataEngine::CreateSnapSignalData(
                       &SystemTimeAsFileTime,
                       a3,
                       v15[0],
                       v8);
    v11 = *v10;
    *v10 = 0LL;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&SystemTimeAsFileTime);
    TaskFlowDataEngineTelemetry::SnapSignalDataCreated<enum Windows::Internal::Shell::TaskFlow::DataEngine::SnapEventType &,__int64 &,unsigned __int64 const &>(
      (int *)&v18,
      (__int64 *)v15,
      &v14);
    LOBYTE(v16) = 1;
    ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)&v16);
    v12 = 0LL;
    *(_QWORD *)a2 = v11;
  }
  else
  {
    TaskFlowDataEngineTelemetry::FailedToRetreiveWindowHandle(v7);
    BYTE1(v16) = 1;
    *(_QWORD *)a2 = 0LL;
    ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)&v16);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
  return a2;
}

/*
 * XREFs of ?TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4SnapEventType@23456@PEAUIApplicationView@@@Z @ 0x1803C9530
 * Callers:
 *     ?WindowSnapStateChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x1803C9680 (-WindowSnapStateChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIAp.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?FailedToRetreiveWindowHandle@TaskFlowDataEngineTelemetry@@SAXXZ @ 0x1803C3738 (-FailedToRetreiveWindowHandle@TaskFlowDataEngineTelemetry@@SAXXZ.c)
 *     ??$SnapSignalDataCreated@AEAW4SnapEventType@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEB_K@TaskFlowDataEngineTelemetry@@SAXAEAW4SnapEventType@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEB_K@Z @ 0x1803C8590 (--$SnapSignalDataCreated@AEAW4SnapEventType@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEB.c)
 *     ?CreateSnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@YA?AV?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4SnapEventType@12345@UDateTime@Foundation@5@_K@Z @ 0x1803C9E48 (-CreateSnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@YA-AV-$com_ptr_t@UISnapSignalD.c)
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
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+28h] [rbp-30h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v15[4]; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v16; // [rsp+70h] [rbp+18h] BYREF

  v16 = a3;
  v12 = 0LL;
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
                       v8,
                       v12);
    v11 = *v10;
    *v10 = 0LL;
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&SystemTimeAsFileTime);
    TaskFlowDataEngineTelemetry::SnapSignalDataCreated<enum Windows::Internal::Shell::TaskFlow::DataEngine::SnapEventType &,__int64 &,unsigned __int64 const &>(
      (int *)&v16,
      (__int64 *)v15,
      &v14);
    v12 = 0LL;
    *(_QWORD *)a2 = v11;
  }
  else
  {
    TaskFlowDataEngineTelemetry::FailedToRetreiveWindowHandle(v7);
    *(_QWORD *)a2 = 0LL;
    _InterlockedIncrement((volatile signed __int32 *)&ListenerTelemetryReport::m_knownFailureCounter);
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v12);
  return a2;
}

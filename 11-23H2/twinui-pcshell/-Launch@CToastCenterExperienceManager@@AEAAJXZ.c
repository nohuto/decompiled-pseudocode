/*
 * XREFs of ?Launch@CToastCenterExperienceManager@@AEAAJXZ @ 0x180436A78
 * Callers:
 *     ?OnCriticalNotification@CToastCenterExperienceManager@@AEAAJXZ @ 0x1804376F0 (-OnCriticalNotification@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnNewNotification@CToastCenterExperienceManager@@AEAAJXZ @ 0x180438040 (-OnNewNotification@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800507C4 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180056D78 (-Stop@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800B30E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x18010D260 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$?0$$V@EM_LaunchActivity@ToastCenterTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180434090 (--$-0$$V@EM_LaunchActivity@ToastCenterTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 *     ??1EM_LaunchActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x18043551C (--1EM_LaunchActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ?LaunchedApplication@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180436C98 (-LaunchedApplication@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?NoOp_ActionCenterVisible@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180436E38 (-NoOp_ActionCenterVisible@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?NoOp_DeviceLockdown@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180436F88 (-NoOp_DeviceLockdown@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?NoOp_ShellNotReady@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180436FF8 (-NoOp_ShellNotReady@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?NoOp_ShutdownInProgress@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180437068 (-NoOp_ShutdownInProgress@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?TurnedScreenOn_SoundSentry@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x18043D058 (-TurnedScreenOn_SoundSentry@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::Launch(struct _TP_TIMER **pv, char a2)
{
  HWND WindowW; // rax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  NTSTATUS v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  struct _FILETIME pftDueTime; // [rsp+38h] [rbp-D0h] BYREF
  int pvParam; // [rsp+40h] [rbp-C8h] BYREF
  char v11; // [rsp+44h] [rbp-C4h]
  _QWORD v12[40]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  ToastCenterTelemetry::EM_LaunchActivity::EM_LaunchActivity((__int64)v12, a2);
  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( !*((_BYTE *)pv + 465) )
  {
    ToastCenterTelemetry::EM_LaunchActivity::NoOp_ShellNotReady((ToastCenterTelemetry::EM_LaunchActivity *)v12);
LABEL_17:
    wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v12, 0);
    v6 = 0;
    goto LABEL_18;
  }
  if ( GetPropW(WindowW, L"IsExplorerShuttingDown") )
  {
    ToastCenterTelemetry::EM_LaunchActivity::NoOp_ShutdownInProgress((ToastCenterTelemetry::EM_LaunchActivity *)v12);
    goto LABEL_17;
  }
  if ( *((_BYTE *)pv + 466) )
  {
    ToastCenterTelemetry::EM_LaunchActivity::NoOp_ActionCenterVisible((ToastCenterTelemetry::EM_LaunchActivity *)v12);
    goto LABEL_17;
  }
  if ( *((_BYTE *)pv + 468) )
  {
    ToastCenterTelemetry::EM_LaunchActivity::NoOp_DeviceLockdown((ToastCenterTelemetry::EM_LaunchActivity *)v12);
    goto LABEL_17;
  }
  ThreadpoolTimer = CreateThreadpoolTimer(
                      (PTP_TIMER_CALLBACK)lambda_344c2a531101fbb203b5d9e39f4b449c_::_lambda_invoker_cdecl_,
                      pv,
                      0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    pv + 88,
    ThreadpoolTimer);
  pvParam = 56;
  if ( SystemParametersInfoW(0x40u, 0x38u, &pvParam, 0)
    && (v11 & 1) != 0
    && (ToastCenterTelemetry::EM_LaunchActivity::TurnedScreenOn_SoundSentry((ToastCenterTelemetry::EM_LaunchActivity *)v12),
        v5 = NtPowerInformation(ProcessorStateHandler2|0x40, 0LL, 0, 0LL, 0),
        v5 < 0) )
  {
    v6 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x37B,
           (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
           (const char *)(unsigned int)v5);
  }
  else
  {
    ToastCenterTelemetry::EM_LaunchActivity::LaunchedApplication((ToastCenterTelemetry::EM_LaunchActivity *)v12);
    v7 = CSingleViewShellExperience::Launch((CSingleViewShellExperience *)(pv + 13));
    v6 = v7;
    if ( v7 >= 0 )
    {
      if ( *((_DWORD *)pv + 36) != 2 )
      {
        pftDueTime.dwHighDateTime = -1;
        pftDueTime.dwLowDateTime = -600000000;
        SetThreadpoolTimer(pv[88], &pftDueTime, 0, 0);
      }
      goto LABEL_17;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x380,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
  }
LABEL_18:
  ToastCenterTelemetry::EM_LaunchActivity::~EM_LaunchActivity((ToastCenterTelemetry::EM_LaunchActivity *)v12);
  return v6;
}

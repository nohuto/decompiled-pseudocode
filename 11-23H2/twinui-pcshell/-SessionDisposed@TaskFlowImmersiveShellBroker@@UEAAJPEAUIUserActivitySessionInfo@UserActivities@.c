/*
 * XREFs of ?SessionDisposed@TaskFlowImmersiveShellBroker@@UEAAJPEAUIUserActivitySessionInfo@UserActivities@Internal@ApplicationModel@Windows@@@Z @ 0x1804A0B50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailedToRetreiveWindowHandle@TaskFlowDataEngineTelemetry@@SAXXZ @ 0x18049CD7C (-FailedToRetreiveWindowHandle@TaskFlowDataEngineTelemetry@@SAXXZ.c)
 *     ?TryGetApplicationViewViewIdForCoreWindow@TaskFlowImmersiveShellBroker@@AEAAJ_KPEA_K@Z @ 0x1804A20DC (-TryGetApplicationViewViewIdForCoreWindow@TaskFlowImmersiveShellBroker@@AEAAJ_KPEA_K@Z.c)
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::SessionDisposed(
        TaskFlowImmersiveShellBroker *this,
        struct Windows::ApplicationModel::Internal::UserActivities::IUserActivitySessionInfo *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rbx
  int ApplicationViewViewIdForCoreWindow; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v12; // [rsp+50h] [rbp+18h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  if ( *((_DWORD *)this + 50) == 1 )
  {
    v5 = *((_QWORD *)this + 33);
    v13 = v5;
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      v11 = 0LL;
      ApplicationViewViewIdForCoreWindow = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Internal::UserActivities::IUserActivitySessionInfo *, unsigned __int64 *))(*(_QWORD *)a2 + 80LL))(
                                             a2,
                                             &v11);
      v4 = ApplicationViewViewIdForCoreWindow;
      if ( ApplicationViewViewIdForCoreWindow < 0 )
      {
        v7 = 532LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)ApplicationViewViewIdForCoreWindow);
        goto LABEL_11;
      }
      ApplicationViewViewIdForCoreWindow = TaskFlowImmersiveShellBroker::TryGetApplicationViewViewIdForCoreWindow(
                                             this,
                                             v11,
                                             &v12);
      v4 = ApplicationViewViewIdForCoreWindow;
      if ( ApplicationViewViewIdForCoreWindow < 0 )
      {
        v7 = 535LL;
        goto LABEL_17;
      }
      if ( v12 )
      {
        ApplicationViewViewIdForCoreWindow = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Internal::UserActivities::IUserActivitySessionInfo *))(*(_QWORD *)a2 + 88LL))(a2);
        v4 = ApplicationViewViewIdForCoreWindow;
        if ( ApplicationViewViewIdForCoreWindow < 0 )
        {
          v7 = 544LL;
          goto LABEL_17;
        }
        ApplicationViewViewIdForCoreWindow = (*(__int64 (__fastcall **)(_QWORD, struct Windows::ApplicationModel::Internal::UserActivities::IUserActivitySessionInfo *))(**((_QWORD **)this + 33) + 56LL))(
                                               *((_QWORD *)this + 33),
                                               a2);
        v4 = ApplicationViewViewIdForCoreWindow;
        if ( ApplicationViewViewIdForCoreWindow < 0 )
        {
          v7 = 546LL;
          goto LABEL_17;
        }
      }
      else
      {
        TaskFlowDataEngineTelemetry::FailedToRetreiveWindowHandle(v8);
        _InterlockedIncrement((volatile signed __int32 *)&ListenerTelemetryReport::m_knownFailureCounter);
      }
    }
    v4 = 0;
LABEL_11:
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v13);
    return v4;
  }
  v4 = -2147467260;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x20E,
    (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
    (const char *)0x80004004LL);
  return v4;
}

/*
 * XREFs of ?OnViewDestroyed@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180378960
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x18002555C (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18006BBE8 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ExperienceManager_OnViewDestroyed_Params@AEAU_GUID@@@ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@QEAAXAEAU_GUID@@@Z @ 0x180375334 (--$ExperienceManager_OnViewDestroyed_Params@AEAU_GUID@@@ExperienceManager_OnViewDestroyed@QuickC.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18037608C (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_18037608C.c)
 *     ??1ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@QEAA@XZ @ 0x1803764DC (--1ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ?ExperienceManager_OnViewDestroyed_ReleasedLifeTime@ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@QEAAXXZ @ 0x180377678 (-ExperienceManager_OnViewDestroyed_ReleasedLifeTime@ExperienceManager_OnViewDestroyed@QuickConne.c)
 *     ?ExperienceManager_OnViewDestroyed_UnregisteredClientWindowReadyForPresentation@ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@QEAAXXZ @ 0x1803776FC (-ExperienceManager_OnViewDestroyed_UnregisteredClientWindowReadyForPresentation@ExperienceManage.c)
 *     ?StartActivity@ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@QEAAXXZ @ 0x180379CEC (-StartActivity@ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18037A048 (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?get@?$static_lazy@VQuickConnectLoggingProvider@@@details@wil@@QEAAPEAVQuickConnectLoggingProvider@@P6AXXZ@Z @ 0x18037B9D4 (-get@-$static_lazy@VQuickConnectLoggingProvider@@@details@wil@@QEAAPEAVQuickConnectLoggingProvid.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CQuickConnectExperienceManager::OnViewDestroyed(
        CQuickConnectExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v11[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v12[40]; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+180h] [rbp+80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v12,
    (__int64)"ExperienceManager_OnViewDestroyed");
  v12[0] = &QuickConnectTelemetry::ExperienceManager_OnViewDestroyed::`vftable';
  QuickConnectTelemetry::ExperienceManager_OnViewDestroyed::StartActivity((QuickConnectTelemetry::ExperienceManager_OnViewDestroyed *)v12);
  QuickConnectTelemetry::ExperienceManager_OnViewDestroyed::ExperienceManager_OnViewDestroyed_Params<_GUID &>(
    (__int64)v12,
    (__int128 *)this + 16);
  SingleViewLightDismissHelper::UnregisterWithLightDismiss((CQuickConnectExperienceManager *)((char *)this + 232));
  v5 = *(_DWORD **)(wil::details::static_lazy<QuickConnectLoggingProvider>::get(
                      v4,
                      _lambda_f050a8947b8d1270f7eda0e498aa88e8_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v5 > 5u && tlgKeywordOn((__int64)v5, 0x200000000000LL) )
    tlgWriteTransfer_EventWriteTransfer(
      v6,
      (unsigned __int8 *)dword_1806A8A37,
      (const GUID *)(v12[6] + 8LL),
      0LL,
      2u,
      &v13);
  v11[0] = 0LL;
  v7 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 3,
         v11);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11[0] + 88LL))(v11[0], *((_QWORD *)this + 2));
    v8 = v7;
    if ( v7 >= 0 )
    {
      QuickConnectTelemetry::ExperienceManager_OnViewDestroyed::ExperienceManager_OnViewDestroyed_UnregisteredClientWindowReadyForPresentation((QuickConnectTelemetry::ExperienceManager_OnViewDestroyed *)v12);
      *((_QWORD *)this + 2) = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 1);
      QuickConnectTelemetry::ExperienceManager_OnViewDestroyed::ExperienceManager_OnViewDestroyed_ReleasedLifeTime((QuickConnectTelemetry::ExperienceManager_OnViewDestroyed *)v12);
      wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v12);
      v8 = 0;
      goto LABEL_10;
    }
    v9 = 650LL;
  }
  else
  {
    v9 = 649LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
    (const char *)(unsigned int)v7);
LABEL_10:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v11);
  QuickConnectTelemetry::ExperienceManager_OnViewDestroyed::~ExperienceManager_OnViewDestroyed((QuickConnectTelemetry::ExperienceManager_OnViewDestroyed *)v12);
  return v8;
}

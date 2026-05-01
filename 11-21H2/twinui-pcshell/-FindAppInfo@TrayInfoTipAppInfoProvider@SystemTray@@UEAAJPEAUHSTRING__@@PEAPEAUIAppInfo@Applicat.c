/*
 * XREFs of ?FindAppInfo@TrayInfoTipAppInfoProvider@SystemTray@@UEAAJPEAUHSTRING__@@PEAPEAUIAppInfo@ApplicationModel@Windows@@@Z @ 0x180490950
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$MakeAndInitialize@VTrayInfoTipAppInfo@SystemTray@@UIAppInfo@ApplicationModel@Windows@@AEAPEAUHSTRING__@@@Details@WRL@Microsoft@@YAJPEAPEAUIAppInfo@ApplicationModel@Windows@@AEAPEAUHSTRING__@@@Z @ 0x1804904A4 (--$MakeAndInitialize@VTrayInfoTipAppInfo@SystemTray@@UIAppInfo@ApplicationModel@Windows@@AEAPEAU.c)
 *     ??0?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1804905FC (--0-$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ??1FindAppInfoContext@TrayNotificationsTelemetry@@QEAA@XZ @ 0x1804907F4 (--1FindAppInfoContext@TrayNotificationsTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@FindAppInfoContext@TrayNotificationsTelemetry@@QEAAXPEAUHSTRING__@@@Z @ 0x1804912D4 (-StartActivity@FindAppInfoContext@TrayNotificationsTelemetry@@QEAAXPEAUHSTRING__@@@Z.c)
 *     ?Stop@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180491414 (-Stop@-$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?MatchesTrayInfoTipAppIdFormat@TrayUtility@SystemTray@@YA_NPEAUHSTRING__@@@Z @ 0x180491A28 (-MatchesTrayInfoTipAppIdFormat@TrayUtility@SystemTray@@YA_NPEAUHSTRING__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall SystemTray::TrayInfoTipAppInfoProvider::FindAppInfo(
        SystemTray::TrayInfoTipAppInfoProvider *this,
        HSTRING a2,
        struct Windows::ApplicationModel::IAppInfo **a3)
{
  HSTRING v5; // rdx
  unsigned int v6; // ebx
  struct Windows::ApplicationModel::IAppInfo *v8; // rax
  unsigned int v9; // ebx
  struct Windows::ApplicationModel::IAppInfo *v10; // [rsp+20h] [rbp-168h] BYREF
  HSTRING v11; // [rsp+28h] [rbp-160h] BYREF
  _QWORD v12[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  v11 = a2;
  *a3 = 0LL;
  wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TrayNotificationAreaLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v12);
  v12[0] = &TrayNotificationsTelemetry::FindAppInfoContext::`vftable';
  TrayNotificationsTelemetry::FindAppInfoContext::StartActivity(
    (TrayNotificationsTelemetry::FindAppInfoContext *)v12,
    a2);
  v10 = 0LL;
  if ( !SystemTray::TrayUtility::MatchesTrayInfoTipAppIdFormat(a2, v5)
    || (Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10),
        v6 = Microsoft::WRL::Details::MakeAndInitialize<SystemTray::TrayInfoTipAppInfo,Windows::ApplicationModel::IAppInfo,HSTRING__ * &>(
               &v10,
               &v11),
        (int)(v6 + 0x80000000) < 0)
    || v6 == -2147221164 )
  {
    wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v12);
    v8 = v10;
    v10 = 0LL;
    *a3 = v8;
    v9 = v8 == 0LL ? 0x80070490 : 0;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
    TrayNotificationsTelemetry::FindAppInfoContext::~FindAppInfoContext((TrayNotificationsTelemetry::FindAppInfoContext *)v12);
    return v9;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22,
      (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipappinfoprovider.cpp",
      (const char *)v6);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
    TrayNotificationsTelemetry::FindAppInfoContext::~FindAppInfoContext((TrayNotificationsTelemetry::FindAppInfoContext *)v12);
    return v6;
  }
}

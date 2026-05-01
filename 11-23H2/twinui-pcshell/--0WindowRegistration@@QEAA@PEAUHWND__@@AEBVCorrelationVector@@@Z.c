/*
 * XREFs of ??0WindowRegistration@@QEAA@PEAUHWND__@@AEBVCorrelationVector@@@Z @ 0x1806C4BD4
 * Callers:
 *     ??$make@VWindowRegistration@@$$TVCorrelationVector@@@winrt@@YA?A_P$$QEA$$T$$QEAVCorrelationVector@@@Z @ 0x1806C4938 (--$make@VWindowRegistration@@$$TVCorrelationVector@@@winrt@@YA-A_P$$QEA$$T$$QEAVCorrelationVecto.c)
 *     ??$make@VWindowRegistration@@AEAPEAUHWND__@@AEAVCorrelationVector@@@winrt@@YA?A_PAEAPEAUHWND__@@AEAVCorrelationVector@@@Z @ 0x1806C49CC (--$make@VWindowRegistration@@AEAPEAUHWND__@@AEAVCorrelationVector@@@winrt@@YA-A_PAEAPEAUHWND__@@.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?Stop@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1806C0328 (-Stop@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 *     ?Extend@CorrelationVector@@QEBA?AV1@XZ @ 0x1806C2168 (-Extend@CorrelationVector@@QEBA-AV1@XZ.c)
 *     ?RegisterFlyoutWindow@Utils@@YAXPEAUHWND__@@_N@Z @ 0x1806C2D50 (-RegisterFlyoutWindow@Utils@@YAXPEAUHWND__@@_N@Z.c)
 *     ??0?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1806C4A60 (--0-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ??1FlyoutWindowRegistered@MeetAndChatTelemetry@@QEAA@XZ @ 0x1806C4E40 (--1FlyoutWindowRegistered@MeetAndChatTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@FlyoutWindowRegistered@MeetAndChatTelemetry@@QEAAXAEBVCorrelationVector@@@Z @ 0x1806C5DD4 (-StartActivity@FlyoutWindowRegistered@MeetAndChatTelemetry@@QEAAXAEBVCorrelationVector@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
WindowRegistration *__fastcall WindowRegistration::WindowRegistration(
        WindowRegistration *this,
        HWND a2,
        TraceLoggingCorrelationVector **a3)
{
  HRESULT v4; // eax
  HWND v5; // rdx
  int v6; // edx
  int pvAttribute; // [rsp+20h] [rbp-168h] BYREF
  WindowRegistration *v9; // [rsp+28h] [rbp-160h]
  _QWORD v10[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  v9 = this;
  *((_QWORD *)this + 2) = &winrt::impl::produce<WindowRegistration,winrt::Windows::Foundation::IClosable>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)this + 1) = 1LL;
  *(_QWORD *)this = &WindowRegistration::`vftable';
  *((_QWORD *)this + 3) = a2;
  CorrelationVector::Extend(a3, (_QWORD *)this + 4);
  *((_QWORD *)this + 5) = 0LL;
  *((_BYTE *)this + 48) = 0;
  if ( *((_QWORD *)this + 3) )
  {
    wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v10);
    v10[0] = &MeetAndChatTelemetry::FlyoutWindowRegistered::`vftable';
    MeetAndChatTelemetry::FlyoutWindowRegistered::StartActivity(
      (MeetAndChatTelemetry::FlyoutWindowRegistered *)v10,
      (WindowRegistration *)((char *)this + 32));
    pvAttribute = 2;
    v4 = DwmSetWindowAttribute(*((HWND *)this + 3), 0x21u, &pvAttribute, 4u);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x25,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        (const char *)(unsigned int)v4);
    LOBYTE(v5) = 1;
    Utils::RegisterFlyoutWindow(*((HWND *)this + 3), v5);
    *((_BYTE *)this + 48) = 1;
    wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v10,
      v6);
    MeetAndChatTelemetry::FlyoutWindowRegistered::~FlyoutWindowRegistered((MeetAndChatTelemetry::FlyoutWindowRegistered *)v10);
  }
  return this;
}

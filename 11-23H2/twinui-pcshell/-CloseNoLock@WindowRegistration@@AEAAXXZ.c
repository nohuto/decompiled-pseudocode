/*
 * XREFs of ?CloseNoLock@WindowRegistration@@AEAAXXZ @ 0x1806C5034
 * Callers:
 *     ??1WindowRegistration@@UEAA@XZ @ 0x1806C4E6C (--1WindowRegistration@@UEAA@XZ.c)
 *     ?Close@?$produce@VWindowRegistration@@UIClosable@Foundation@Windows@winrt@@@impl@winrt@@UEAAHXZ @ 0x1806C4F60 (-Close@-$produce@VWindowRegistration@@UIClosable@Foundation@Windows@winrt@@@impl@winrt@@UEAAHXZ.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VMeetAndChatTelemetryLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18004D718 (-Stop@-$ActivityBase@VMeetAndChatTelemetryLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ??1MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAA@XZ @ 0x1800BA728 (--1MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VMeetAndChatTelemetryLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BA82C (--0-$ActivityBase@VMeetAndChatTelemetryLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?StartActivity@MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAAXW4MeetAndChatManagerOperationKind@2@AEBVCorrelationVector@@@Z @ 0x1800BB51C (-StartActivity@MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAAXW4MeetAndChatManagerOperat.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?RegisterFlyoutWindow@Utils@@YAXPEAUHWND__@@_N@Z @ 0x1806C2D50 (-RegisterFlyoutWindow@Utils@@YAXPEAUHWND__@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall WindowRegistration::CloseNoLock(WindowRegistration *this)
{
  DWORD v2; // edx
  _QWORD v3[40]; // [rsp+20h] [rbp-158h] BYREF

  if ( *((_BYTE *)this + 48) )
  {
    wil::ActivityBase<MeetAndChatTelemetryLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<MeetAndChatTelemetryLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v3);
    v3[0] = &MeetAndChatTelemetry::MeetAndChatManagerOperation::`vftable';
    MeetAndChatTelemetry::MeetAndChatManagerOperation::StartActivity(
      (__int64)v3,
      2,
      (volatile signed __int64 **)this + 4);
    Utils::RegisterFlyoutWindow(*((HWND *)this + 3), 0LL);
    *((_BYTE *)this + 48) = 0;
    wil::ActivityBase<MeetAndChatTelemetryLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v3, v2);
    MeetAndChatTelemetry::MeetAndChatManagerOperation::~MeetAndChatManagerOperation((MeetAndChatTelemetry::MeetAndChatManagerOperation *)v3);
  }
}

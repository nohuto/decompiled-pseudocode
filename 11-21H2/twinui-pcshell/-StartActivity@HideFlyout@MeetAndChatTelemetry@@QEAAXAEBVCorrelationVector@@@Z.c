/*
 * XREFs of ?StartActivity@HideFlyout@MeetAndChatTelemetry@@QEAAXAEBVCorrelationVector@@@Z @ 0x1801D2C80
 * Callers:
 *     ?HideMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@@Z @ 0x1801D17B8 (-HideMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x1802EBBD8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1805BF740 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate.c)
 *     ?Provider@MeetAndChatTelemetryLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1805CD88C (-Provider@MeetAndChatTelemetryLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?ToString@CorrelationVector@@QEBAPEADAEAY0IB@D@Z @ 0x1805CF200 (-ToString@CorrelationVector@@QEBAPEADAEAY0IB@D@Z.c)
 *     ?zInternalStart@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1805CFCF0 (-zInternalStart@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_Tl.c)
 */

void __fastcall MeetAndChatTelemetry::HideFlyout::StartActivity(
        MeetAndChatTelemetry::HideFlyout *this,
        const struct CorrelationVector *a2)
{
  const struct _tlgProvider_t *v4; // rax
  int v5; // edi
  DWORD CurrentThreadId; // eax
  __int64 v7; // r8
  __int64 v8; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v9; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+50h] [rbp-B8h] BYREF
  char v11[129]; // [rsp+60h] [rbp-A8h] BYREF

  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v4 = MeetAndChatTelemetryLogging::Provider();
  v5 = (int)v4;
  if ( *(_DWORD *)v4 > 5u && tlgKeywordOn((__int64)v4, 0x400000000000LL) )
  {
    v9 = (__int64)CorrelationVector::ToString(a2, (char (*)[129])v11);
    CurrentThreadId = GetCurrentThreadId();
    v7 = *((_QWORD *)this + 6);
    LODWORD(v8) = CurrentThreadId;
    v10 = 50331648LL;
    if ( *(_BYTE *)(v7 + 4) )
      _tlgGuidIsZero((const struct _GUID *)(v7 + 24));
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      v5,
      (__int64)&v10,
      (__int64)&v8,
      (__int64)&v9);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((MeetAndChatTelemetry::HideFlyout *)((char *)this + 8));
}

/*
 * XREFs of ??$IconBadgeChanged@AEBIPEBG@MeetAndChatTelemetry@@SAXAEBI$$QEAPEBG@Z @ 0x1806AF424
 * Callers:
 *     ?SetIconBadge@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUhstring@6@@Z @ 0x1806BF9C0 (-SetIconBadge@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUhstring@.c)
 * Callees:
 *     ?get@?$static_lazy@VMeetAndChatTelemetryLogging@@@details@wil@@QEAAPEAVMeetAndChatTelemetryLogging@@P6AXXZ@Z @ 0x1800BB71C (-get@-$static_lazy@VMeetAndChatTelemetryLogging@@@details@wil@@QEAAPEAVMeetAndChatTelemetryLoggi.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1803C907C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 */

char __fastcall MeetAndChatTelemetry::IconBadgeChanged<unsigned int const &,unsigned short const *>(
        _DWORD *a1,
        __int64 *a2)
{
  __int64 *v4; // rax
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // [rsp+40h] [rbp-18h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  v4 = wil::details::static_lazy<MeetAndChatTelemetryLogging>::get(
         (__int64)a1,
         (void (__cdecl *)())_lambda_f7280a8f7c8a9a0f992333b64944e967_::_lambda_invoker_cdecl_);
  v5 = (_DWORD *)v4[1];
  if ( *v5 > 5u )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)v5, 0x400000000000LL);
    if ( (_BYTE)v4 )
    {
      v10 = *a2;
      LODWORD(v11) = *a1;
      v12 = 0x1000000LL;
      LOBYTE(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                     v6,
                     (unsigned __int8 *)dword_180878984,
                     v7,
                     v8,
                     (__int64)&v11,
                     (const WCHAR **)&v10,
                     (__int64)&v12);
    }
  }
  return (char)v4;
}

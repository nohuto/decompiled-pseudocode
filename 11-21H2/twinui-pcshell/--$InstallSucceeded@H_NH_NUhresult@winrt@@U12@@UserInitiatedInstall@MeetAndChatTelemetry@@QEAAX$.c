/*
 * XREFs of ??$InstallSucceeded@H_NH_NUhresult@winrt@@U12@@UserInitiatedInstall@MeetAndChatTelemetry@@QEAAX$$QEAH$$QEA_N01$$QEAUhresult@winrt@@2@Z @ 0x1805BF43C
 * Callers:
 *     _lambda_724db070561b64a1d673c65688c83bb1_::operator()_winrt::Windows::Foundation::IAsyncOperationWithProgress_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress___ @ 0x1805BECAC (_lambda_724db070561b64a1d673c65688c83bb1_--operator()_winrt--Windows--Foundation--IAsyncOperatio.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VMeetAndChatTelemetryLogging@@@details@wil@@QEAAPEAVMeetAndChatTelemetryLogging@@P6AXXZ@Z @ 0x1800C77D8 (-get@-$static_lazy@VMeetAndChatTelemetryLogging@@@details@wil@@QEAAPEAVMeetAndChatTelemetryLoggi.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U1@U2@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@3433AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1805BF67C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U1@U2@U1@U1@U-$_tlgWrapperByVal@$07@@.c)
 */

char __fastcall MeetAndChatTelemetry::UserInitiatedInstall::InstallSucceeded<int,bool,int,bool,winrt::hresult,winrt::hresult>(
        __int64 a1,
        int *a2,
        _BYTE *a3,
        int *a4,
        char *a5,
        int *a6,
        int *a7)
{
  __int64 *v11; // rax
  int v12; // r9d
  int v13; // r10d
  int v14; // r8d
  char v15; // cl
  _BYTE v17[4]; // [rsp+60h] [rbp-20h] BYREF
  int v18; // [rsp+64h] [rbp-1Ch] BYREF
  int v19; // [rsp+68h] [rbp-18h] BYREF
  int v20; // [rsp+6Ch] [rbp-14h] BYREF
  int v21; // [rsp+70h] [rbp-10h] BYREF
  __int64 v22; // [rsp+78h] [rbp-8h] BYREF
  char v23; // [rsp+A0h] [rbp+20h] BYREF

  v11 = wil::details::static_lazy<MeetAndChatTelemetryLogging>::get(
          a1,
          _lambda_f7280a8f7c8a9a0f992333b64944e967_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v11[1] > 5u )
  {
    LOBYTE(v11) = tlgKeywordOn(v11[1], 0x400000000000LL);
    if ( (_BYTE)v11 )
    {
      v14 = *(_QWORD *)(a1 + 48) + 8;
      v22 = 0x2000000LL;
      v18 = *a7;
      v19 = *a6;
      v15 = *a5;
      v20 = *a4;
      v17[0] = *a3;
      v21 = *a2;
      v23 = v15;
      LOBYTE(v11) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                      v13,
                      (unsigned int)&unk_1806CC453,
                      v14,
                      v12,
                      (__int64)&v21,
                      (__int64)v17,
                      (__int64)&v20,
                      (__int64)&v23,
                      (__int64)&v19,
                      (__int64)&v18,
                      (__int64)&v22);
    }
  }
  return (char)v11;
}

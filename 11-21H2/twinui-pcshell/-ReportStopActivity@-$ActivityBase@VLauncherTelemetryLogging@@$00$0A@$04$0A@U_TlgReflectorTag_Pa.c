/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180133108
 * Callers:
 *     ?Destroy@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800C5C74 (-Destroy@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?Stop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18013304C (-Stop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6AXXZ@Z @ 0x1800C5AFC (-get@-$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x1802D5E74 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_1802D5E74.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@_W@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@_W@@@Z @ 0x1802DE3B0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@_W@.c)
 */

__int64 __fastcall wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        _QWORD *a1,
        int a2)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  _DWORD *v8; // rcx
  int v9; // ecx
  __int64 v10; // r8
  __int64 *v11; // rax
  _DWORD *v12; // rdi
  __int64 v13; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v15; // r8
  int v16; // [rsp+A0h] [rbp-19h] BYREF
  int v17; // [rsp+A4h] [rbp-15h] BYREF
  __int64 v18; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v19; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v20; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v21; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v22; // [rsp+C8h] [rbp+Fh] BYREF
  __int64 v23; // [rsp+D0h] [rbp+17h] BYREF
  __int64 v24; // [rsp+D8h] [rbp+1Fh] BYREF
  __int64 v25; // [rsp+E0h] [rbp+27h] BYREF
  __int64 v26[5]; // [rsp+E8h] [rbp+2Fh] BYREF
  __int64 v27; // [rsp+120h] [rbp+67h] BYREF
  __int64 v28; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v29; // [rsp+130h] [rbp+77h] BYREF
  __int64 v30; // [rsp+138h] [rbp+7Fh] BYREF

  if ( a2 < 0 )
  {
    v5 = a1[6];
    v6 = *(unsigned int *)(v5 + 76);
    if ( (int)v6 >= 0 || (_DWORD)v6 != *(_DWORD *)(v5 + 88) || (v7 = v5 + 80, v5 == -80) )
    {
      v11 = wil::details::static_lazy<LauncherTelemetryLogging>::get(
              v6,
              _lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
      v12 = (_DWORD *)v11[1];
      if ( *v12 > 2u && tlgKeywordOn(v11[1], 0x200000000000LL) )
      {
        v13 = a1[6];
        v29 = *(_QWORD *)(v13 + 56);
        v30 = *(_QWORD *)(v13 + 48);
        CurrentThreadId = GetCurrentThreadId();
        v15 = a1[6];
        LODWORD(v28) = CurrentThreadId;
        LODWORD(v27) = a2;
        v18 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
          (int)v12,
          (int)&dword_1806A17FD,
          v15 + 8,
          (__int64)&v18,
          (__int64)&v27,
          (__int64)&v28,
          (__int64)&v30,
          (__int64)&v29);
      }
    }
    else
    {
      v8 = (_DWORD *)wil::details::static_lazy<LauncherTelemetryLogging>::get(
                       v6,
                       _lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_)[1];
      if ( *v8 > 2u && tlgKeywordOn((__int64)v8, 0x200000000000LL) )
      {
        v10 = a1[6];
        v19 = *(_QWORD *)(v7 + 120);
        v20 = *(_QWORD *)(v7 + 112);
        LODWORD(v28) = *(_DWORD *)(v7 + 104);
        v21 = *(_QWORD *)(v7 + 96);
        v22 = *(_QWORD *)(v7 + 88);
        LODWORD(v27) = *(_DWORD *)(v7 + 80);
        v23 = *(_QWORD *)(v7 + 72);
        LODWORD(v29) = *(_DWORD *)(v7 + 32);
        v24 = *(_QWORD *)(v7 + 24);
        LODWORD(v30) = *(_DWORD *)v7;
        v25 = *(_QWORD *)(v7 + 128);
        v16 = *(_DWORD *)(v7 + 64);
        v26[0] = *(_QWORD *)(v7 + 56);
        v17 = *(_DWORD *)(v7 + 8);
        v18 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
          v9,
          (int)&dword_1806A1878,
          v10 + 8,
          (__int64)&v18,
          (__int64)&v17,
          (__int64)v26,
          (__int64)&v16,
          (__int64)&v25,
          (__int64)&v30,
          (__int64)&v24,
          (__int64)&v29,
          (__int64)&v23,
          (__int64)&v27,
          (__int64)&v22,
          (__int64)&v21,
          (__int64)&v28,
          (__int64)&v20,
          (__int64)&v19);
      }
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
}

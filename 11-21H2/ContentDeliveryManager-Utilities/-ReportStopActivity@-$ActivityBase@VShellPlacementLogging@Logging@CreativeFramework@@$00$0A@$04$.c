/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180063380
 * Callers:
 *     ??1CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x1800580BC (--1CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180065B8C (-Stop@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflec.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x18000164C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@_W@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@_W@@@Z @ 0x180002528 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@_W@.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_tlgProvider_t@@XZ @ 0x1800627C8 (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_tlgProvider_t@@XZ.c)
 */

__int64 __fastcall wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        _QWORD *a1,
        int a2)
{
  __int64 v4; // rax
  int v5; // ecx
  __int64 v6; // rdi
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // r8
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v13; // r8
  __int64 v14; // r9
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
  __int64 v26; // [rsp+E8h] [rbp+2Fh] BYREF
  __int64 v27; // [rsp+120h] [rbp+67h] BYREF
  __int64 v28; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v29; // [rsp+130h] [rbp+77h] BYREF
  __int64 v30; // [rsp+138h] [rbp+7Fh] BYREF

  if ( a2 < 0 )
  {
    v4 = a1[6];
    v5 = *(_DWORD *)(v4 + 76);
    if ( v5 >= 0 || v5 != *(_DWORD *)(v4 + 88) || (v6 = v4 + 80, v4 == -80) )
    {
      v9 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
      v10 = (__int64)v9;
      if ( *(_DWORD *)v9 > 2u
        && (*((_QWORD *)v9 + 2) & 0x200000000000LL) != 0
        && (*((_QWORD *)v9 + 3) & 0x200000000000LL) == *((_QWORD *)v9 + 3) )
      {
        v11 = a1[6];
        v29 = *(_QWORD *)(v11 + 56);
        v30 = *(_QWORD *)(v11 + 48);
        CurrentThreadId = GetCurrentThreadId();
        v13 = a1[6];
        LODWORD(v28) = CurrentThreadId;
        LODWORD(v27) = a2;
        v18 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
          v10,
          (unsigned __int8 *)dword_180190B61,
          (const GUID *)(v13 + 8),
          v14,
          (__int64)&v18,
          (__int64)&v27,
          (__int64)&v28,
          (const unsigned __int16 **)&v30,
          (const WCHAR **)&v29);
      }
    }
    else
    {
      v7 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
      if ( *(_DWORD *)v7 > 2u
        && (*((_QWORD *)v7 + 2) & 0x200000000000LL) != 0
        && (*((_QWORD *)v7 + 3) & 0x200000000000LL) == *((_QWORD *)v7 + 3) )
      {
        v8 = a1[6];
        v19 = *(_QWORD *)(v6 + 120);
        v20 = *(_QWORD *)(v6 + 112);
        LODWORD(v28) = *(_DWORD *)(v6 + 104);
        v21 = *(_QWORD *)(v6 + 96);
        v22 = *(_QWORD *)(v6 + 88);
        LODWORD(v27) = *(_DWORD *)(v6 + 80);
        v23 = *(_QWORD *)(v6 + 72);
        LODWORD(v29) = *(_DWORD *)(v6 + 32);
        v24 = *(_QWORD *)(v6 + 24);
        LODWORD(v30) = *(_DWORD *)v6;
        v25 = *(_QWORD *)(v6 + 128);
        v16 = *(_DWORD *)(v6 + 64);
        v26 = *(_QWORD *)(v6 + 56);
        v17 = *(_DWORD *)(v6 + 8);
        v18 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
          (int)v7,
          (int)&dword_18019092C,
          v8 + 8,
          (__int64)v7,
          (__int64)&v18,
          (__int64)&v17,
          (const unsigned __int16 **)&v26,
          (__int64)&v16,
          (const unsigned __int16 **)&v25,
          (__int64)&v30,
          (const WCHAR **)&v24,
          (__int64)&v29,
          (const unsigned __int16 **)&v23,
          (__int64)&v27,
          (const unsigned __int16 **)&v22,
          (const WCHAR **)&v21,
          (__int64)&v28,
          (const unsigned __int16 **)&v20,
          (const WCHAR **)&v19);
      }
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
}

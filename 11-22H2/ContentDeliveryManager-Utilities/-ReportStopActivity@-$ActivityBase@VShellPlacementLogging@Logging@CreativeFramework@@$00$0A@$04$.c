/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18005CAE4
 * Callers:
 *     ?Destroy@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800554F0 (-Destroy@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgRef.c)
 *     ?Stop@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005ECC8 (-Stop@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflec.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x180001618 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     _tlgKeywordOn @ 0x180001D28 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@_W@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@_W@@@Z @ 0x18000262C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@_W@.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_tlgProvider_t@@XZ @ 0x18005C22C (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_tlgProvider_t@@XZ.c)
 */

__int64 __fastcall wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        _QWORD *a1,
        int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  const struct _tlgProvider_t *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  int v19; // [rsp+A0h] [rbp-19h] BYREF
  int v20; // [rsp+A4h] [rbp-15h] BYREF
  __int64 v21; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v22; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v23; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v24; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v25; // [rsp+C8h] [rbp+Fh] BYREF
  __int64 v26; // [rsp+D0h] [rbp+17h] BYREF
  __int64 v27; // [rsp+D8h] [rbp+1Fh] BYREF
  __int64 v28; // [rsp+E0h] [rbp+27h] BYREF
  __int64 v29; // [rsp+E8h] [rbp+2Fh] BYREF
  __int64 v30; // [rsp+120h] [rbp+67h] BYREF
  __int64 v31; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v32; // [rsp+130h] [rbp+77h] BYREF
  __int64 v33; // [rsp+138h] [rbp+7Fh] BYREF

  if ( a2 < 0 )
  {
    v4 = a1[6];
    v5 = *(unsigned int *)(v4 + 76);
    if ( (int)v5 >= 0 || (_DWORD)v5 != *(_DWORD *)(v4 + 88) || (v6 = v4 + 80, v4 == -80) )
    {
      v11 = CreativeFramework::Logging::ShellPlacementLogging::Provider(v5);
      v12 = (__int64)v11;
      if ( *(_DWORD *)v11 > 2u && tlgKeywordOn((__int64)v11, 0x200000000000LL) )
      {
        v13 = a1[6];
        v14 = *(_QWORD *)(v13 + 56);
        v33 = *(_QWORD *)(v13 + 48);
        v32 = v14;
        CurrentThreadId = GetCurrentThreadId();
        v16 = a1[6];
        LODWORD(v31) = CurrentThreadId;
        LODWORD(v30) = a2;
        v21 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
          v12,
          (unsigned __int8 *)dword_18017AD1E,
          (const GUID *)(v16 + 8),
          v17,
          (__int64)&v21,
          (__int64)&v30,
          (__int64)&v31,
          (const wchar_t **)&v33,
          (const wchar_t **)&v32);
      }
    }
    else
    {
      v7 = CreativeFramework::Logging::ShellPlacementLogging::Provider(v5);
      if ( *(_DWORD *)v7 > 2u && tlgKeywordOn((__int64)v7, 0x200000000000LL) )
      {
        v9 = *(_QWORD *)(v6 + 120);
        v10 = a1[6];
        v23 = *(_QWORD *)(v6 + 112);
        LODWORD(v31) = *(_DWORD *)(v6 + 104);
        v24 = *(_QWORD *)(v6 + 96);
        v25 = *(_QWORD *)(v6 + 88);
        LODWORD(v30) = *(_DWORD *)(v6 + 80);
        v26 = *(_QWORD *)(v6 + 72);
        LODWORD(v32) = *(_DWORD *)(v6 + 32);
        v27 = *(_QWORD *)(v6 + 24);
        LODWORD(v33) = *(_DWORD *)v6;
        v28 = *(_QWORD *)(v6 + 128);
        v19 = *(_DWORD *)(v6 + 64);
        v29 = *(_QWORD *)(v6 + 56);
        v20 = *(_DWORD *)(v6 + 8);
        v22 = v9;
        v21 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
          v8,
          (int)&dword_18017AAE9,
          v10 + 8,
          v8,
          (__int64)&v21,
          (__int64)&v20,
          (const wchar_t **)&v29,
          (__int64)&v19,
          (const wchar_t **)&v28,
          (__int64)&v33,
          (const wchar_t **)&v27,
          (__int64)&v32,
          (const wchar_t **)&v26,
          (__int64)&v30,
          (const wchar_t **)&v25,
          (const wchar_t **)&v24,
          (__int64)&v31,
          (const wchar_t **)&v23,
          (const wchar_t **)&v22);
      }
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
}
